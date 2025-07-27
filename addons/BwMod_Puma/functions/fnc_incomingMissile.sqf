#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Rotates the turret, fires smoke, and plays missile warning sound louder.
 *
 *  Parameter(s):
 *      0: OBJECT - Target vehicle of the missile (Puma).
 *      1: STRING - Ammo class of missile.
 *      2: OBJECT - Vehicle that fired the missile.
 *      3: OBJECT - Unit that pulled the trigger.
 *      4: OBJECT - Missile.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_BwMod_Puma_fnc_incomingMissile
 *
 */

#define GUNNER_TURRET [0]
#define AZIMUTH_TOLERANCE 1
#define TURRET_OVERRIDE_TIMEOUT 4
#define FIRE_SMOKE_TIMEOUT 5

params ["_vehicle", "_ammo", "_whoFired", "_instigator", "_missile"];
TRACE_1("Incoming Missile",_this);

if !(_vehicle turretLocal GUNNER_TURRET || {cameraOn isEqualTo _vehicle}) exitWith {};

// has to be lockable missile
if (getNumber (configFile >> "CfgAmmo" >> _ammo >> "irlock") == 0) exitWith {};

// target has to be manned
if (crew _vehicle isEqualTo []) exitWith {};

[{
    (_this select 0) params ["_vehicle", "_ammo", "_whoFired", "_instigator", "_missile", "_time", "_soundPlayed"];

    if (time < _time) exitWith {};

    private _distance = _vehicle distance _missile;
    if (!alive _missile || _distance < 10) exitWith {
        _vehicle setVariable [QGVAR(mussMissileLock), objNull];
        [_this select 1] call CBA_fnc_removePerFrameHandler;
    };

    if (_distance >= 2000) exitWith {};

    // Handle every missile only once
    private _lockedMissile = _vehicle getVariable [QGVAR(mussMissileLock), objNull];

    if (!isNull _lockedMissile || _lockedMissile isEqualTo _missile) exitWith {};
    _vehicle setVariable [QGVAR(mussMissileLock), _missile];

    if (cameraOn isEqualTo _vehicle && !_soundPlayed) then {
        if (!isTurnedOut (call CBA_fnc_currentUnit)) then {
            TRACE_1("Play missile warning sound",_vehicle);
            playSound [QGVAR(IncomingMissileWarning), 2, 0];
        };

        (_this select 0) set [6, true];
    };

    if (_vehicle getVariable [QGVAR(mussTurretOverwrite), false]) exitWith {};

    // we need to be able to fire smoke
    if (_vehicle turretLocal GUNNER_TURRET && {[_vehicle, true] call EFUNC(SmokeLauncher,canFireSmoke)}) then {
        TRACE_3("MUSS rotate turret and smoke",_vehicle,_whoFired,_missile);
        _vehicle setVariable [QGVAR(mussTurretOverwrite), true];
        [_vehicle, GUNNER_TURRET, getPosASL _missile, true] call ace_hunterkiller_fnc_slew;

        [{
            params ["_vehicle", "_missile"];

            ([_vehicle, GUNNER_TURRET] call CBA_fnc_turretDir) params ["_azimuth"];

            abs (_azimuth - (_vehicle getDir _missile)) < AZIMUTH_TOLERANCE
        }, {
            params ["_vehicle"];

            // break lock
            TRACE_1("Turret aligned - Breaking lock",_vehicle);
            _vehicle lockCameraTo [objNull, GUNNER_TURRET, true];
            _vehicle setVariable [QGVAR(mussTurretOverwrite), false];

            [{
                [_this select 0] call EFUNC(SmokeLauncher,canFireSmoke)
            }, {
                params ["_vehicle", "_missile"];

                if (!alive _missile) exitWith {};

                TRACE_1("Firing smoke",_vehicle);
                [_vehicle] call EFUNC(SmokeLauncher,fireSmoke);
            }, _this, FIRE_SMOKE_TIMEOUT] call CBA_fnc_waitUntilAndExecute;
        },
        [_vehicle, _missile],
        TURRET_OVERRIDE_TIMEOUT,
        {
            params ["_vehicle"];

            // break lock
            TRACE_1("Timeout - Breaking lock",_vehicle);
            _vehicle lockCameraTo [objNull, GUNNER_TURRET, true];
            _vehicle setVariable [QGVAR(mussTurretOverwrite), false];
        }] call CBA_fnc_waitUntilAndExecute;
    };
}, 0, [_vehicle, _ammo, _whoFired, _instigator, _missile, time + 0.5, false]] call CBA_fnc_addPerFrameHandler;

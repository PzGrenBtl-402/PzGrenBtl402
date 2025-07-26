#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Description
 *
 *  Parameter(s):
 *      0: TYPE - Parameter description
 *
 *  Returns:
 *       TYPE - Description
 *
 *  Example:
 *      _this call PzGrenBtl402_BwMod_Puma_fnc_incomingMissile
 *
 */

#define GUNNER_TURRET [0]
#define AZIMUTH_TOLERANCE 1
#define TURRET_OVERRIDE_MAX_TIME 4

params ["_vehicle", "_ammo", "_whoFired", "_instigator", "_missile"];
TRACE_1("Incoming Missile",_this);

if !(_vehicle turretLocal GUNNER_TURRET) exitWith {};

// has to be lockable missile
if (getNumber (configFile >> "CfgAmmo" >> _ammo >> "irlock") == 0) exitWith {};

// target has to be manned
if (crew _vehicle isEqualTo []) exitWith {};

// we need to have smoke
private _smokeLauncher = [typeOf _vehicle] call EFUNC(SmokeLauncher,getSmokeLauncher);
if (_vehicle ammo _smokeLauncher == 0) exitWith {};

[{
    (_this select 0) params ["_vehicle", "_ammo", "_whoFired", "_instigator", "_missile", "_time"];

    if (time < _time) exitWith {};

    if (!alive _missile) exitWith {
        [_this select 1] call CBA_fnc_removePerFrameHandler;
    };

    if ((_vehicle distance _missile >= 2000) || {_vehicle getVariable [QGVAR(mussTurretOverwrite), false]}) exitWith {};

    // Handle every missile only once
    if ((_vehicle getVariable [QGVAR(mussMissileLock), objNull]) isEqualTo _missile) exitWith {};

    TRACE_3("MUSS rotate turret and smoke",_vehicle,_whoFired,_missile);
    _vehicle setVariable [QGVAR(mussTurretOverwrite), true];
    _vehicle setVariable [QGVAR(mussMissileLock), _missile];
    [_vehicle, GUNNER_TURRET, getPosASLVisual _missile, true] call ace_hunterkiller_fnc_slew;

    [{
        params ["_vehicle", "_missile"];

        abs ((([_vehicle, GUNNER_TURRET] call CBA_fnc_turretDir) select 0) - (_vehicle getDir _missile)) < AZIMUTH_TOLERANCE
    }, {
        params ["_vehicle"];

        // break lock
        TRACE_1("Turret aligned - Breaking lock",_vehicle);
        _vehicle lockCameraTo [objNull, GUNNER_TURRET, true];
        _vehicle setVariable [QGVAR(mussTurretOverwrite), false];

        [{
            params ["_vehicle", "_missile"];

            alive _missile &&
            {!(_vehicle getVariable [QEGVAR(SmokeLauncher,reloading), false])}
        }, {
            params ["_vehicle"];

            TRACE_1("Firing smoke",_vehicle);
            [_vehicle] call EFUNC(SmokeLauncher,fireSmoke);
        }, _this, 10] call CBA_fnc_waitUntilAndExecute;
    },
    [_vehicle, _missile],
    TURRET_OVERRIDE_MAX_TIME, {
        params ["_vehicle"];

        // break lock
        TRACE_1("Timeout - Breaking lock",_vehicle);
        _vehicle lockCameraTo [objNull, GUNNER_TURRET, true];
        _vehicle setVariable [QGVAR(mussTurretOverwrite), false];
    }] call CBA_fnc_waitUntilAndExecute;

    [_this select 1] call CBA_fnc_removePerFrameHandler;
}, 0.1, [_vehicle, _ammo, _whoFired, _instigator, _missile, time + 0.5]] call CBA_fnc_addPerFrameHandler;

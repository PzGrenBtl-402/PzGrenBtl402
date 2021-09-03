#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Event called if a player changes turret (position in vehicle).
 *      Displays smoke ammo count for gunner and commander.
 *      Listens to "launchCM" key and fires smoke launcher if pressed.
 *
 *  Parameter(s):
 *      0: OBJECT - Player.
 *      1: ARRAY - Turret.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [player, [0]] call PzGrenBtl402_fnc_marderTurretChanged
 *
 */

#define GUNNER_TURRET [0]

params ["_player", "_turret"];

private _veh = vehicle _player;

if (GVAR(smokeAmmoPFH) >= 0) then {
    [GVAR(smokeAmmoPFH)] call CBA_fnc_removePerFrameHandler;
    GVAR(smokeAmmoPFH) = -1;
    GVAR(lastSmokeAmmoCount) = -1;

    private _display = uiNamespace getVariable [QGVAR(marderAmmoDisplay), displayNull];
    if (!isNull _display) then {
        ([QGVAR(SmokeAmmoRscDisplay)] call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
    };
};

if !(_veh isKindOf "Redd_Marder_1A5_base") exitWith {};

private _isGunnerOrCommander = _player isEqualTo (gunner _veh) || _player isEqualTo (commander _veh) || _turret isEqualTo [2]; // Commander in highest seat
if (!_isGunnerOrCommander || !alive _player) exitWith {};

GVAR(smokeAmmoPFH) = [{
    params ["_args", "_handle"];
    _args params ["_player", "_veh"];

    // Restart display if null (not just at start, this will happen periodicly)
    private _display = uiNamespace getVariable [QGVAR(marderAmmoDisplay), displayNull];
    if (isNull _display) then {
        ([QGVAR(SmokeAmmoRscDisplay)] call BIS_fnc_rscLayer) cutRsc [QGVAR(SmokeAmmoRscDisplay), "PLAIN", 1, false];
        GVAR(lastSmokeAmmoCount) = -1;

        _display = uiNamespace getVariable [QGVAR(marderAmmoDisplay), displayNull]; // Get newly created display
        if (isNull _display) exitWith { // If display is still not initialized, exit PFH
            [_handle] call CBA_fnc_removePerFrameHandler;
            GVAR(smokeAmmoPFH) = -1;
        };

        _display setVariable [QGVAR(textColor), ctrlTextColor (_display displayCtrl IDC_AMMO)]; // save original text color
    };

    private _gunner = _veh turretUnit GUNNER_TURRET;
    private _canLaunchSmoke = !isNull _gunner && {alive _gunner} && !{_gunner getVariable ["ace_isunconscious", false]};

    // Launch SmokeLauncher if shortcut is pressed
    if (_canLaunchSmoke && inputAction "launchCM" > 0 && !(_veh getVariable [QGVAR(smokeLauncherReloading), false])) then {
        [_veh] call PzGrenBtl402_fnc_marderFireSmokeLauncher;
    };

    private _ctrlAmmo = _display displayCtrl IDC_AMMO;
    // Set text color
    if (!_canLaunchSmoke || _veh getVariable [QGVAR(smokeLauncherReloading), false]) then {
        private _ctrlAmmoRedTextColor = [0.9, 0, 0, 1];
        if ((ctrlTextColor _ctrlAmmo) isNotEqualTo _ctrlAmmoRedTextColor) then {
            _ctrlAmmo ctrlSetTextColor _ctrlAmmoRedTextColor;
        };
    } else {
        private _ctrlAmmoOriginalTextColor = _display getVariable [QGVAR(textColor), [1, 1, 1, 1]];
        if ((ctrlTextColor _ctrlAmmo) isNotEqualTo _ctrlAmmoOriginalTextColor) then {
            _ctrlAmmo ctrlSetTextColor _ctrlAmmoOriginalTextColor;
        };
    };

    // Update ammo count
    private _ammo = _veh ammo QGVAR(SmokeLauncher);
    if (_ammo isNotEqualTo GVAR(lastSmokeAmmoCount)) then {
        _ctrlAmmo ctrlSetText format ["NbMWAnl: %1", _ammo];
    };
    GVAR(lastSmokeAmmoCount) = _ammo;
}, 0, [_player, _veh]] call CBA_fnc_addPerFrameHandler;

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
 *      [player, [0]] call PzGrenBtl402_SmokeLauncher_fnc_turretChanged
 *
 */

params ["_player", "_turret"];

private _veh = vehicle _player;

if (GVAR(PFH) >= 0) then {
    [GVAR(PFH)] call CBA_fnc_removePerFrameHandler;
    GVAR(PFH) = -1;
    GVAR(lastAmmoCount) = -1;

    private _display = uiNamespace getVariable [QGVAR(display), displayNull];
    if (!isNull _display) then {
        ([QGVAR(RscDisplay)] call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
    };
};

private _vehCfg = configFile >> "CfgVehicles" >> typeOf _veh;
private _gunnerAndCommanderCanSmoke = [_vehCfg >> "PzGrenBtl402_gunnerAndCommanderCanSmoke"] call BIS_fnc_getCfgDataBool;
if (!_gunnerAndCommanderCanSmoke) exitWith {};

private _smokeLauncher = getText (_vehCfg >> "PzGrenBtl402_smokeLauncherMuzzle");

private _isGunnerOrCommander = _player isEqualTo (gunner _veh) || _player isEqualTo (commander _veh) || _turret isEqualTo [2]; // Commander in highest seat
if (!_isGunnerOrCommander || !alive _player) exitWith {};

GVAR(PFH) = [{
    params ["_args", "_handle"];
    _args params ["_player", "_veh", "_smokeLauncher"];

    // Restart display if null (not just at start, this will happen periodicly)
    private _display = uiNamespace getVariable [QGVAR(display), displayNull];
    if (isNull _display) then {
        ([QGVAR(RscDisplay)] call BIS_fnc_rscLayer) cutRsc [QGVAR(RscDisplay), "PLAIN", 1, false];
        GVAR(lastAmmoCount) = -1;

        _display = uiNamespace getVariable [QGVAR(display), displayNull]; // Get newly created display
        if (isNull _display) exitWith { // If display is still not initialized, exit PFH
            [_handle] call CBA_fnc_removePerFrameHandler;
            GVAR(PFH) = -1;
        };

        _display setVariable [QGVAR(textColor), ctrlTextColor (_display displayCtrl IDC_AMMO)]; // save original text color
    };

    private _gunner = gunner _veh;
    private _gunnerCanSmoke = !isNull _gunner && {alive _gunner} && {!(_gunner getVariable ["ace_isunconscious", false])};
    private _smokeReloading = _veh getVariable [QGVAR(reloading), false];

    // Launch SmokeLauncher if shortcut is pressed
    if (_gunnerCanSmoke && inputAction "launchCM" > 0 && !_smokeReloading) then {
        [_veh, _smokeLauncher] call FUNC(fireLauncher);
    };

    private _ctrlAmmo = _display displayCtrl IDC_AMMO;
    // Set text color
    if (!_gunnerCanSmoke || _smokeReloading) then {
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
    private _ammo = _veh ammo _smokeLauncher;
    if (_ammo isNotEqualTo GVAR(lastAmmoCount)) then {
        _ctrlAmmo ctrlSetText format [LLSTRING(ammoCount), _ammo];
    };
    GVAR(lastAmmoCount) = _ammo;
}, 0, [_player, _veh, _smokeLauncher]] call CBA_fnc_addPerFrameHandler;

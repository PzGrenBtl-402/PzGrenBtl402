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

private _vehicle = vehicle _player;

if (GVAR(PFH) >= 0) then {
    [GVAR(PFH)] call CBA_fnc_removePerFrameHandler;
    GVAR(PFH) = -1;
    GVAR(lastAmmoCount) = -1;

    private _display = uiNamespace getVariable [QGVAR(display), displayNull];
    if (!isNull _display) then {
        ([QGVAR(RscDisplay)] call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
    };
};

private _gunnerAndCommanderCanSmoke = GVAR(gunnerAndCommanderCanSmokeCache) getOrDefaultCall [typeOf _vehicle, {
    [configOf _vehicle >> "PzGrenBtl402_gunnerAndCommanderCanSmoke"] call BIS_fnc_getCfgDataBool
}, true];

if (!_gunnerAndCommanderCanSmoke) exitWith {};

private _isGunnerOrCommander = (_player isEqualTo (gunner _vehicle) || {_player isEqualTo (commander _vehicle)} || {_turret isEqualTo [2]}); // Commander in highest seat
if (!_isGunnerOrCommander || !alive _player) exitWith {};

private _smokeLauncher = [typeOf _vehicle] call FUNC(getSmokeLauncher);

GVAR(PFH) = [{
    params ["_args", "_handle"];
    _args params ["_player", "_turret", "_vehicle", "_smokeLauncher"];

    // Restart display if null (not just at start, this will happen periodically)
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

    private _canFireSmoke = [_vehicle] call FUNC(canFireSmoke);

    // Launch SmokeLauncher if shortcut is pressed
    private _success = true;
    if (_canFireSmoke && {inputAction "launchCM" > 0}) then {
        _success = [_vehicle, _smokeLauncher] call FUNC(fireSmoke);
    };

    private _isTurnedOut = isTurnedOut _player || _turret isEqualTo [2];
    private _ctrlAmmo = _display displayCtrl IDC_AMMO;

    // Hide Ammo count when turned out
    if (_isTurnedOut) exitWith {
        _ctrlAmmo ctrlShow false;
    };
    _ctrlAmmo ctrlShow true;

    // Set text color
    if (!_canFireSmoke || !_success) then {
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
    private _ammo = _vehicle ammo _smokeLauncher;
    if (_ammo isNotEqualTo GVAR(lastAmmoCount)) then {
        _ctrlAmmo ctrlSetText format [LLSTRING(ammoCount), _ammo];
    };
    GVAR(lastAmmoCount) = _ammo;
}, 0, [_player, _turret, _vehicle, _smokeLauncher]] call CBA_fnc_addPerFrameHandler;

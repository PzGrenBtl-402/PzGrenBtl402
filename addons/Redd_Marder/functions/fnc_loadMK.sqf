#include "script_component.hpp"
/**
 *  Author: Mishkar
 *
 *  Description:
 *      Loads 25 rounds into 20mm MK.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: STRING - Ammo type (HE or AP).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [SPz_0, 'AP'] call PzGrenBtl402_Redd_Marder_fnc_loadMK
 *
 */

params [["_veh", objNull, [objNull]], ["_ammoType", "", [""]]];

if (isNull _veh || _ammoType isEqualTo "") exitWith {};

private _ammoConfig = switch _ammoType do {
    case 'HE': {[0, 250, "Redd_MK20_HE_Mag", "mts_items_flag_green", 25]}; // magazine index, max ammo count, mag type, ammo item, fill amount
    case 'AP': {[1, 100, "Redd_MK20_AP_Mag", "mts_items_flag_red", 25]};
    default {[]};
};

if (_ammoConfig isEqualTo []) exitWith {
    ERROR("_ammoType must be HE or AP.");
};

if (!isNull gunner _veh) exitWith {
    [
        [LLSTRING(loadMkfailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(loadMkGunnerInVehicle)]
    ] call CBA_fnc_notify;
};

_ammoConfig params ["_magIndex", "_maxAmmo", "_magType", "_ammoItem", "_fillAmount"];

private _magazines = magazinesAmmo [_veh, true];
private _ammoCount = (_magazines select _magIndex) select 1;

if (_ammoCount >= _maxAmmo) exitWith {
    [
        [LLSTRING(loadMkfailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(loadMkMagazineFull)]
    ] call CBA_fnc_notify;
};

if !(_ammoItem in itemCargo _veh) exitWith {
    [
        [LLSTRING(loadMkfailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(loadMkNoAmmoInVehicle)]
    ] call CBA_fnc_notify;
};

[5, [_veh, _ammoType, _ammoCount, _magType, _ammoItem, _fillAmount], {
    params ["_args"];
    _args params ["_veh", "_ammoType", "_ammoCount", "_magType", "_ammoItem", "_fillAmount"];

    private _ammoCountNew = _ammoCount + _fillAmount;

    [_veh, [_magType, _ammoCountNew, [0]]] remoteExecCall ["setMagazineTurretAmmo", 0];

    [_veh, _ammoItem] call CBA_fnc_removeItemCargo;

    private _message = format [localize format [LSTRING(loadedMkAmmo%1), _ammoType], _fillAmount];
    [_message, 1, [0, 0.9, 0, 1]] call CBA_fnc_notify;
}, {}, localize format [LSTRING(loadMk%1), _ammoType], nil, ["isNotInside"]] call ace_common_fnc_progressBar;

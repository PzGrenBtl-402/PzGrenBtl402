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
    case 'HE': {[0, 250, "Redd_MK20_HE_Mag", QEGVAR(MK20,he_ammo)]}; // magazine index, max ammo count, mag type, ammo item
    case 'AP': {[1, 100, "Redd_MK20_AP_Mag", QEGVAR(MK20,ap_ammo)]};
    default {[]};
};

if (_ammoConfig isEqualTo []) exitWith {
    ERROR("_ammoType must be HE or AP.");
};

if (!isNull gunner _veh) exitWith {
    [
        [LELSTRING(MK20,loadingfailed), 1.5, [0.9, 0, 0, 1]],
        [LELSTRING(Mk20,failGunnerInVehicle)]
    ] call CBA_fnc_notify;
};

TRACE_1("Ammo config", _ammoConfig);
_ammoConfig params ["_magIndex", "_maxAmmo", "_magType", "_ammoItem"];

private _magazines = magazinesAmmo [_veh, true];
private _ammoCount = (_magazines select _magIndex) select 1;

if (_ammoCount >= _maxAmmo) exitWith {
    [
        [LELSTRING(Mk20,loadingfailed), 1.5, [0.9, 0, 0, 1]],
        [LELSTRING(Mk20,failMagazineFull)]
    ] call CBA_fnc_notify;
};

if !(_ammoItem in itemCargo _veh) exitWith {
    [
        [LELSTRING(Mk20,loadingfailed), 1.5, [0.9, 0, 0, 1]],
        [LELSTRING(Mk20,failNoAmmoInVehicle)]
    ] call CBA_fnc_notify;
};

[5, [_veh, _ammoType, _ammoCount, _magType, _ammoItem], {
    params ["_args"];
    _args params ["_veh", "_ammoType", "_ammoCount", "_magType", "_ammoItem"];

    private _fillAmount = getNumber (configFile >> "CfgWeapons" >> _ammoItem >> QEGVAR(MK20,fillAmount));
    TRACE_1("loading ammo", _fillAmount);
    private _ammoCountNew = _ammoCount + _fillAmount;

    [_veh, [_magType, _ammoCountNew, [0]]] remoteExecCall ["setMagazineTurretAmmo", 0];

    [_veh, _ammoItem] call CBA_fnc_removeItemCargo;

    private _successMessage = format [localize format [ELSTRING(Mk20,loadedAmmo%1), _ammoType], _fillAmount];
    [_successMessage, 1, [0, 0.9, 0, 1]] call CBA_fnc_notify;
}, {}, localize format [ELSTRING(MK20,loading%1), _ammoType], nil, ["isNotInside"]] call ace_common_fnc_progressBar;

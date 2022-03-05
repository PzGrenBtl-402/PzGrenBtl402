#include "script_component.hpp"
/**
 *  Author: Mishkar
 *
 *  Description:
 *      Loads 25 rounds into 20 mm MK.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: STRING - Ammo type (HE or AP).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [SPz_0, 'AP'] call PzGrenBtl402_Redd_Marder_fnc_rearmMK
 *
 */

#define LOADING_TIME 15

params [["_vehicle", objNull, [objNull]], ["_ammoType", "", [""]]];

if (isNull _vehicle || _ammoType isEqualTo "") exitWith {};

private _magHE = "gm_425Rnd_20x139mm_hei_t_dm81";
private _magAP = "gm_75Rnd_20x139mm_apds_t_dm63";

private _magIndexHE = _vehicle magazinesTurret [[0], true] find _magHE;
private _magIndexAP = _vehicle magazinesTurret [[0], true] find _magAP;

private _ammoConfig = switch _ammoType do {
    case 'HE': {[_magIndexHE, 400, _magHE, QEGVAR(MK20,he_ammo)]}; // magazine index, max ammo count, mag type, ammo item
    case 'AP': {[_magIndexAP, 50, _magAP, QEGVAR(MK20,ap_ammo)]};
    default {[]};
};

if (_ammoConfig isEqualTo []) exitWith {
    ERROR("_ammoType must be HE or AP.");
};

if (!isNull gunner _vehicle) exitWith {
    [
        [LELSTRING(MK20,rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LELSTRING(Mk20,failGunnerInVehicle)]
    ] call CBA_fnc_notify;
};

TRACE_1("Ammo config", _ammoConfig);
_ammoConfig params ["_magIndex", "_maxAmmo", "_magType", "_ammoItem"];

private _magazines = magazinesAmmo [_vehicle, true];
private _ammoCount = (_magazines select _magIndex) select 1;

if (_ammoCount >= _maxAmmo) exitWith {
    [
        [LELSTRING(Mk20,rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LELSTRING(Mk20,failMagazineFull)]
    ] call CBA_fnc_notify;
};

if !(_ammoItem in itemCargo _vehicle) exitWith {
    [
        [LELSTRING(Mk20,rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LELSTRING(Mk20,failNoAmmoInVehicle)]
    ] call CBA_fnc_notify;
};

private _fillAmount = getNumber (configFile >> "CfgWeapons" >> _ammoItem >> QEGVAR(MK20,fillAmount));
TRACE_2("Rearming amount", _ammoItem, _fillAmount);

private _rearmingText = format [localize format [ELSTRING(MK20,rearming%1), _ammoType], _fillAmount];

[
    LOADING_TIME,
    [_vehicle, _ammoType, _ammoCount, _fillAmount, _magType, _ammoItem],
    {
        params ["_args"];
        _args params ["_vehicle", "_ammoType", "_ammoCount", "_fillAmount", "_magType", "_ammoItem"];

        private _ammoCountNew = _ammoCount + _fillAmount;

        // this uses ACEs version of adding ammo because BIS command is broken
        // redirects to ace_rearm_fnc_setTurretMagazineAmmo
        [QGVAR(rearmMK20), [_vehicle, [0], _magType, [_ammoCountNew]]] call CBA_fnc_serverEvent; // remoteExec server (endpoint defined in postInit)

        [_vehicle, _ammoItem] call CBA_fnc_removeItemCargo;

        private _successText = format [localize format [ELSTRING(Mk20,rearmedAmmo%1), _ammoType], _fillAmount];
        [_successText, 1, [0, 0.9, 0, 1]] call CBA_fnc_notify;
    },
    {},
    _rearmingText,
    nil,
    ["isNotInside"]
] call ace_common_fnc_progressBar;

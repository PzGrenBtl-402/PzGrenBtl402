#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Rearms given vehicle with given magazine and ammo item in the inventory of the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle.
 *      1: ARRAY - Turret Path.
 *      2: STRING - Magazine Classname.
 *      3: ARRAY - List of ammo item classnames which can be used to rearm the given magazine.
 *                 If multiple items are in the vehcile inventory, the first item in the array has priority/gets chosen.
 *      4: NUMBER - Time in seconds it takes to rearm.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [SPz_0, [0], "Redd_MK20_HE_Mag", "pzgrenbtl402_rearm_mk20_he_ammo", 10] call PzGrenBtl402_Rearm_fnc_rearm
 *
 */

params [["_vehicle", objNull, [objNull]], ["_turretPath", [0], [[]]], ["_magazineClass", "", [""]], ["_compatibleAmmoItems", [], [[]]], ["_rearmingDuration", 15, [0]]];

TRACE_1("Rearm called", _this);

if (isNull _vehicle || _magazineClass isEqualTo "" || _compatibleAmmoItems isEqualTo []) exitWith {};

if (!isNull gunner _vehicle) exitWith {
    [
        [LLSTRING(rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(failGunnerInVehicle)]
    ] call CBA_fnc_notify;
};

private _magazineCargo = magazineCargo _vehicle;
private _ammoItemIndex = _compatibleAmmoItems findIf {_x in _magazineCargo};
if (_ammoItemIndex < 0) exitWith {
    [
        [LLSTRING(rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(failNoAmmoInVehicle)]
    ] call CBA_fnc_notify;
};

private _ammoItem = _compatibleAmmoItems select _ammoItemIndex;

private _rounds = getNumber (configFile >> "CfgMagazines" >> _ammoItem >> "count");
private _maxMagazines [_vehicle, _turretPath, _magazineClass] call ace_rearm_fnc_getMaxMagazines;
private _ammoCounts = [_vehicle, _turretPath, _magazineClass] call ace_rearm_fnc_getTurretMagazineAmmo;

TRACE_3("Magagzines", _ammoCounts, _maxMagazines, _rounds);

private _ammoToAdd = _rounds;
for "_i" from (count _ammoCounts - 1) to 0 do {
    private _count = _ammoCounts select _i;
    private _maxAmmo = _maxMagazines select _i;
    if (_count >= _maxAmmo) then {
        continue;
    };

    if (_ammoToAdd <= 0) then {
        break;
    };

    // 1: max 500, count 400, add 200
    // 2: max 500, count 0, add 100
    private _canAdd = (_maxAmmo - _count) min _ammoToAdd;
    _ammoToAdd = (_ammoToAdd - _canAdd) max 0;
    _ammoCounts set [_i, _count + _canAdd];
};

if (_ammoToAdd > 0) exitWith {
    [
        [LLSTRING(rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(failMagazineFull)]
    ] call CBA_fnc_notify;
};

private _magazineName = getText (configFile >> "CfgMagazines" >> _ammoItem >> "displayName");

[
    _rearmingDuration,
    [_vehicle, _turretPath, _magazineClass, _magazineName, _ammoItem, _ammoCounts, _rounds],
    {
        params ["_args"];
        _args params ["_vehicle", "_turretPath", "_magazineClass", "_magazineName", "_ammoItem", "_ammoCounts", "_rounds"];

        // this uses ACEs version of adding ammo because BIS command is broken
        // redirects to ace_rearm_fnc_setTurretMagazineAmmo
        [QGVAR(setTurretMagazineAmmo), [_vehicle, _turretPath, _magazineClass, _ammoCounts]] call CBA_fnc_serverEvent; // remoteExec server (endpoint defined in postInit)

        [_vehicle, _ammoItem] call CBA_fnc_removeMagazineCargo;

        private _successText = format [LLSTRING(rearmed), _rounds, _magazineName];
        [_successText, 1, [0, 0.9, 0, 1]] call CBA_fnc_notify;
    },
    {},
    format [LLSTRING(rearming), _rounds, _magazineName],
    nil,
    ["isNotInside"]
] call ace_common_fnc_progressBar;

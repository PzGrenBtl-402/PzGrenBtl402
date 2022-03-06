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

if (isNull _vehicle || _magazineClass isEqualTo "" || _compatibleAmmoItems isEqualTo []) exitWith {};

private _preferredAmmoItem = [_vehicle, _compatibleAmmoItems] call FUNC(getPreferredAmmoItem);
if (_preferredAmmoItem isEqualTo []) exitWith {
    [
        [LLSTRING(rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(failNoAmmoInVehicle)]
    ] call CBA_fnc_notify;
};
_preferredAmmoItem params ["_ammoItem", "_rounds"];

private _maxAmmo = getNumber (configFile >> "CfgMagazines" >> _magazineClass >> "count");
private _ammoCounts = [_vehicle, _turretPath, _magazineClass] call ace_rearm_fnc_getTurretMagazineAmmo;

TRACE_3("Magagzines", _ammoCounts, _maxAmmo, _rounds);

private _ammoToAdd = _rounds;
for "_i" from (count _ammoCounts - 1) to 0 do {
    private _count = _ammoCounts select _i;
    if (_count >= _maxAmmo) then {
        continue;
    };

    if (_ammoToAdd <= 0) then {
        break;
    };

    private _canAdd = (_maxAmmo - _count) min _ammoToAdd;
    _ammoToAdd = (_ammoToAdd - _canAdd) max 0;
    _ammoCounts set [_i, _count + _canAdd];
};

TRACE_1("New ammo counts", _ammoCounts);

if (_ammoToAdd > 0) exitWith {
    [
        [LLSTRING(rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(failMagazineFull)]
    ] call CBA_fnc_notify;
};

// Disable turret
private _originalDamage = _vehicle getHitPointDamage "hitturret";
_vehicle setHitPointDamage ["hitturret", 1, false, player];

private _magazineName = [_ammoItem] call EFUNC(Rearm,getMagazineName);

[
    _rearmingDuration,
    [_vehicle, _originalDamage, _turretPath, _magazineClass, _magazineName, _ammoItem, _ammoCounts, _rounds],
    {
        // On Success
        params ["_args"];
        _args params ["_vehicle", "_originalDamage", "_turretPath", "_magazineClass", "_magazineName", "_ammoItem", "_ammoCounts", "_rounds"];

        // this uses ACEs version of adding ammo because BIS command is broken
        // redirects to ace_rearm_fnc_setTurretMagazineAmmo
        [QGVAR(setTurretMagazineAmmo), [_vehicle, _turretPath, _magazineClass, _ammoCounts]] call CBA_fnc_serverEvent; // remoteExec server (endpoint defined in postInit)

        [_vehicle, _ammoItem, 1, _rounds] call CBA_fnc_removeMagazineCargo;

        // Enable turret
        _vehicle setHitPointDamage ["hitturret", _originalDamage, false, player];

        [format [LLSTRING(rearmed), _magazineName], 1, [0, 0.9, 0, 1]] call CBA_fnc_notify;
    },
    {
        // On Fail
        params ["_args"];
        _args params ["_vehicle", "_originalDamage"];

        // Enable turret
        _vehicle setHitPointDamage ["hitturret", _originalDamage, false, player];
    },
    format [LLSTRING(rearming), _magazineName],
    nil,
    ["isNotInside"]
] call ace_common_fnc_progressBar;

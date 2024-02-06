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

TRACE_1("Called rearm",_this);

if (isNull _vehicle || _magazineClass isEqualTo "" || _compatibleAmmoItems isEqualTo []) exitWith {};

private _rearmingMags = _vehicle getVariable [QGVAR(rearming), []];
if (_magazineClass in _rearmingMags) exitWith {ERROR_1("Already reaming %1",_magazineClass)};

private _maxAmmo = getNumber (configFile >> "CfgMagazines" >> _magazineClass >> "count");
private _ammoCounts = [_vehicle, _turretPath, _magazineClass] call ace_rearm_fnc_getTurretMagazineAmmo;

private _roundsToRearm = 0;
{
    _roundsToRearm = _roundsToRearm + (_maxAmmo - _x);
} foreach _ammoCounts;

TRACE_3("Magagzines",_ammoCounts,_maxAmmo,_roundsToRearm);

if (_roundsToRearm isEqualTo 0) exitWith {
    [
        [LLSTRING(rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(failMagazineFull)]
    ] call CBA_fnc_notify;
};

private _availableItems = [_vehicle, _compatibleAmmoItems] call FUNC(getAvailableAmmoItems);
if (_availableItems isEqualTo []) exitWith {
    [
        [LLSTRING(rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(failNoAmmoInVehicle)]
    ] call CBA_fnc_notify;
};

private _refillAmmoItems = [_compatibleAmmoItems, _availableItems, _roundsToRearm] call FUNC(getRefillAmmoItems);
if (_refillAmmoItems isEqualTo []) exitWith {
    [
        [LLSTRING(rearmingFailed), 1.5, [0.9, 0, 0, 1]],
        [LLSTRING(failMagazineFull)]
    ] call CBA_fnc_notify;
};

TRACE_2("Refill ammo items",_refillAmmoItems,_roundsToRearm);

private _simEvents = [_ammoCounts, _maxAmmo, _refillAmmoItems, _rearmingDuration] call FUNC(simulateRearmEvents);
private _totalTime = _simEvents select (count _simEvents - 1) select 0;

TRACE_2("Simulated events",_simEvents,_totalTime);

// Disable turret
if (_rearmingMags isEqualTo []) then {
    private _originalDamage = _vehicle getHitPointDamage "hitturret";
    _vehicle setVariable [QGVAR(originalTurretDamage), _originalDamage, true];
    [QGVAR(setTurretDamage), [_vehicle, 1], _vehicle] call CBA_fnc_targetEvent;
};

private _magazineName = [_magazineClass] call FUNC(getMagazineName);

_rearmingMags pushBack _magazineClass;
_vehicle setVariable [QGVAR(rearming), _rearmingMags, true];

[
    _totalTime,
    [_vehicle, _turretPath, _magazineClass, _magazineName, _simEvents],
    {_this call FUNC(rearmFinished)},
    {_this call FUNC(rearmFinished)},
    format [LLSTRING(rearming), _magazineName],
    {_this call FUNC(rearmProgress)},
    ["isNotInside"]
] call ace_common_fnc_progressBar;

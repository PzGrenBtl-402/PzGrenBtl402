#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Handles each frame durring the rearm progressBar.
 *
 *  Parameter(s):
 *      0: ARRAY - Arguments from fnc_rearm.
 *      1: NUMBER - Elapsed Time.
 *      2: NUMBER - Total time rearming will take.
 *
 *  Returns:
 *      BOOL - Keep going (on missing item or error return false)
 *
 *  Example:
 *      _this call PzGrenBtl402_Rearm_fnc_rearmProgress
 *
 */

params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_vehicle", "_turretPath", "_magazineClass", "_magazineName", "_simEvents"];

if !((_simEvents select 0) params ["_nextEventTime", "_ammoItem", "_ammoCounts"]) exitWith {
    ERROR("No Event");
    false
};
if (_nextEventTime > _elapsedTime) exitWith {true}; // Waiting on next event

_ammoItem params ["_ammoItemClass", "_rounds"];

// Remove item for inventory
private _success = [_vehicle, _ammoItemClass, 1, _rounds] call CBA_fnc_removeMagazineCargo;

if (!_success) exitWith {false}; // Item does not exist in vehicle anymore

// this uses ACEs version of adding ammo because BIS command is broken
// redirects to ace_rearm_fnc_setTurretMagazineAmmo
[QGVAR(setTurretMagazineAmmo), [_vehicle, _turretPath, _magazineClass, _ammoCounts]] call CBA_fnc_serverEvent; // remoteExec server (endpoint defined in postInit)

private _itemName = [_ammoItemClass] call FUNC(getMagazineName);
[format [LLSTRING(rearmed), _itemName], 1, [0, 0.9, 0, 1]] call CBA_fnc_notify;

_simEvents deleteAt 0; // Pop off the event

true

#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Fires the smoke launcher of the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle which should fire the smoke launcher.
 *      1: STRING - Smoke launcher muzzle.
 *
 *  Returns:
 *      BOOLEAN - Success.
 *
 *  Example:
 *      [vehicle player, "Redd_SmokeLauncher"] call PzGrenBtl402_SmokeLauncher_fnc_fireSmoke;
 *
 */

params [["_veh", objNull, [objNull]], ["_smokeLauncher", "", [""]]];

if (_veh ammo _smokeLauncher <= 0) exitWith {false};

private _gunner = gunner _veh;
if (isNull _gunner || !alive _gunner || _gunner getVariable ["ace_isunconscious", false]) exitWith {false};

_veh setVariable [QGVAR(reloading), true, true];

private _success = [_veh, _smokeLauncher] call BIS_fnc_fire;
if (!_success) exitWith {false};

private _reloadTime = getNumber (configFile >> "CfgWeapons" >> _smokeLauncher >> "reloadTime");
[{
    params ["_veh"];
    _veh setVariable [QGVAR(reloading), false, true];
}, [_veh], _reloadTime] call CBA_fnc_waitAndExecute;

true

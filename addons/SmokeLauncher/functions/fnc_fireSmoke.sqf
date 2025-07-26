#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Fires the smoke launcher of the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle which should fire the smoke launcher.
 *      1: STRING - Smoke launcher muzzle. (Default: get smoke launcher set in config)
 *
 *  Returns:
 *      BOOL - Success.
 *
 *  Example:
 *      [vehicle player, "Redd_SmokeLauncher"] call PzGrenBtl402_SmokeLauncher_fnc_fireSmoke;
 *
 */

params [["_vehicle", objNull, [objNull]], ["_smokeLauncher", "", [""]]];

if (isNull _vehicle) exitWith {false};

if (_smokeLauncher isEqualTo "") then {
    _smokeLauncher = [typeOf _vehicle] call FUNC(getSmokeLauncher);
};

if (_smokeLauncher isEqualTo "" || {_vehicle ammo _smokeLauncher <= 0}) exitWith {false};

private _gunner = gunner _vehicle;
if (isNull _gunner || !alive _gunner) exitWith {false};

private _success = [_vehicle, _smokeLauncher] call BIS_fnc_fire;
if (!_success) exitWith {false};

_vehicle setVariable [QGVAR(reloading), true, true];

private _reloadTime = GVAR(reloadTimeCache) getOrDefaultCall [_smokeLauncher, {
    getNumber (configFile >> "CfgWeapons" >> _smokeLauncher >> "reloadTime")
}, true];

[{
    params ["_vehicle"];
    _vehicle setVariable [QGVAR(reloading), false, true];
}, [_vehicle], _reloadTime] call CBA_fnc_waitAndExecute;

true

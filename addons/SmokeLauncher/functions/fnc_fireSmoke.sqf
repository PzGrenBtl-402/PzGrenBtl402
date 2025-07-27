#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Fires the smoke launcher of the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle which should fire the smoke launcher.
 *
 *  Returns:
 *      BOOL - Success.
 *
 *  Example:
 *      [vehicle player] call PzGrenBtl402_SmokeLauncher_fnc_fireSmoke;
 *
 */

params [["_vehicle", objNull, [objNull]]];

if !([_vehicle] call FUNC(canFireSmoke)) exitWith {false};

private _smokeLauncher = [typeOf _vehicle] call FUNC(getSmokeLauncher);
TRACE_2("Fire smoke",_vehicle,_smokeLauncher);
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

#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Fires the smoke launcher of the marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder which should fire the smoke launcher.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player] call PzGrenBtl402_Redd_Marder_fnc_fireSmokeLauncher;
 *
 */

params [["_veh", objNull, [objNull]]];

if (isNull _veh || !(_veh isKindOf "Redd_Marder_1A5_base")) exitWith {};
if (_veh ammo QGVAR(SmokeLauncher) <= 0) exitWith {};

private _gunner = gunner _veh;
if (isNull _gunner || !alive _gunner || _gunner getVariable ["ace_isunconscious", false]) exitWith {};

_veh setVariable [QGVAR(smokeLauncherReloading), true, true];

[_veh, QGVAR(SmokeLauncher)] call BIS_fnc_fire;

private _reloadTime = getNumber (configFile >> "CfgWeapons" >> QGVAR(SmokeLauncher) >> "magazineReloadTime");
[{
    params ["_veh"];
    _veh setVariable [QGVAR(smokeLauncherReloading), false, true];
}, [_veh], _reloadTime] call CBA_fnc_waitAndExecute;

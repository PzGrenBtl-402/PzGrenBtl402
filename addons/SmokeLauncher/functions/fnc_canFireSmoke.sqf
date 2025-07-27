#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if smoke launcher of the vehicle can be fired.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle with smoke launcher.
 *      1: BOOL - Ignore the reload time (Default: false).
 *
 *  Returns:
 *       BOOL - Vehicle can probably fire its smoke launcher.
 *
 *  Example:
 *      [vehicle player] call PzGrenBtl402_SmokeLauncher_fnc_canFireSmoke
 *
 */

params [["_vehicle", objNull, [objNull]], ["_ignoreReloadTime", false, [false]]];

if (isNull _vehicle) exitWith {false};

if (!_ignoreReloadTime && _vehicle getVariable [QGVAR(reloading), false]) exitWith {false};

private _smokeLauncher = [typeOf _vehicle] call FUNC(getSmokeLauncher);
if (_smokeLauncher isEqualTo "" || {_vehicle ammo _smokeLauncher <= 0}) exitWith {false};

private _gunner = gunner _vehicle;
// Cannot smoke without gunner or when gunner is unconscious
if (isNull _gunner || {!alive _gunner} || {_gunner getVariable ["ace_isunconscious", false]}) exitWith {false};

true

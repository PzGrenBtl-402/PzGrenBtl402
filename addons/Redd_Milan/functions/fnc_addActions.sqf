#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Adds load and unload actions to milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan to add the actions to.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call PzGrenBtl402_Redd_Milan_fnc_addActions
 *
 */

params ["_milan"];


private _loadIcon = "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa";
// Milan laden
[
    _milan,
    LLSTRING(load),
    _loadIcon,
    _loadIcon,
    "_this distance _target < 2 && 'Redd_Milan_Static_Barrel' isEqualTo backpack _this && count magazines _target isEqualTo 0",
    "_caller distance _target < 2 && 'Redd_Milan_Static_Barrel' isEqualTo backpack _caller && count magazines _target isEqualTo 0",
    {},
    {},
    {_this call FUNC(load)},
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

private _unloadIcon = "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa";
// Milan entladen
[
    _milan,
    LLSTRING(unload),
    _unloadIcon,
    _unloadIcon,
    "(count magazines _target isNotEqualTo 0) && _this distance _target < 2",
    "(count magazines _target isNotEqualTo 0) && _caller distance _target < 2",
    {},
    {},
    {_this call FUNC(unload)},
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

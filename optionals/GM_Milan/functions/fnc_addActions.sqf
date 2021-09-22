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
 *      [this] call PzGrenBtl402_GM_Milan_fnc_addActions
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
    QUOTE([ARR_2(_target, _this)] call FUNC(canLoad)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canLoad)),
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
    QUOTE([ARR_2(_target, _this)] call FUNC(canUnload)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canUnload)),
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

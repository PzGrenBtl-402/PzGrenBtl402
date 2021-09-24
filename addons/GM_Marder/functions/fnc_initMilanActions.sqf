#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *
 *  Description:
 *      Initializes Milan actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call PzGrenBtl402_GM_Marder_fnc_initMilanActions
 *
 */

params ["_veh"];

private _icon = "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa";

// Milan laden
[
    _veh,
    LLSTRING(loadMilan),
    _icon,
    _icon,
    QUOTE([ARR_2(_target, _this)] call FUNC(canLoadMilan)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canLoadMilan)),
    {},
    {},
    LINKFUNC(loadMilan),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Milan entladen
[
    _veh,
    LLSTRING(unloadMilan),
    _icon,
    _icon,
    QUOTE([ARR_2(_target, _this)] call FUNC(canUnloadMilan)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canUnloadMilan)),
    {},
    {},
    LINKFUNC(unloadMilan),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

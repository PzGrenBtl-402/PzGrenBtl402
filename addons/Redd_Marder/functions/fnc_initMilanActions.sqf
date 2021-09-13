#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *
 *  Description:
 *      Initializes Milan actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_initMilanActions
 *
 */


params ["_veh"];

if (!hasInterface) exitWith {};

private _icon = "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa";
// Milan aufbauen
[
    _veh,
    LLSTRING(assembleMilan),
    _icon,
    _icon,
    QUOTE([ARR_2(_target, _this)] call FUNC(canAssembleMilan)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canAssembleMilan)),
    {},
    {},
    LINKFUNC(assembleMilan),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Milan abbauen
[
    _veh,
    LLSTRING(disassembleMilan),
    _icon,
    _icon,
    QUOTE([ARR_2(_target, _this)] call FUNC(canDisassembleMilan)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canDisassembleMilan)),
    {},
    {},
    LINKFUNC(disassembleMilan),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

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

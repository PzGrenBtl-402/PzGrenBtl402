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

if (!hasInterface) exitWith {};

private _loadIcon = QPATHTOEF(Milan,data\ui\holdaction_load_milan);
// Milan laden
[
    _veh,
    LELSTRING(Milan,load),
    _loadIcon,
    _loadIcon,
    QUOTE([ARR_2(_target,_this)] call FUNC(canLoadMilan)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canLoadMilan)),
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

private _unloadIcon = QPATHTOEF(Milan,data\ui\holdaction_unload_milan);
// Milan entladen
[
    _veh,
    LELSTRING(Milan,unload),
    _unloadIcon,
    _unloadIcon,
    QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadMilan)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canUnloadMilan)),
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

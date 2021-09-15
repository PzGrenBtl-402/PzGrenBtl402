#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Adds tow load action to wiesel.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_addLoadAction
 *
 */

params ["_veh"];

private _icon = "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa";
[
    _veh,
    LLSTRING(loadTOW),
    _icon,
    _icon,
    QUOTE([ARR_2(_target, _this)] call FUNC(canLoadTOW)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canLoadTOW)),
    {},
    {},
    LINKFUNC(loadTOW),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

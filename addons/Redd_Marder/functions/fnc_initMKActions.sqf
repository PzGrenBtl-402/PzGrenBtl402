#include "script_component.hpp"
/**
 *  Author: Mishkar
 *
 *  Description:
 *      Initializes MK actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_initMKActions
 *
 */

params ["_veh"];

if (!hasInterface) exitWith {};

// MK HE laden
private _loadIcon = QPATHTOEF(Milan,data\ui\holdaction_load_milan);
[
    _veh,
    LLSTRING(loadMkHE),
    _loadIcon,
    _loadIcon,
    "_this == fullCrew [_target, 'cargo', true] select 0 select 0 && isNull gunner _target",
    "_caller == fullCrew [_target, 'cargo', true] select 0 select 0 && isNull gunner _target",
    {},
    {},
    {
        params ["_veh"];
        [_veh, 'HE'] call FUNC(loadMK);
    },
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// MK AP laden
private _loadIcon = QPATHTOEF(Milan,data\ui\holdaction_load_milan);
[
    _veh,
    LLSTRING(loadMkAP),
    _loadIcon,
    _loadIcon,
    "_this == fullCrew [_target, 'cargo', true] select 0 select 0 && isNull gunner _target",
    "_caller == fullCrew [_target, 'cargo', true] select 0 select 0 && isNull gunner _target",
    {},
    {},
    {
        params ["_veh"];
        [_veh, 'AP'] call FUNC(loadMK);
    },
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

#include "script_component.hpp"
/**
 *  Author: Mishkar, Timi007
 *
 *  Description:
 *      Initializes Ladder actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_initLadderActions
 *
 */

params ["_veh"];

if (!hasInterface) exitWith {};

private _ladderIcon = QPATHTOF(data\ui\holdaction_ladder.paa);

// Leiter Links aufbauen
[
    _veh,
    LLSTRING(attachLadder),
    _ladderIcon,
    _ladderIcon,
    QUOTE([ARR_3(_target, _this, 'left')] call FUNC(canAttachLadder)),
    QUOTE([ARR_3(_target, _this, 'left')] call FUNC(canAttachLadder)),
    {},
    {},
    {
        params ["_vehicle"];
        [_vehicle, "left"] call FUNC(attachLadder);
    },
    {},
    [],
    5,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Leiter Rechts aufbauen
[
    _veh,
    LLSTRING(attachLadder),
    _ladderIcon,
    _ladderIcon,
    QUOTE([ARR_3(_target, _this, 'right')] call FUNC(canAttachLadder)),
    QUOTE([ARR_3(_target, _this, 'right')] call FUNC(canAttachLadder)),
    {},
    {},
    {
        params ["_vehicle"];
        [_vehicle, "right"] call FUNC(attachLadder);
    },
    {},
    [],
    5,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

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

#define HOLD_TIME 5

private _ladderIcon = QPATHTOEF(Ladder,data\ui\holdaction_ladder.paa);

// Leiter Links aufbauen
[
    _veh,
    LELSTRING(Ladder,attachLadder),
    _ladderIcon,
    _ladderIcon,
    QUOTE([ARR_3(_target,_this,'left')] call FUNC(canAttachLadder)),
    QUOTE([ARR_3(_target,_this,'left')] call FUNC(canAttachLadder)),
    {},
    {},
    {
        params ["_vehicle", "_caller"];
        private _ladder = [_vehicle, [-1.0, -1.7, -0.3], 270] call EFUNC(Ladder,attachLadder);
        _vehicle setVariable [QGVAR(ladderLeft), _ladder, true];

        [_ladder, _caller] call EFUNC(Ladder,adjustLadder);
    },
    {},
    [],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Leiter Rechts aufbauen
[
    _veh,
    LELSTRING(Ladder,attachLadder),
    _ladderIcon,
    _ladderIcon,
    QUOTE([ARR_3(_target,_this,'right')] call FUNC(canAttachLadder)),
    QUOTE([ARR_3(_target,_this,'right')] call FUNC(canAttachLadder)),
    {},
    {},
    {
        params ["_vehicle", "_caller"];
        private _ladder = [_vehicle, [1.0, -1.7, -0.3], 90] call EFUNC(Ladder,attachLadder);
        _vehicle setVariable [QGVAR(ladderRight), _ladder, true];

        [_ladder, _caller] call EFUNC(Ladder,adjustLadder);
    },
    {},
    [],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Linke Leiter anpassen
_veh addAction [
    LELSTRING(Ladder,adjustLadder),
    {
        params ["_target", "_caller"];
        private _ladder = [_target, QGVAR(ladderLeft)] call FUNC(getAttachedLadder);
        if (isNull _ladder) exitwith {};

        [_ladder, _caller] call EFUNC(Ladder,adjustLadder);
    },
    nil,
    4,
    true,
    true,
    "",
    QUOTE([ARR_3(_target,_this,'left')] call FUNC(canAdjustLadder))
];

// Rechte Leiter anpassen
_veh addAction [
    LELSTRING(Ladder,adjustLadder),
    {
        params ["_target", "_caller"];
        private _ladder = [_target, QGVAR(ladderRight)] call FUNC(getAttachedLadder);
        if (isNull _ladder) exitwith {};

        [_ladder, _caller] call EFUNC(Ladder,adjustLadder);
    },
    nil,
    4,
    true,
    true,
    "",
    QUOTE([ARR_3(_target,_this,'right')] call FUNC(canAdjustLadder))
];

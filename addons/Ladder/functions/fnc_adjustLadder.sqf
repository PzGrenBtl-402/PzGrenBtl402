#include "script_component.hpp"
/**
 *  Author: Rocko, Ruthberg, Timi007
 *
 *  Description:
 *      Adjust tactical ladder.
 *
 *  Parameter(s):
 *      0: OBJECT - Ladder.
 *      0: OBJECT - Player.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_adjustLadder
 *
 */

params ["_ladder", "_player"];

private _currentStep = 0;
for "_step" from 1 to 11 do {
    if (_ladder animationPhase (format ["extract_%1", _step]) isEqualTo 0) then {
        break;
    };
    _currentStep = _step;
};

// ACE interaction for ladder
GVAR(ladder) = _ladder;
GVAR(currentStep) = _currentStep max MIN_ALLOWED_STEP;
GVAR(currentAngle) = _ladder animationPhase "rotate";

TRACE_3("Init settings", _currentStep, GVAR(currentStep), GVAR(currentAngle));

[
    "",
    LLSTRING(deployLadder),
    localize "STR_ACE_TacticalLadder_Adjust",
    [["control", localize "str_disp_conf_yaxis" + " " + localize "STR_ACE_TacticalLadder_AdjustTilt"]]
] call ace_interaction_fnc_showMouseHint;

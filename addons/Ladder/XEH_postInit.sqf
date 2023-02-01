#include "script_component.hpp"

if (!hasInterface) exitWith {};

GVAR(ladder) = objNull;
GVAR(currentStep) = MIN_ALLOWED_STEP;
GVAR(currentAngle) = 0;

// Cancel adjustment if interact menu opens
["ace_interactMenuOpened", {
    params ["_unit"];

    if (!isNull GVAR(ladder)) then {
        [_unit, 1] call FUNC(confirmLadderAdjust);
    };
}] call CBA_fnc_addEventHandler;

// handle falling unconscious
["ace_unconscious", {
    params ["_unit"];

    if (!local _unit) exitwith {};

    if (!isNull GVAR(ladder)) then {
        [_unit, 1] call FUNC(confirmLadderAdjust);
    };
}] call CBA_fnc_addEventHandler;

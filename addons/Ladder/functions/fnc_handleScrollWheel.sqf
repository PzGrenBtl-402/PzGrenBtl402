#include "script_component.hpp"
/**
 *  Author: Rocko, Ruthberg, Timi007
 *
 *  Description:
 *      Handles lengthening and tilting of the ladder
 *
 *  Parameter(s):
 *      0: NUMBER - Amount scrolled
 *
 *  Returns:
 *       BOOLEAN - Handled
 *
 *  Example:
 *      [1] call PzGrenBtl402_Redd_Marder_fnc_handleScrollWheel
 *
 */

params ["_scroll"];

if (isNull GVAR(ladder)) exitWith { false };

if (ACE_Modifier == 0) then {
    // Extending
    if (_scroll > 0) then {
        private _currentStep = GVAR(currentStep);

        if (_currentStep isEqualTo MAX_STEP) exitWith {};

        _currentStep = _currentStep + 1;
        if (GVAR(ladder) animationPhase (format["extract_%1", _currentStep]) isEqualTo 0) then {
            GVAR(ladder) animate [format["extract_%1", _currentStep], 1];
            GVAR(currentStep) = _currentStep;
        };
    };
    if (_scroll < 0) then {
        private _currentStep = GVAR(currentStep);
        if (_currentStep isEqualTo MIN_ALLOWED_STEP) exitWith {};

        if (GVAR(ladder) animationPhase (format["extract_%1", _currentStep]) isEqualTo 1) then {
            GVAR(ladder) animate [format["extract_%1", _currentStep], 0];
            GVAR(currentStep) = _currentStep - 1;
        };
    };
} else {
    // Tilting
    GVAR(currentAngle) = 0 max (GVAR(currentAngle) + _scroll) min MAX_TILE;
    GVAR(ladder) animate ["rotate", GVAR(currentAngle)];
};

true

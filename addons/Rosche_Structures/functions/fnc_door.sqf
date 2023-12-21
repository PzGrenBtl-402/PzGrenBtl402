#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Opens/Closes door of a building. Checks if door is locked.
 *
 *  Parameter(s):
 *      0: OBJECT - Building.
 *      1: STRING - Door ID, e.g. Door_02.
 *      1: NUMBER - Target animation phase (1 = open, 0 = close).
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [this, "Door_01", 1] call PzGrenBtl402_Rosche_Structures_fnc_door
 *
 */

params [["_structure", objNull, [objNull]], ["_door", "Door_01", [""]], ["_targetPhase", 0, [0]]];

if (isNull _structure) exitWith {};

if ((_structure getVariable [format ["bis_disabled_%1", _door], 0]) isNotEqualTo 1) then {
    // Open/Close door
    _structure animate [format ["%1_rot", _door], _targetPhase];
    _structure animate [format ["%1_rot_01", _door], _targetPhase];
    _structure animate [format ["%1_rot_02", _door], _targetPhase];
} else {
    // Play door wiggle animation
    _structure animateSource [format ["%1_locked_source", _door], (1 - (_structure animationSourcePhase (format ["%1_locked_source", _door])))];
};

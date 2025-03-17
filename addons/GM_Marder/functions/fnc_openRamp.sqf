#include "script_component.hpp"
/**
 *  Author: Mishkar, Timi007
 *
 *  Description:
 *      Opens ramp of the Marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: BOOL - Open ramp instantly, do not play animation. (default: false)
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call PzGrenBtl402_GM_Marder_fnc_openRamp
 *
 */

params [["_vehicle", objNull, [objNull]], ["_instantly", false, [false]]];

_vehicle animateDoor ["hatch_1_1_source", 1, _instantly];

[{_this doorPhase "hatch_1_1_source" > 0.85}, {
    [QGVAR(lock), [_this, 0], _this] call CBA_fnc_targetEvent;
}, _vehicle] call CBA_fnc_waitUntilAndExecute;

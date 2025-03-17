#include "script_component.hpp"
/**
 *  Author: Timi007
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
 *      [vehicle player] call PzGrenBtl402_Redd_Marder_fnc_openRamp
 *
 */

params [["_vehicle", objNull, [objNull]], ["_instantly", false, [false]]];

_vehicle animateSource ["heck_luke_rotation", 1, _instantly];
_vehicle animate ["Hide_Knopf_Heck_luke", 0];

[{_this animationSourcePhase "heck_luke_rotation" > 0.9}, {
    [QGVAR(lock), [_this, 0], _this] call CBA_fnc_targetEvent;
}, _vehicle] call CBA_fnc_waitUntilAndExecute;

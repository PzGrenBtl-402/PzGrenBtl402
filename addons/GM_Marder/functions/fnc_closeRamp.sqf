#include "script_component.hpp"
/**
 *  Author: Mishkar, Timi007
 *
 *  Description:
 *      Closes ramp of the Marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: BOOL - Close ramp instantly, do not play animation. (default: false)
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call PzGrenBtl402_GM_Marder_fnc_closeRamp
 *
 */

params [["_vehicle", objNull, [objNull]], ["_instantly", false, [false]]];

_vehicle animateDoor ["hatch_1_1_source", 0, _instantly];
[QGVAR(lock), [_vehicle, 2], _vehicle] call CBA_fnc_targetEvent;

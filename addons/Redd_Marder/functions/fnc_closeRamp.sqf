#include "script_component.hpp"
/**
 *  Author: Timi007
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
 *      [vehicle player] call PzGrenBtl402_Redd_Marder_fnc_closeRamp
 *
 */

params [["_vehicle", objNull, [objNull]], ["_instantly", false, [false]]];

_vehicle animateSource ["heck_luke_rotation", 0, _instantly];
_vehicle animate ["Hide_Knopf_Heck_luke", 1];
[QGVAR(lock), [_vehicle, 2], _vehicle] call CBA_fnc_targetEvent;

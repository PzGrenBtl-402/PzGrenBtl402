#include "script_component.hpp"
/**
 *  Author: Mishkar
 *
 *  Description:
 *      Closes ramp of the Marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      this call PzGrenBtl402_GM_Marder_fnc_closeRamp
 *
 */

params ["_veh"];

_veh animateDoor ["hatch_1_1_source", 0, false];
[QGVAR(lock), [_veh, 2], _veh] call CBA_fnc_targetEvent;

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
 *      this call PzGrenBtl402_fnc_marderGMCloseRamp
 *
 */

params ["_veh"];

_veh animateDoor ["hatch_1_1_source", 0, false];

[_veh, 2] remoteExecCall ["lock", _veh];

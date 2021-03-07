/**
 *  Author: Timi007
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
 *      this call PzGrenBtl402_fnc_marderCloseRamp
 *
 */

params ["_veh"];

_veh animateSource ["heck_luke_rotation", 0]; 
_veh animate ["Hide_Knopf_Heck_luke", 1];

[_veh, 2] remoteExecCall ["lock", _veh];
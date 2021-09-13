#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Opens ramp of the Marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      this call PzGrenBtl402_Redd_Marder_fnc_openRamp
 *
 */

params ["_veh"];

_veh animateSource ["heck_luke_rotation", 1];
_veh animate ["Hide_Knopf_Heck_luke", 0];

[{(_this select 0) animationSourcePhase "heck_luke_rotation" > 0.9}, {
    params ["_veh"];
    [_veh, 0] remoteExecCall ["lock", _veh];
}, [_veh]] call CBA_fnc_waitUntilAndExecute;

#include "script_component.hpp"
/**
 *  Author: Mishkar
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
 *      this call PzGrenBtl402_GM_Marder_fnc_openRamp
 *
 */

params ["_veh"];

_veh animateDoor ["hatch_1_1_source", 1, false];

[{(_this select 0) doorPhase "hatch_1_1_source" > 0.85}, {
    params ["_veh"];
    [_veh, 0] remoteExecCall ["lock", _veh];
}, [_veh]] call CBA_fnc_waitUntilAndExecute;

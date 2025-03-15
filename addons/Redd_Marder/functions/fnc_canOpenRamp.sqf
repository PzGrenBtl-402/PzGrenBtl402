#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if ramp can be opened.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Unit which should open the ramp
 *
 *  Returns:
 *       BOOL - Can open ramp
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_Marder_fnc_canOpenRamp
 *
 */

params ["_vehicle", "_unit"];

(alive _vehicle) &&
{_unit in [driver _vehicle, gunner _vehicle, _vehicle turretUnit [0, 3]]} &&
{_vehicle animationSourcePhase "heck_luke_rotation" isEqualTo 0}

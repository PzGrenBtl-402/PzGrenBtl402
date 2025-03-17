#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if player can get into Milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       BOOL - Can get into Milan.
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Marder_fnc_canGetInMilan
 *
 */

params ["_veh", "_player"];

(alive _veh) &&
{_veh animationSourcePhase "Hide_Milan_Source" isEqualTo 0} &&
{
    ((_player isEqualTo commander _veh) && {_veh animationSourcePhase "hatchCommander" isEqualTo 1}) || // is commander and turned out
    {_veh turretUnit COMMANDER_HIGHER_TURRET_PATH isEqualTo _player} // is in command turned higher
}

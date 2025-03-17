#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *
 *  Description:
 *      Returns true if MILAN can be loaded.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOL - Can load MILAN.
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Marder_fnc_canLoadMilan
 *
 */

params ["_veh", "_player"];

(alive _veh) &&
{_veh animationSourcePhase "Hide_Milan_Source" isEqualTo 0} &&
{_veh magazinesTurret MILAN_TURRET_PATH isEqualTo []} &&
{
    ((_player isEqualTo commander _veh) && {_veh animationSourcePhase "hatchCommander" isEqualTo 1}) || // is commander and turned out
    {_veh turretUnit COMMANDER_HIGHER_TURRET_PATH isEqualTo _player} || // is in command turned higher
    {(_veh turretUnit HATCH_RIGHT_TURRET_PATH isEqualTo _player) && {isTurnedOut _player}} // is unit in hatch right
} &&
{"Redd_Milan_Static_Barrel" in backpackCargo _veh}

#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns true if MILAN can be disassembled.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOL - Can disassemble MILAN.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_Marder_fnc_canDisassembleMilan
 *
 */

params ["_veh", "_player"];

(alive _veh) &&
{_player isEqualTo commander _veh} &&
{_veh animationSourcePhase "hatchCommander" isEqualTo 1} &&
{_veh animationSourcePhase "Hide_Milan_Source" isEqualTo 0} &&
{_veh magazinesTurret MILAN_TURRET_PATH isEqualTo []}

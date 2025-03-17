#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns true if MILAN can be assembled.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOL - Can assemble MILAN.
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Marder_fnc_canAssembleMilan
 *
 */

params ["_veh", "_player"];

private _backbacks = backpackCargo _veh;

(alive _veh) &&
{_veh animationSourcePhase "Hide_Milan_Source" > 0} &&
{
    ((_player isEqualTo commander _veh) && {_veh animationSourcePhase "hatchCommander" isEqualTo 1}) || // is commander and turned out
    {_veh turretUnit COMMANDER_HIGHER_TURRET_PATH isEqualTo _player} // is in command turned higher
} &&
{("Redd_Milan_Static_Tripod" in _backbacks) || {"gm_milan_launcher_weaponBag" in _backbacks}}

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
 *      BOOLEAN - Can assemble MILAN.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_Marder_fnc_canAssembleMilan
 *
 */

params ["_veh", "_player"];

private _backbacks = backpackCargo _veh;

(_player isEqualTo (commander _veh)) &&
{(_veh animationSourcePhase "hatchCommander") isEqualTo 1} &&
{(_veh animationSourcePhase "Hide_Milan_Source") > 0} &&
{"Redd_Milan_Static_Tripod" in _backbacks || "gm_milan_launcher_weaponBag" in _backbacks} &&
{alive _veh}

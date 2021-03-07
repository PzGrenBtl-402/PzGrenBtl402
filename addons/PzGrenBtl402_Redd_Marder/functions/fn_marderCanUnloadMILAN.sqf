/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Returns true if MILAN can be unloaded.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      BOOLEAN - Can load MILAN.
 *
 *  Example:
 *      this call PzGrenBtl402_fnc_marderCanLoadMILAN
 *
 */

params ["_veh"];

private _backpacks = backpackCargo _veh;

(player isEqualTo (commander _veh)) &&
{(_veh animationSourcePhase "hatchCommander") isEqualTo 1} &&
{(_veh animationSourcePhase "Hide_Milan_Source") isEqualTo 0} &&
{!(count (_veh magazinesTurret [1]) isEqualTo 0)} &&
{alive _veh}

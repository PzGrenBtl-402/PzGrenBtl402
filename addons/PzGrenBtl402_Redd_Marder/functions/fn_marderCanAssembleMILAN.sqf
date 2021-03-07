/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns true if MILAN can be assembled.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      BOOLEAN - Can assemble MILAN.
 *
 *  Example:
 *      this call PzGrenBtl402_fnc_marderCanAssembleMILAN
 *
 */

params ["_veh"];

private _backpacks = backpackCargo _veh;

(player isEqualTo (commander _veh)) &&
{(_veh animationSourcePhase "hatchCommander") isEqualTo 1} &&
{(_veh animationSourcePhase "Hide_Milan_Source") > 0} &&
{"Redd_Milan_Static_Tripod" in _backpacks} &&
{alive _veh}

/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Returns true if MILAN can be loaded.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      BOOLEAN - Can load MILAN.
 *
 *  Example:
 *      this call PzGrenBtl402_fnc_gmMarderCanLoadMILAN
 *
 */

params ["_veh"];

private _backpacks = backpackCargo _veh;

(player isEqualTo (commander _veh)) &&
{isTurnedOut player} &&
{count (_veh magazinesTurret [[0,1], false]) isEqualTo 0} &&
{"Redd_Milan_Static_Barrel" in _backpacks} &&
{alive _veh}

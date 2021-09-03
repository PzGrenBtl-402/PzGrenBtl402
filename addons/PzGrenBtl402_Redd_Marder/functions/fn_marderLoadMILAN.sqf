/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Loads MILAN.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      this call PzGrenBtl402_fnc_marderLoadMILAN
 *
 */

params ["_veh"];

[_veh, ["Redd_Milan_Mag", [1]]] remoteExecCall ["addMagazineTurret"];
[_veh, "Redd_Milan_Static_Barrel"] call CBA_fnc_removeBackpackCargo;
_veh animateSource ["ReloadMagazine", 0];

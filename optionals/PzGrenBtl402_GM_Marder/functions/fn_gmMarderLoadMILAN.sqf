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
 *      this call PzGrenBtl402_fnc_gmMarderLoadMILAN
 *
 */

params ["_veh"];

[_veh, ["gm_1Rnd_milan_heat_dm92", [0,1]]] remoteExec ["removeMagazinesTurret"];  //Verschossene Magazine entfernen, da sonst der autoReload nicht sofort nachlädt
[_veh, ["gm_1Rnd_milan_heat_dm92", [0,1]]] remoteExec ["addMagazineTurret"];
[_veh, "Redd_Milan_Static_Barrel"] call CBA_fnc_removeBackpackCargo;

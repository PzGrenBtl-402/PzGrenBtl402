/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Unloads MILAN.
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

[_veh, ["gm_1Rnd_milan_heat_dm92", [0,1]]] remoteExec ["removeMagazineTurret"];
_veh addBackPackCargoGlobal ["Redd_Milan_Static_Barrel", 1];

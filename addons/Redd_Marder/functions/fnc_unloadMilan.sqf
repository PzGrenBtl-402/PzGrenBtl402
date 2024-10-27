#include "script_component.hpp"
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
 *      this call PzGrenBtl402_Redd_Marder_fnc_unloadMilan
 *
 */

params ["_veh"];

[_veh, ["Redd_Milan_Mag", [1]]] remoteExecCall ["removeMagazineTurret"];
_veh addBackpackCargoGlobal ["Redd_Milan_Static_Barrel", 1];
_veh animateSource ["ReloadMagazine", 1];

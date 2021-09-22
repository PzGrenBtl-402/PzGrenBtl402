#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Loads the TOW.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_loadTOW
 *
 */

params ["_veh"];

[_veh, "Redd_Milan_Static_Barrel"] call CBA_fnc_removeBackpackCargo;
[_veh, ["Redd_TOW_Mag", [0]]] remoteExecCall ["addMagazineTurret"];

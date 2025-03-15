#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *
 *  Description:
 *      Checks if the TOW can be loaded.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel.
 *      1: OBJECT - Player who loads TOW.
 *
 *  Returns:
 *      BOOL - TOW can be loaded.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_canLoadTOW
 *
 */

params ["_veh", "_player"];

(alive _veh) &&
{_player isEqualTo (_veh turretUnit TOW_TURRET_PATH)} &&
{"Redd_Milan_Static_Barrel" in backpackCargo _veh} &&
{_veh magazinesTurret TOW_TURRET_PATH isEqualTo []}

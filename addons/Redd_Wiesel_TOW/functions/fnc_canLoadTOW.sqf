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

params ["_vehicle", "_player"];

(alive _vehicle) &&
{_player isEqualTo (_vehicle turretUnit TOW_TURRET_PATH)} &&
{"Redd_Milan_Static_Barrel" in backpackCargo _vehicle} &&
{_vehicle magazinesTurret TOW_TURRET_PATH isEqualTo []}

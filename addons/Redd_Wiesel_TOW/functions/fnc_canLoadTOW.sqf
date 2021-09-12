#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Checks if the TOW can be loaded.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel.
 *      1: OBJECT - Player who loads TOW.
 *
 *  Returns:
 *      BOOLEAN - TOW can be loaded.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_canLoadTOW
 *
 */

params ["_veh", "_player"];

_player in [_veh turretUnit [0]] &&
{"Redd_Milan_Static_Barrel" in backpackCargo _veh} &&
{count (_veh magazinesTurret [0]) isEqualTo 0} &&
{alive _veh}

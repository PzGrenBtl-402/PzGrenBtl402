#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *
 *  Description:
 *      Returns true if MILAN can be loaded.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOL - Can load MILAN.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_GM_Marder_fnc_canLoadMilan
 *
 */

params ["_veh", "_player"];

(alive _veh) &&
{_veh magazinesTurret [MILAN_TURRET_PATH, false] isEqualTo []} &&
{"Redd_Milan_Static_Barrel" in backpackCargo _veh} &&
{
    ((_player isEqualTo commander _veh) && {isTurnedOut _player}) || // is commander and turned out
    {_veh turretUnit MILAN_TURRET_PATH isEqualTo _player} // or inside MILAN
}

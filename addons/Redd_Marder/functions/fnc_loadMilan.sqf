#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
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
 *      [vehicle player] call PzGrenBtl402_Redd_Marder_fnc_loadMILAN
 *
 */

params ["_veh"];

[QEGVAR(Milan,addMagazineTurret), [_veh, [MILAN_MAGAZINE, MILAN_TURRET_PATH]], _veh, MILAN_TURRET_PATH] call CBA_fnc_turretEvent;
[_veh, "Redd_Milan_Static_Barrel"] call CBA_fnc_removeBackpackCargo;
_veh animateSource ["ReloadMagazine", 0];

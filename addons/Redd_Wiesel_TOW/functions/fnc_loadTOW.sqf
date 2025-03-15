#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
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
[QGVAR(addMagazineTurret), [_veh, [TOW_MAGAZINE, TOW_TURRET_PATH]], _veh, TOW_TURRET_PATH] call CBA_fnc_turretEvent;

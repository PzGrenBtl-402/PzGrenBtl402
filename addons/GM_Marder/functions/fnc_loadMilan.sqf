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
 *      [cursorObject] call PzGrenBtl402_GM_Marder_fnc_loadMilan
 *
 */

params ["_veh"];

[QEGVAR(Milan,removeMagazinesTurret), [_veh, [MILAN_MAGAZINE, MILAN_TURRET_PATH]], _veh, MILAN_TURRET_PATH] call CBA_fnc_turretEvent; // Remove fired magazines, otherwise the autoReload will not reload immediately
[QEGVAR(Milan,addMagazineTurret), [_veh, [MILAN_MAGAZINE, MILAN_TURRET_PATH]], _veh, MILAN_TURRET_PATH] call CBA_fnc_turretEvent;
[_veh, "Redd_Milan_Static_Barrel"] call CBA_fnc_removeBackpackCargo;

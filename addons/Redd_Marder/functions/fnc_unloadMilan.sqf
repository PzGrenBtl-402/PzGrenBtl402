#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
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
 *      [cursorObject] call PzGrenBtl402_Redd_Marder_fnc_unloadMilan
 *
 */

params ["_veh"];

[QEGVAR(Milan,removeMagazineTurret), [_veh, [MILAN_MAGAZINE, MILAN_TURRET_PATH]], _veh, MILAN_TURRET_PATH] call CBA_fnc_turretEvent;
_veh addBackpackCargoGlobal ["Redd_Milan_Static_Barrel", 1];
_veh animateSource ["ReloadMagazine", 1];

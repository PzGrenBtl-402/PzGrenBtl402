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
 *      [cursorObject] call PzGrenBtl402_GM_Marder_fnc_unloadMilan
 *
 */

params ["_vehicle"];

[QEGVAR(Milan,removeMagazineTurret), [_vehicle, [MILAN_MAGAZINE, MILAN_TURRET_PATH]], _vehicle, MILAN_TURRET_PATH] call CBA_fnc_turretEvent;
_vehicle addBackpackCargoGlobal ["Redd_Milan_Static_Barrel", 1];

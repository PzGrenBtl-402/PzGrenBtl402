#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Removes all MILAN magazines of the Marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call PzGrenBtl402_GM_Marder_fnc_removeMilanMagazines
 *
 */

params ["_vehicle"];

[QEGVAR(Milan,removeMagazinesTurret), [_vehicle, [MILAN_MAGAZINE, MILAN_TURRET_PATH]], _vehicle, MILAN_TURRET_PATH] call CBA_fnc_turretEvent;

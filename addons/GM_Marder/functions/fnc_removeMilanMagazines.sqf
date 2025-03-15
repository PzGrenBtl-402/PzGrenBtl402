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

params ["_veh"];

[QEGVAR(Milan,removeMagazinesTurret), [_veh, [MILAN_MAGAZINE, MILAN_TURRET_PATH]], _veh, MILAN_TURRET_PATH] call CBA_fnc_turretEvent;

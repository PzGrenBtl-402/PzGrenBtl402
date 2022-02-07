#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Removes all Milan magazines of the Marder. Must be executed where Marder is local.
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

if (!local _veh) exitWith {};

_veh removeMagazinesTurret ["gm_1Rnd_milan_heat_dm92", [0, 1]];

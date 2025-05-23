#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *
 *  Description:
 *      Unloads the MILAN.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan to unload.
 *      1: OBJECT - Player who unloads the milan.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_GM_Milan_fnc_unload
 *
 */

params ["_milan", "_player"];

[QEGVAR(Milan,removeMagazines), [_milan, MILAN_MAGAZINE], _milan] call CBA_fnc_targetEvent;
_player addBackpackGlobal "Redd_Milan_Static_Barrel";

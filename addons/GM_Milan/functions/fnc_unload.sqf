#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Unloads the milan.
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

[_milan, "gm_1Rnd_milan_heat_dm92"] remoteExecCall ["removeMagazines"];
_player addBackpackGlobal "Redd_Milan_Static_Barrel";

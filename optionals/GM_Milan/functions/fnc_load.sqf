#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Loads the milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan to load.
 *      1: OBJECT - Player who loads the milan.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_GM_Milan_fnc_load
 *
 */

params ["_milan", "_player"];

_milan addMagazineGlobal 'gm_1Rnd_milan_heat_dm92';
[_milan] remoteExecCall ["reload"];
removeBackpackGlobal _player;

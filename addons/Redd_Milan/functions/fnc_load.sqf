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
 *      [this, player] call PzGrenBtl402_Redd_Milan_fnc_load
 *
 */

params ["_milan", "_player"];

_milan addMagazineGlobal "Redd_Milan_Mag";
[_milan] remoteExecCall ["reload"];
removeBackpackGlobal _player;

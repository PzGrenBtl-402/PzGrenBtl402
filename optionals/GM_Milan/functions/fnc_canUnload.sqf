#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Checks if player can unload the Milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan.
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOLEAN - Player can unload Milan.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_GM_Milan_fnc_canUnload
 *
 */

params ["_milan", "_player"];

_player distance _milan < 2 &&
{(count magazines _milan) isNotEqualTo 0}

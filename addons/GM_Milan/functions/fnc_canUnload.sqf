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
 *      BOOL - Player can unload Milan.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_GM_Milan_fnc_canUnload
 *
 */

params ["_milan", "_player"];

(_player distance _milan < ACTION_DISTANCE) &&
{magazines _milan isNotEqualTo []}

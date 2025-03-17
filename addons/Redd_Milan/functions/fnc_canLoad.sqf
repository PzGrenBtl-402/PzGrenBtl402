#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *
 *  Description:
 *      Checks if player can load the Milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan.
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOL - Player can load Milan.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_Milan_fnc_canLoad
 *
 */

params ["_milan", "_player"];

(_player distance _milan) < ACTION_DISTANCE &&
{objectParent _player isNotEqualTo _milan} &&
{'Redd_Milan_Static_Barrel' isEqualTo (backpack _player)} &&
{magazines _milan isEqualTo []}

#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Checks if player can load the Milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan.
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOLEAN - Player can load Milan.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_Milan_fnc_canLoad
 *
 */

params ["_milan", "_player"];

_player distance _milan < 2 &&
{'Redd_Milan_Static_Barrel' isEqualTo (backpack _player)} &&
{(count magazines _milan) isEqualTo 0}

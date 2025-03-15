#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
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

_milan addMagazineGlobal MILAN_MAGAZINE;
[QEGVAR(Milan,reload), [_milan], _milan] call CBA_fnc_targetEvent;
removeBackpackGlobal _player;

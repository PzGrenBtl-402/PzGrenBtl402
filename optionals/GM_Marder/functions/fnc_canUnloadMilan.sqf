#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Returns true if MILAN can be unloaded.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOLEAN - Can load MILAN.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_GM_Marder_fnc_canLoadMilan
 *
 */

params ["_veh", "_player"];

(_player isEqualTo (commander _veh)) &&
{isTurnedOut _player} &&
{(count (_veh magazinesTurret [[0,1], false]) isNotEqualTo 0)} &&
{alive _veh}

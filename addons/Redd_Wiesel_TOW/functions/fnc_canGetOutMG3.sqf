#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if player can get out of MG3.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       BOOL - Can get out of MG3.
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_canGetOutMG3
 *
 */

params ["_vehicle", "_player"];

(alive _vehicle) &&
{_vehicle turretUnit LOADER_MG3_TURRET_PATH isEqualTo _player}

#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if player can get out of Milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       BOOL - Can get out of Milan.
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Marder_fnc_canGetOutMilan
 *
 */

params ["_veh", "_player"];

(alive _veh) &&
{_veh turretUnit MILAN_TURRET_PATH isEqualTo _player}

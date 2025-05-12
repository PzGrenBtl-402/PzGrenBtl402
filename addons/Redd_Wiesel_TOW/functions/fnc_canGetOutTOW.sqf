#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if player can get out of TOW.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       BOOL - Can get out of TOW.
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_canGetOutTOW
 *
 */

params ["_vehicle", "_player"];

(alive _vehicle) &&
{_vehicle turretUnit TOW_TURRET_PATH isEqualTo _player}

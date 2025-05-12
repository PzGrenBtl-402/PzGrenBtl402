#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if player can get into TOW.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       BOOL - Can get into TOW.
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_canGetInTOW
 *
 */

params ["_vehicle", "_player"];

(alive _vehicle) &&
{
    ((_player isEqualTo commander _vehicle) && {_vehicle animationSourcePhase "Hatch_L_Rear_Source" isEqualTo 1}) || // is commander and turned out
    {_vehicle turretUnit COMMANDER_HIGHER_TURRET_PATH isEqualTo _player} // is in command turned higher
}

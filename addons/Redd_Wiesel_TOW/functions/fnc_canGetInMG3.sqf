#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if player can get into MG3.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       BOOL - Can get into MG3.
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_canGetInMG3
 *
 */

params ["_vehicle", "_player"];

(alive _vehicle) &&
{
    ((_vehicle turretUnit LOADER_TURRET_PATH isEqualTo _player) && {_vehicle animationSourcePhase "Hatch_R_Rear_Source" isEqualTo 1}) || // is loader and turned out
    {_vehicle turretUnit LOADER_HIGHER_TURRET_PATH isEqualTo _player} // is in loader turned higher
}

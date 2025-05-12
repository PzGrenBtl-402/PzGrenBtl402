#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets into the Milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Marder_fnc_getInMilan
 *
 */

params ["_vehicle", "_player"];
TRACE_2("Get in milan",_vehicle,_player);

_player action ["moveToTurret", _vehicle, MILAN_TURRET_PATH];
[QEGVAR(Common,lockSeat), [_vehicle, COMMANDER_TURRET_PATH, _player]] call CBA_fnc_localEvent;

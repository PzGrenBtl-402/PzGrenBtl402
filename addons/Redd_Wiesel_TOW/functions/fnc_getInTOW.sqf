#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets into the TOW.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_getInTOW
 *
 */

params ["_vehicle", "_player"];
TRACE_2("Get in TOW",_vehicle,_player);

_player action ["moveToTurret", _vehicle, TOW_TURRET_PATH];
[QEGVAR(Common,lockSeat), [_vehicle, COMMANDER_TURRET_PATH, _player]] call CBA_fnc_localEvent;

_vehicle animate ["Seat_L_Trans", 1];
_vehicle animate ["TOW_Hide_Rohr", 0];

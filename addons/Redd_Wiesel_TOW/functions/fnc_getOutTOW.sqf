#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets out of the TOW.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_getOutTOW
 *
 */

params ["_vehicle", "_player"];
TRACE_2("Get out of TOW",_vehicle,_player);

_player action ["moveToTurret", _vehicle, COMMANDER_TURRET_PATH];
[QEGVAR(Common,unlockSeat), [_player]] call CBA_fnc_localEvent;
_vehicle setVariable ["Redd_WieselTOW_Bino_In", false, true];

_vehicle animate ["Seat_L_Trans", 0];
_vehicle animate ["TOW_Hide_Rohr", 1];

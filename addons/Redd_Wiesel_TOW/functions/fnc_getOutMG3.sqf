#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets out of the MG3.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_getOutMG3
 *
 */

params ["_vehicle", "_player"];
TRACE_2("Get out of MG3",_vehicle,_player);

_player action ["moveToTurret", _vehicle, LOADER_TURRET_PATH];
[QEGVAR(Common,unlockSeat), [_player]] call CBA_fnc_localEvent;
_vehicle setVariable ["Redd_WieselTOW_Bino2_In", false, true];

_vehicle animate ["Seat_R_Trans", 0];

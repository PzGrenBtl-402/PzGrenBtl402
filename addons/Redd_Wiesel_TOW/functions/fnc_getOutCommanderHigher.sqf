#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets out of the higher position commander seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_getOutCommanderHigher
 *
 */

params ["_vehicle", "_player"];
TRACE_2("Get out commander higher pos",_vehicle,_player);

_player action ["moveToTurret", _vehicle, COMMANDER_TURRET_PATH];
[QEGVAR(Common,unlockSeat), [_player]] call CBA_fnc_localEvent;
_vehicle setVariable ["Redd_WieselTOW_Bino_In", false, true];

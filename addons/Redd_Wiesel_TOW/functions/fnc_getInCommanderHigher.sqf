#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets into the higher position commander seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_getInCommanderHigher
 *
 */

params ["_vehicle", "_player"];
TRACE_2("Get in commander higher pos",_vehicle,_player);

_player action ["moveToTurret", _vehicle, COMMANDER_HIGHER_TURRET_PATH];
[QEGVAR(Common,lockSeat), [_vehicle, COMMANDER_TURRET_PATH, _player]] call CBA_fnc_localEvent;
_vehicle setVariable ["Redd_WieselTOW_Bino_In", true, true];

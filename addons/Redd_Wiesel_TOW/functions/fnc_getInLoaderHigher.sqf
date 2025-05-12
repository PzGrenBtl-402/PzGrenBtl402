#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets into the higher position loader seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_getInLoaderHigher
 *
 */

params ["_vehicle", "_player"];
TRACE_2("Get in loader higher pos",_vehicle,_player);

_player action ["moveToTurret", _vehicle, LOADER_HIGHER_TURRET_PATH];
[QEGVAR(Common,lockSeat), [_vehicle, LOADER_TURRET_PATH, _player]] call CBA_fnc_localEvent;
_vehicle setVariable ["Redd_WieselTOW_Bino2_In", true, true];

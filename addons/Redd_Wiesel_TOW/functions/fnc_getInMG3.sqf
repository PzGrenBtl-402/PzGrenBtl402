#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets into the MG3.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_getInMG3
 *
 */

params ["_vehicle", "_player"];
TRACE_2("Get in MG3",_vehicle,_player);

_player action ["moveToTurret", _vehicle, LOADER_MG3_TURRET_PATH];
[QEGVAR(Common,lockSeat), [_vehicle, LOADER_TURRET_PATH, _player]] call CBA_fnc_localEvent;

_vehicle animate ["Seat_R_Trans", 1];

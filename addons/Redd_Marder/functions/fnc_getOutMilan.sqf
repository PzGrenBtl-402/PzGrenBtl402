#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets out of the Milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Marder_fnc_getOutMilan
 *
 */

params ["_veh", "_player"];

_player action ["moveToTurret", _veh, COMMANDER_TURRET_PATH];
[QGVAR(lockTurret), [_veh, [COMMANDER_TURRET_PATH, false]], _veh, COMMANDER_TURRET_PATH] call CBA_fnc_turretEvent;
_veh setVariable ["Redd_Marder_Commander_Up", false, true];
_veh setVariable ["Redd_Marder_Bino_In", false, true];

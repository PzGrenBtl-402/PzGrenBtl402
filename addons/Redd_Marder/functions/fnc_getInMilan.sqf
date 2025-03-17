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

params ["_veh", "_player"];

_player action ["moveToTurret", _veh, MILAN_TURRET_PATH];
[QGVAR(lockTurret), [_veh, [COMMANDER_TURRET_PATH, true]], _veh, COMMANDER_TURRET_PATH] call CBA_fnc_turretEvent;

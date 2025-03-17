#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Locks the given seat. Seat is unlocks in the event that the player is not occupying the related seat anymore.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: ARRAY - Turret
 *      2: OBJECT - Unit
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [vehicle player, [0, 0], player] call PzGrenBtl402_Redd_Marder_fnc_lockSeat
 *
 */

params ["_vehicle", "_turret", "_unit"];

[_vehicle, [_turret, true]] remoteExecCall ["lockTurret"];
TRACE_3("Locked seat",_unit,_vehicle,_turret);
_unit setVariable [QGVAR(lockedSeat), [_vehicle, _turret], true];

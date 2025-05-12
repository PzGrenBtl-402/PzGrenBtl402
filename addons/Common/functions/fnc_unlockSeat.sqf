#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Unlocks the seat of the commander after getting moved out.
 *
 *  Parameter(s):
 *      0: OBJECT - Unit
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [player] call PzGrenBtl402_Common_fnc_unlockSeat
 *
 */

params ["_unit"];

private _seat = _unit getVariable [QGVAR(lockedSeat), []];
if (_seat isEqualTo []) exitWith {};
_seat params ["_vehicle", "_turret"];

[_vehicle, [_turret, false]] remoteExecCall ["lockTurret"];
TRACE_3("Unlocked seat",_unit,_vehicle,_turret);

_unit setVariable [QGVAR(lockedSeat), nil, true];

#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if gunner can move to passenger 1 seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *
 *  Returns:
 *       BOOL - Gunner can move to passenger 1 seat
 *
 *  Example:
 *      [vehicle player, player] call PzGrenBtl402_Redd_Marder_fnc_canMoveGunnerToPassenger
 *
 */

params ["_vehicle", "_player"];


(alive _vehicle) &&
{_vehicle turretUnit GUNNER_TURRET isEqualTo _player} &&
{isNull (((fullCrew [_vehicle, "cargo", true]) param [0, []]) param [0, objNull])}

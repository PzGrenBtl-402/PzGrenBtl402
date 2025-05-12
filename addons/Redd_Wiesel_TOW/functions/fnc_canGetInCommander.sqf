#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if any player is able to get in commander seat of given vehicle. Does not check if seat are locked.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle.
 *
 *  Returns:
 *       BOOL - Can get in commander.
 *
 *  Example:
 *      [cursorObject] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_canGetInCommander
 *
 */

params ["_vehicle"];

(alive _vehicle) &&
{isNull (_vehicle turretUnit COMMANDER_TURRET_PATH)} &&
{isNull (_vehicle turretUnit TOW_TURRET_PATH)} &&
{isNull (_vehicle turretUnit COMMANDER_HIGHER_TURRET_PATH)}

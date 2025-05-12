#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if any player is able to get in loader seat of given vehicle. Does not check if seat are locked.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle.
 *
 *  Returns:
 *       BOOL - Can get in loader.
 *
 *  Example:
 *      [cursorObject] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_canGetInLoader
 *
 */

params ["_vehicle"];

(alive _vehicle) &&
{isNull (_vehicle turretUnit LOADER_TURRET_PATH)} &&
{isNull (_vehicle turretUnit LOADER_MG3_TURRET_PATH)} &&
{isNull (_vehicle turretUnit LOADER_HIGHER_TURRET_PATH)}

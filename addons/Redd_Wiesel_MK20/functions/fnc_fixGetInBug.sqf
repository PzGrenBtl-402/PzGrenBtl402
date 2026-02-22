#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Unlocks the commander turret. This is here for emergencies should the normal system not unlock the seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_Redd_Wiesel_MK20_fnc_fixGetInBug
 *
 */

params ["_vehicle"];

if (isNull (_vehicle turretUnit COMMANDER_HIGHER_TURRET_PATH)) then {
    [_vehicle, [COMMANDER_TURRET_PATH, false]] remoteExecCall ["lockTurret"];

    // Reset variables
    _vehicle setVariable ["Redd_wieselMk20_Bino_In", false, true];
};

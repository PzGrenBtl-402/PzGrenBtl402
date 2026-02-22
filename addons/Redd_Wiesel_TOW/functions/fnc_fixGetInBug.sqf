#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Unlocks the commander and loader turret. This is here for emergencies should the normal system not unlock the seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_fixGetInBug
 *
 */

params ["_vehicle"];

if (_vehicle lockedTurret COMMANDER_TURRET_PATH && {isNull (_vehicle turretUnit TOW_TURRET_PATH)} && {isNull (_vehicle turretUnit COMMANDER_HIGHER_TURRET_PATH)}) then {
    [_vehicle, [COMMANDER_TURRET_PATH, false]] remoteExecCall ["lockTurret"];

    // Reset variables
    _vehicle setVariable ["Redd_WieselTOW_Bino_In", false, true];
};

if (_vehicle lockedTurret LOADER_TURRET_PATH && {isNull (_vehicle turretUnit LOADER_MG3_TURRET_PATH)} && {isNull (_vehicle turretUnit LOADER_HIGHER_TURRET_PATH)}) then {
    [_vehicle, [LOADER_TURRET_PATH, false]] remoteExecCall ["lockTurret"];

    // Reset variables
    _vehicle setVariable ["Redd_WieselTOW_Bino2_In", false, true];
};

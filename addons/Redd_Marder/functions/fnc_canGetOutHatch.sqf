#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if player can get out using the hatch.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player/Caller
 *      2: STRING - Hatch ("commander", "driver", "left", "right", "middle")
 *
 *  Returns:
 *       BOOL - Can get out using the hatch.
 *
 *  Example:
 *      [vehicle player, player, "commander"] call PzGrenBtl402_Redd_Marder_fnc_canGetOutHatch
 *
 */

params ["_veh", "_player", "_hatch"];

private _isInTurret = switch (_hatch) do {
    case "commander": {(_veh turretUnit COMMANDER_TURRET_PATH isEqualTo _player) || {_veh turretUnit COMMANDER_HIGHER_TURRET_PATH isEqualTo _player}};
    case "driver": {_veh turretUnit DRIVER_TURRET_PATH isEqualTo _player};
    case "left": {_veh turretUnit HATCH_LEFT_TURRET_PATH isEqualTo _player};
    case "right": {_veh turretUnit HATCH_RIGHT_TURRET_PATH isEqualTo _player};
    case "middle": {_veh turretUnit HATCH_MIDDLE_TURRET_PATH isEqualTo _player};
};

(alive _veh) &&
_isInTurret &&
{isTurnedOut _player}

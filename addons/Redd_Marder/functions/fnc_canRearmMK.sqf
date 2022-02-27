#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns true if MK20 can be rearmed.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOLEAN - Can rearm MK20.
 *
 *  Example:
 *      [cursorObject, player] call PzGrenBtl402_Redd_Marder_fnc_canRearmMK
 *
 */

params ["_vehicle", "_player"];

isNull (gunner _vehicle) &&
{isNull objectParent _player} && // not in vehicle
{([_player, _vehicle, "shell_eject_pos"] call FUNC(distanceSelection)) < 2} // "machinegun_eject_pos" for mg; "smoke9_pos" for smoke launcher

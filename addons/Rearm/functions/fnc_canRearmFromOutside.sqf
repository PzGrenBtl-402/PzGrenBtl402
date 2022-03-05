#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns true if player can rearm vehicle from the outside on a selection.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *      2: STRING - Selection.
 *      3: NUMBER - Max radius from the selection.
 *
 *  Returns:
 *      BOOLEAN - Can rearm from outside.
 *
 *  Example:
 *      [cursorObject, player, "machinegun_eject_pos", 2] call PzGrenBtl402_Rearm_fnc_canRearmFromOutside
 *
 */

params ["_vehicle", "_player", "_selection", "_radius"];

isNull (gunner _vehicle) &&
{isNull objectParent _player} && // not in vehicle
{([_player, _vehicle, _selection] call FUNC(distanceSelection)) < _radius} // "machinegun_eject_pos" for mg; "smoke9_pos" for smoke launcher

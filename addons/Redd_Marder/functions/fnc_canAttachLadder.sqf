#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if ladder can be attacked to marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *      2: STRING - Vehicle side (left or right).
 *
 *  Returns:
 *       BOOLEAN - Can attack ladder to vehicle.
 *
 *  Example:
 *      [vehicle player, player, "left"] call PzGrenBtl402_Redd_Marder_fnc_canAttachLadder
 *
 */

params ["_veh", "_player", "_side"];

private _turret = [];
private _ladder = objNull;
switch (_side) do {
    case "left": {
        _turret = [0, 1];
        _ladder = [_veh, QGVAR(ladderLeft)] call FUNC(getAttachedLadder);
    };
    case "right": {
        _turret = [0, 2];
        _ladder = [_veh, QGVAR(ladderRight)] call FUNC(getAttachedLadder);
    };
};

(alive _veh) &&
{isNull _ladder} &&
{(_veh turretUnit _turret) isEqualTo _player} &&
{isTurnedOut _player} &&
{"ACE_TacticalLadder_Pack" in backpackCargo _veh}

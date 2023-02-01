#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if player can adjust attached ladder on vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *      2: STRING - Vehicle side (left or right).
 *
 *  Returns:
 *       BOOLEAN - Can adjust ladder.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_canAdjustLadder
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

!isNull _ladder &&
{isNull EGVAR(Ladder,ladder)} && // Does not currently adjust the ladder
{(_veh turretUnit _turret) isEqualTo _player} &&
{isTurnedOut _player} &&
{[_ladder] call ace_tacticalladder_fnc_isLadderEmpty}

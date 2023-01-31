/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if ladder can be attacked to marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player.
 *      2: STRING - Vehicle side the ladder should be attached to ("left" or "right").
 *
 *  Returns:
 *       BOOLEAN - Can attack ladder to vehicle.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_canAttachLadder
 *
 */

params ["_veh", "_player", "_side"];

private _turret = switch (_side) do {
    case "left": { [0, 1] };
    case "right": { [0, 2] };
};

(alive _veh) &&
{(_veh turretUnit _turret) isEqualTo _player} &&
{isTurnedOut _player} &&
{"ACE_TacticalLadder_Pack" in backpackCargo _veh}

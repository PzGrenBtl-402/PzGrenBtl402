/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Event triggered when the Marder fires a weapon.
 *      Hides MILAM Tube and resets MILAN magazines when MILAN is fired (for some reason the magazine stays even when the MILAN was fired).
 *      Triggers Redds SmokeLauncher.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: STRING - The weapon that was fired.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, "Redd_MILAN"] call PzGrenBtl402_fnc_marderFired
 *
 */

params ["_veh", "_weapon"];

_weapon = toLower _weapon;
if (_weapon isEqualTo "redd_milan") then {
    _veh animateSource ["ReloadMagazine", 1, true];
    [_veh, ['Redd_Milan_Mag', [1]]] remoteExecCall ["removeMagazinesTurret", _veh];
};

if (_weapon isEqualTo "pzgrenbtl402_smokelauncher") then {
    [_veh] call Redd_fnc_SmokeLauncher;
};

/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Hides MILAM Tube and resets MILAN magazines when MILAN is fired (for some reason the magazine stays even when the MILAN was fired).
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: STRING - The weapon that was fired.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      this call PzGrenBtl402_fnc_marderFired
 *
 */

params ["_veh","_weap"];

if (_weap == "Redd_Milan") then
{
  _veh animateSource ["ReloadMagazine", 1, true];
  [_veh, ['Redd_Milan_Mag', [1]]] remoteExec ["removeMagazinesTurret"];
};

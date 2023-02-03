#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Emtpy M120 Mortar magazine after one shot was fired.
 *
 *  Parameter(s):
 *      0: OBJECT - M120 Mortar.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_ACE_Compat_fnc_m120HandleFired
 *
 */

params ["_mortar"];

private _turret = [0];
private _mags = _mortar magazinesTurret _turret;

if (_mags isEqualTo []) exitwith {};

_mag = _mags select 0;
[_mortar, [_mag, _turret]] remoteExecCall ["removeMagazinesTurret"];

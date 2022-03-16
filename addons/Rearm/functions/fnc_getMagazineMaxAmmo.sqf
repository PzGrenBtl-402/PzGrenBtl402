#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns the maximum ammo capacity of the magazine.
 *
 *  Parameter(s):
 *      0: STRING - Magazine classname.
 *
 *  Returns:
 *      NUMBER - Maximum ammo capacity
 *
 *  Example:
 *      ["Redd_MK20_HE_Mag"] call PzGrenBtl402_Rearm_fnc_getMagazineMaxAmmo
 *
 */

params ["_magazineClass"];

private _maxAmmo = GVAR(magazineMaxAmmoCache) getVariable _magazineClass;
if (isNil "_maxAmmo") then { // Max ammo count is not in cache
    _maxAmmo = getNumber (configFile >> "CfgMagazines" >> _magazineClass >> "count");
    GVAR(magazineMaxAmmoCache) setVariable [_magazineClass, _maxAmmo];
};

_maxAmmo

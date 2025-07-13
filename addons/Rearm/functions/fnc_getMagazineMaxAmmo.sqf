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

GVAR(magazineMaxAmmoCache) getOrDefaultCall [_magazineClass, {
    getNumber (configFile >> "CfgMagazines" >> _magazineClass >> "count")
}, true]

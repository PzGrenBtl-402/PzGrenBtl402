#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns all available ammo items in the vehicle inventory which should be used to rearm.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle where the items are located
 *      1: ARRAY - Array of magazine items (STRING) which should be used to rearm.
 *
 *  Returns:
 *      ARRAY - Ammo item available in the vehicle to rearm it in format [[classnames], [ammo counts]].
 *              If no items are compatible, empty array is returned.
 *
 *  Example:
 *      [SPz_0, ["pzgrenbtl402_rearm_mk20_he_ammo"]] call PzGrenBtl402_Rearm_fnc_getAvailableAmmoItems =
 *      [["pzgrenbtl402_rearm_mk20_he_ammo", "pzgrenbtl402_rearm_mk20_he_ammo"], [25, 25]]
 *
 */

params ["_vehicle", "_ammoItems"];

TRACE_1("Called getAvailableAmmoItems",_this);

// We only need ammo items
private _magazineClassCargo = [];
private _magazineAmmoCargo = [];

private "_maxAmmo";
{
    _x params ["_class", "_ammo"];

    if (_ammoItems findIf {_x == _class} isNotEqualTo -1) then { // case insensitive search
        _maxAmmo = [_class] call FUNC(getMagazineMaxAmmo);
        if (_maxAmmo isEqualTo _ammo) then { // Ammo item needs to be full
            _magazineClassCargo pushBack _class;
            _magazineAmmoCargo pushBack _ammo;
        };
    };
} forEach (magazinesAmmoCargo _vehicle);

TRACE_2("Filtered mags",_magazineClassCargo,_magazineAmmoCargo);

// No compatible ammo item in vehicle inventory
if (_magazineClassCargo isEqualTo []) exitWith {
    []
};

[_magazineClassCargo, _magazineAmmoCargo]

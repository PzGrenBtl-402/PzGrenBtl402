#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns the preferred compatible ammo item in the vehcile inventory which should be used to rearm.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle where the items are located
 *      1: ARRAY - Array of magazine items (STRING) which can be used to rearm.
 *
 *  Returns:
 *      ARRAY - Ammo item which should be used to rearm. [classname, ammo count].
 *              If no item is compatible, empty array is returned.
 *
 *  Example:
 *      [SPz_0, ["pzgrenbtl402_rearm_mk20_he_ammo"]] call PzGrenBtl402_Rearm_fnc_getPreferredAmmoItem
 *
 */

params ["_vehicle", "_ammoItems"];

// We only need ammo items
private _magazineClassCargo = [];
private _magazineAmmoCargo = [];
{
    _x params ["_class", "_ammo"];

    if (_ammoItems findIf {_x == _class} isNotEqualTo -1) then { // case insensitive search
        private _maxAmmo = [_class] call FUNC(getMagazineMaxAmmo);
        if (_maxAmmo isEqualTo _ammo) then {
            _magazineClassCargo pushBack _class;
            _magazineAmmoCargo pushBack _ammo;
        };
    };
} forEach (magazinesAmmoCargo _vehicle);

TRACE_2("Filtered mags", _magazineClassCargo, _magazineAmmoCargo);

// No compatible ammo item in vehicle inventory
if (_magazineClassCargo isEqualTo []) exitWith {
    []
};

private _preferredItem = [];
{
    _x params ["_ammoItem"];

    private _index = _magazineClassCargo findIf {_x == _ammoItem};
    if (_index isNotEqualTo -1) then {
        _preferredItem = [_magazineClassCargo select _index, _magazineAmmoCargo select _index];
        break;
    };
} forEach _ammoItems;

TRACE_1("Selected ammo item", _preferredItem);

_preferredItem

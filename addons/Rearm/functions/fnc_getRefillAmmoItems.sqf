#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns the ammo items and their count which should be used to rearm.
 *
 *  Parameter(s):
 *      0: ARRAY - Array of preferred ammo items (STRING) which should be used to rearm.
 *      1: ARRAY - Available magazines in the vehcile which can be used to rearm.
 *      2: NUMBER - Total number of round to rearm.
 *
 *  Returns:
 *      ARRAY - Ammo item which should be used to rearm in format [[classnames], [ammo counts]].
 *              If no ammo items fit in the vehicle magazine because its full, an empty array is returned.
 *
 *  Example:
 *      [
 *          ["hlc_250Rnd_762x51_B_MG3", "hlc_100Rnd_762x51_B_MG3"],
 *          [["hlc_250Rnd_762x51_B_MG3", "hlc_100Rnd_762x51_B_MG3", "hlc_250Rnd_762x51_B_MG3"], [250, 100, 250]],
 *          450
 *      ] call PzGrenBtl402_Rearm_fnc_getRefillAmmoItems =
 *      [["hlc_250Rnd_762x51_B_MG3", "hlc_100Rnd_762x51_B_MG3"], [250, 100]]
 *
 */

params ["_ammoItems", "_availableMagazines", "_roundsToRearm"];

TRACE_1("Called getRefillAmmoItems", _this);

([_availableMagazines, _ammoItems] call FUNC(sortAvailableAmmoItems)) params ["_magazineClasses", "_magazineAmmo"];

private _refillItems = [];
private _refillAmmo = [];
private _rounds = 0;

private ["_ammoItem", "_magazineClass", "_ammo"];
{
    _ammoItem = _x;

    {
        _magazineClass = _x;

        if (_ammoItem != _magazineClass) then {
            continue;
        };

        _ammo = _magazineAmmo select _forEachIndex;
        if ((_rounds + _ammo) > _roundsToRearm) then {
            continue; // Current ammo item does not fit in mag, try next one with possibly lower ammo count
        };

        _rounds = _rounds + _ammo;

        _refillItems pushBack _magazineClass;
        _refillAmmo pushBack _ammo;

    } forEach _magazineClasses;
} forEach _ammoItems;

TRACE_2("Selected ammo items", _refillItems, _refillAmmo);

// Magazine is full
if (_refillItems isEqualTo []) exitWith {
    []
};

[_refillItems, _refillAmmo]

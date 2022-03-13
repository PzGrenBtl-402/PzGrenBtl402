#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Sorts  ammo items according to given classname priority list
 *
 *  Parameter(s):
 *      0: ARRAY - Ammo items and their counts in format [classnames, counts]
 *      1: ARRAY - Classname priority list
 *
 *  Returns:
 *      ARRAY - Sorted ammo items according to priority list
 *
 *  Example:
 *      [_availableMagazines, _ammoItems] call PzGrenBtl402_Rearm_fnc_sortAvailableAmmoItems
 *
 */

params ["_ammoItems", "_ammoItemPriority"];
_ammoItems params ["_items", "_counts"];

private _sortedItems = [];
private _sortedCounts = [];
{
    private _prio = _x;

    {
        if (_x != _prio) then {
            continue;
        };

        _sortedItems pushBack _x;
        _sortedItems pushBack (_counts select _forEachIndex);
    } forEach _items;
} foreach _ammoItemPriority;

[_sortedItems, _sortedCounts]

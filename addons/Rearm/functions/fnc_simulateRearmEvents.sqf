#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns the timings and ammo count of vehicle magazine at every stage.
 *
 *  Parameter(s):
 *      0: ARRAY - Initial ammo counts of vehicle magazine.
 *      1: NUMBER - Number of round in a full magazine.
 *      2: ARRAY - Refill items and amount of each ammo item which gets rearmed into the vehicle in format [classnames, amount].
 *      3: NUMBER - Time it takes to refill one ammo item.
 *
 *  Returns:
 *      ARRAY - Timings for each refill and the ammo count in format [time, array of ammo counts in this stage]
 *
 *  Example:
 *      [[0, 150], 500, [["class1", "class1", "class1", "class2"], [120, 120, 120, 100]], 15] call PzGrenBtl402_Rearm_fnc_simulateRearmEvents =
 *      [[15, ["class1", 120], [0, 270]], [30, ["class1", 120], [0, 390]], [45, ["class1", 120], [10, 500]], [60, ["class2", 100], [110, 500]]
 *      // Will simulate loading 120+120+120+100 rounds (every 15 sec) into magazine with already 150 rounds in a total of 610.
 *
 */

params ["_ammoCounts", "_maxAmmo", "_refillAmmoItems", "_timePerRefill"];
_refillAmmoItems params ["_refillItems", "_refillAmounts"];

TRACE_1("Called simulateRearmEvents", _this);

// Copy array, don't modify origial
_ammoCounts = +_ammoCounts;
_ammoCounts sort true;

private _time = 0;
private _events = [];

private ["_ammoToAdd", "_count", "_canAdd"];
{
    _ammoToAdd = _x;
    for "_i" from (count _ammoCounts - 1) to 0 do {
        _count = _ammoCounts select _i;
        if (_count >= _maxAmmo) then {
            continue;
        };

        if (_ammoToAdd <= 0) then {
            break;
        };

        _canAdd = (_maxAmmo - _count) min _ammoToAdd;
        _ammoToAdd = (_ammoToAdd - _canAdd) max 0;
        _ammoCounts set [_i, _count + _canAdd];
    };

    _time = _time + _timePerRefill;
    _events pushBack [_time, [_refillItems select _forEachIndex, _x], +_ammoCounts];
} forEach _refillAmounts;

_events

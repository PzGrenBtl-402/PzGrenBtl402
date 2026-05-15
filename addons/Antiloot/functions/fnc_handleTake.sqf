#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Handles a unit picking up items and triggering a trap.
 *
 *  Parameter(s):
 *      See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#Take
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Antiloot_fnc_handleTake
 *
 */

params ["_unit", "_container", "_item"];

if (
    !GVAR(activate) ||
    {!isPlayer _unit} ||
    {!local _unit} ||
    {count GVAR(blacklist) isEqualTo 0} ||
    {GVAR(excludeRemoteControlled) && {!isNull remoteControlled _unit}} ||
    {_unit getVariable [QGVAR(takeEHDebounce), false]}
) exitWith {};
TRACE_1("Take",_this);

private _class = toLowerANSI _item;
if !(_class in GVAR(blacklist)) exitWith {};

(GVAR(blacklist) get _class) params [["_probPickup", 0]];

if ((random 1) < _probPickup) then {
    [QGVAR(triggerTrap), ["container", _container, _unit]] call CBA_fnc_serverEvent;
};

// Debounce Take EH
// For some reason this EH is executed 2 times.
_unit setVariable [QGVAR(takeEHDebounce), true];
[{
    _this setVariable [QGVAR(takeEHDebounce), false];
}, _unit] call CBA_fnc_execNextFrame;

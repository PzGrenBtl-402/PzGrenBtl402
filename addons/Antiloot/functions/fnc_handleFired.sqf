#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Handles the weapon fire event of units to check if someone triggered a trap.
 *
 *  Parameter(s):
 *      See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#Fired
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Antiloot_fnc_handleFired
 *
 */

params ["_unit", "_weapon", "", "", "", "_magazine", "_projectile"];

if (
    !GVAR(activate) ||
    {!isPlayer _unit} ||
    {!local _unit} ||
    {count GVAR(blacklist) isEqualTo 0} ||
    {GVAR(excludeRemoteControlled) && {!isNull remoteControlled _unit}}
) exitWith {};
TRACE_1("Fired",_this);

// Check if weapon or magazine are blacklisted
_weapon = toLowerANSI _weapon;
_magazine = toLowerANSI _magazine;

private _class = switch (true) do {
    case (_weapon in GVAR(blacklist)): {_weapon};
    case (_magazine in GVAR(blacklist)): {_magazine};
    default {""};
};
if (_class isEqualTo "") exitWith {};

(GVAR(blacklist) get _class) params ["", ["_probFired", 0]];

if ((random 1) < _probFired) then {
    [QGVAR(triggerTrap), ["projectile", _projectile, _unit]] call CBA_fnc_serverEvent;
};

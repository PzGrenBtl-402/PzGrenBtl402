#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets the ladder from the vehicle ladder cache.
 *      If ladder is not attached to the vehicle anymore the cache is fixed and objNull is returned.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (marder) the ladder is attached to.
 *      1: STRING - Variable name/identifier the ladder is stored in the vehicle namespace.
 *
 *  Returns:
 *       OBJECT - Attached ladder or objNull if there is none.
 *
 *  Example:
 *      [veh, "PzGrenBtl402_Redd_Marder_ladderLeft"] call PzGrenBtl402_Redd_Marder_fnc_getAttachedLadder
 *
 */

params ["_veh", "_ladderCache"];

private _ladder = _veh getVariable [_ladderCache, objNull];

// Check if ladder was somehow detached (e.g. when repositioning with ACE)
if (!isNull _ladder && {(attachedTo _ladder) isNotEqualTo _veh}) then {
    _veh setVariable [_ladderCache, objNull, true];
    _ladder = objNull;
};

_ladder

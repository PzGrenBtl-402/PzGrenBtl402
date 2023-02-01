#include "script_component.hpp"
/**
 *  Author: Mishkar, Timi007
 *
 *  Description:
 *      Attaches an ACE ladder at the back of a marder on given side and on top.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: ARRAY - AttachTo offset of the ladder relative to the vehicle model.
 *      2: NUMBER - Direction the ladder should face relative to the vehicle.
 *
 *  Returns:
 *      OBJECT - Attached ladder.
 *
 *  Example:
 *      this call PzGrenBtl402_Redd_Marder_fnc_attachLadder
 *
 */

params [["_veh", objNull, [objNull]], ["_ladderOffset", [0, 0, 0], [[]]], ["_ladderDir", 0, [0]]];

if (isNull _veh) exitWith {};

private _ladder = "ACE_TacticalLadder" createVehicle [0, 0, 0];

for "_i" from MIN_STEP to MIN_ALLOWED_STEP do {
    _ladder animate [format ["extract_%1", _i], 1, true];
};
for "_i" from (MIN_ALLOWED_STEP + 1) to MAX_STEP do {
    _ladder animate [format ["extract_%1", _i], 0, true];
};

_ladder animate ["rotate", 0];

_ladder attachTo [_veh, _ladderOffset];
_ladder setDir _ladderDir;

// MP Sync for setDir. See https://community.bistudio.com/wiki/attachTo
_ladder setPosWorld getPosWorld _ladder;

[_veh, "ACE_TacticalLadder_Pack"] call CBA_fnc_removeBackpackCargo;

_ladder

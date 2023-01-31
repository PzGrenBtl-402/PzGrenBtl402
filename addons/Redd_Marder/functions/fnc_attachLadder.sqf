#include "script_component.hpp"
/**
 *  Author: Mishkar, Timi007
 *
 *  Description:
 *      Attaches an ACE ladder at the back of a marder on given side and on top.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: STRING - Vehicle side the ladder should be attacked to. ("left" or "right")
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      this call PzGrenBtl402_Redd_Marder_fnc_attachLadder
 *
 */

params [["_veh", objNull, [objNull]], ["_side", "", [""]]];

if (isNull _veh || _side isEqualTo "") exitWith {};

private _ladder = "ACE_TacticalLadder" createVehicle [0, 0, 0];

// Extract ladder
for "_i" from 1 to 11 do {
    _ladder animateSource [format ["extract_%1", _i], 1, true];
};

switch (_side) do {
    case "left": {
        _ladder attachTo [_veh, [-1.1, -1.7, -0.4]];
        _ladder setDir 270;
        _ladder setVectorUp [-0.2, 0, 1];
    };
    case "right": {
        _ladder attachTo [_veh, [1.1, -1.7, -0.4]];
        _ladder setDir 90;
        _ladder setVectorUp [0.2, 0, 1];
    };
};

[_veh, "ACE_TacticalLadder_Pack"] call CBA_fnc_removeBackpackCargo;

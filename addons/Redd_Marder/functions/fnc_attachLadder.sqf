#include "script_component.hpp"

params ["_veh", "_side"];

_ladder = "ACE_TacticalLadder" createVehicle [0, 0, 0];

_ladder animateSource ["extract_1", 1, true];
_ladder animateSource ["extract_2", 1, true];
_ladder animateSource ["extract_3", 1, true];
_ladder animateSource ["extract_4", 1, true];
_ladder animateSource ["extract_5", 1, true];
_ladder animateSource ["extract_6", 1, true];
_ladder animateSource ["extract_7", 1, true];
_ladder animateSource ["extract_8", 1, true];
_ladder animateSource ["extract_9", 1, true];
_ladder animateSource ["extract_10", 1, true];
_ladder animateSource ["extract_11", 1, true];

switch (_side) do
{
  case "left":
  {
    _ladder attachTo [_veh, [-1.1, -1.7, -0.4]];
    _ladder setDir 270;
    _ladder setVectorUp [-0.2, 0, 1];
  };
  case "right":
  {
    _ladder attachTo [_veh, [1.1, -1.7, -0.4]];
    _ladder setDir 90;
    _ladder setVectorUp [0.2, 0, 1];
  };
};

[_veh, "ACE_TacticalLadder_Pack"] call CBA_fnc_removeBackpackCargo;

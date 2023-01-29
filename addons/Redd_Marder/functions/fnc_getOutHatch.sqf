#include "script_component.hpp"

params ["_veh", "_caller", "_hatch"];

_caller action ["getOut", _veh];
sleep 0.5;

switch (_hatch) do
{
  case "commander":
  {
    _caller attachTo [_veh, [1, 0, -0.3]];
  };

  case "driver":
  {
    _caller attachTo [_veh, [-0.9, 1.6, -0.6]];
  };

  case "left":
  {
    _caller attachTo [_veh, [-0.6, -1.8, -0.4]];
    _caller setDir 270;
  };

  case "right":
  {
    _caller attachTo [_veh, [0.6, -1.8, -0.4]];
    _caller setDir 90;
  };

  case "middle":
  {
    _caller attachTo [_veh, [0, -2.7, -0.4]];
    _caller setDir 180;
  };
};

sleep 0.5;
detach _caller;

#include "script_component.hpp"
/**
 *  Author: Mishkar
 *
 *  Description:
 *      Initializes Ladder actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_initLadderActions
 *
 */


params ["_veh"];

if (!hasInterface) exitWith {};

// Leiter Links aufbauen
[
    _veh,
    "Leiter aufstellen",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
    "(alive _target) and (_target turretUnit [0, 1] == _this) and (isTurnedOut _this) and ('ACE_TacticalLadder_Pack' in backpackCargo _target)",
    "(alive _target) and (_target turretUnit [0, 1] == _this) and (isTurnedOut _this) and ('ACE_TacticalLadder_Pack' in backpackCargo _target)",
    {},
    {},
    {[_target, "left"] call PzGrenBtl402_Redd_Marder_fnc_attachLadder},
    {},
    [],
    5,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Leiter Rechts aufbauen
[
    _veh,
    "Leiter aufstellen",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
    "(alive _target) and (_target turretUnit [0, 2] == _this) and (isTurnedOut _this) and ('ACE_TacticalLadder_Pack' in backpackCargo _target)",
    "(alive _target) and (_target turretUnit [0, 2] == _this) and (isTurnedOut _this) and ('ACE_TacticalLadder_Pack' in backpackCargo _target)",
    {},
    {},
    {[_target, "right"] call PzGrenBtl402_Redd_Marder_fnc_attachLadder},
    {},
    [],
    5,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Handle trap trigger event by detonating a explosive at the object position.
 *      Should be executed on the server.
 *
 *  Parameter(s):
 *      0: STRING - Type of object that contains the trap ("projectile", "container").
 *      1: OBJECT - The object that contains the trap.
 *      2: OBJECT - The unit that triggered the trap.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      ["projectile", _projectile, _unit] call PzGrenBtl402_Antiloot_fnc_detonate
 *      ["container", _container, _unit] call PzGrenBtl402_Antiloot_fnc_detonate
 *
 */

params [["_type", "", [""]], ["_obj", objNull, [objNull]], ["_unit", objNull, [objNull]]];
TRACE_3("Detonate",_type,_obj,_unit);

if (isNull _obj || {isNull _unit}) exitWith {};

private _pos = if (_type isEqualTo "container") then {
    _unit modelToWorld [0, 0.5, 0]
} else {
    ASLToAGL getPosASL _obj
};

private _explosive = createMine [GVAR(detonateMine), _pos, [], 0];
_explosive setDamage [1, true, _unit, _unit];

if (_type isEqualTo "projectile") then {
    deleteVehicle _obj;
};

// Log the unit that trigger the trap
INFO_4("Unit triggered trap: type=%1 obj=%2 unit=%3 name=%4",_type,_obj,_unit,name _unit);

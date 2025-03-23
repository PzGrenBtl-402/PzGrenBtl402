#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Event triggered when someone gets out of the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: STRING - Role
 *      2: OBJECT - Unit
 *      3: ARRAY - Turret
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_handleGetOut
 *
 */

params ["_vehicle", "_role", "_unit", "_turret"];
TRACE_3("handleGetOut",_this,local _vehicle,local _unit);

if (local _vehicle && {_turret isEqualTo COMMANDER_TURRET_PATH} || {_turret isEqualTo MILAN_TURRET_PATH} || {_turret isEqualTo COMMANDER_HIGHER_TURRET_PATH}) then {
    LOG("Unlock commander seat.");
    [_unit] call FUNC(unlockSeat);

    // Reset variables
    _vehicle setVariable ["Redd_Marder_Commander_Up", false, true];
    _vehicle setVariable ["Redd_Marder_Bino_In", false, true];
    _vehicle setVariable ['Redd_Marder_Commander_Winkelspiegel', false, true];
};

if (local _unit && {_veh getVariable ["has_camonet_large", false] || {_veh getVariable ["has_camonet", false]}}) then {
    private _camoCoef = _unit getVariable [QGVAR(camouflageCoef), getNumber (configOf _unit >> "camouflage")];
    _unit setUnitTrait ["camouflageCoef", _camoCoef];
};

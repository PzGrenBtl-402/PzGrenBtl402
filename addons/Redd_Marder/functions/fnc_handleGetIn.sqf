#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Event triggered when someone gets in the vehicle.
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
 *      _this call PzGrenBtl402_Redd_Marder_fnc_handleGetIn
 *
 */

params ["_vehicle", "_role", "_unit", "_turret"];

if (!local _unit) exitWith {};

if (_role == "commander") then {
    // Reset variables
    _vehicle setVariable ["Redd_Marder_Commander_Up", false, true];
    _vehicle setVariable ["Redd_Marder_Bino_In", false, true];
    _vehicle setVariable ['Redd_Marder_Commander_Winkelspiegel', false, true];
};

if (_vehicle getVariable ['has_camonet_large', false]) then {
    _unit setVariable [QGVAR(camouflageCoef), _unit getUnitTrait "camouflageCoef", true];
    _unit setUnitTrait ["camouflageCoef", 0.1];
};

if (_vehicle getVariable ['has_camonet', false]) then {
    _unit setVariable [QGVAR(camouflageCoef), _unit getUnitTrait "camouflageCoef", true];

    private _camouflage = getNumber (configOf _unit >> "camouflage");
    _unit setUnitTrait ["camouflageCoef", _camouflage * 0.8];
};

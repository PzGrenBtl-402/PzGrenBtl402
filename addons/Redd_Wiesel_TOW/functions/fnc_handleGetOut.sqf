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
 *      _this call PzGrenBtl402_Redd_Wiesel_TOW_fnc_handleGetOut
 *
 */

params ["_vehicle", "_role", "_unit", "_turret"];
TRACE_3("handleGetOut",_this,local _vehicle,local _unit);

if (local _vehicle) then {
    if (_turret isEqualTo COMMANDER_TURRET_PATH || {_turret isEqualTo TOW_TURRET_PATH} || {_turret isEqualTo COMMANDER_HIGHER_TURRET_PATH}) then {
        LOG("Unlock commander seat.");
        [QEGVAR(Common,unlockSeat), [_unit]] call CBA_fnc_localEvent;

        // Reset variables
        _vehicle setVariable ["Redd_WieselTOW_Bino_In", false, true];
    };

    if (_turret isEqualTo LOADER_TURRET_PATH || {_turret isEqualTo LOADER_MG3_TURRET_PATH} || {_turret isEqualTo LOADER_HIGHER_TURRET_PATH}) then {
        LOG("Unlock loader seat.");
        [QEGVAR(Common,unlockSeat), [_unit]] call CBA_fnc_localEvent;

        // Reset variables
        _vehicle setVariable ["Redd_WieselTOW_Bino2_In", false, true];
    };
};

if (local _unit && {_veh getVariable ["has_camonet_large", false] || {_veh getVariable ["has_camonet", false]}}) then {
    private _camoCoef = _unit getVariable [QGVAR(camouflageCoef), getNumber (configOf _unit >> "camouflage")];
    _unit setUnitTrait ["camouflageCoef", _camoCoef];
};

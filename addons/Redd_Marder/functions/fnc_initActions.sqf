#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Initializes custom getin/getout actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_initActions
 *
 */

params ["_veh"];

if (hasInterface) then {
    private _vehName = getText (configOf _veh >> "displayName");

    {
        _x params ["_params", "_str", "_picture"];

        private _text = format [localize _str, _vehName];
        private _actionID = _veh addAction _params;
        _veh setUserActionText [_actionID, _text, "", _picture];
    } forEach GVAR(getInParams);
};

if (isServer) then {
    if (locked _veh isNotEqualTo 2) then {
        [_veh, 2] remoteExecCall ["lock", _veh];
    };

    if (_veh getVariable [QGVAR(RampAttribute), false] isEqualTo true) then { // type checking
        [_veh] call FUNC(openRamp);
    }
};

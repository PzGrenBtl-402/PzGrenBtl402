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

params ["_vehicle"];

if (hasInterface) then {
    private _displayName = getText (configOf _vehicle >> "displayName");

    {
        _x params ["_params", "_str", "_picture"];

        private _text = format [localize _str, _displayName];
        private _actionID = _vehicle addAction _params;
        _vehicle setUserActionText [_actionID, _text, "", _picture];
    } forEach GVAR(getInParams);
};

if (isServer) then {
    if (locked _vehicle isNotEqualTo 2) then {
        [QGVAR(lock), [_vehicle, 2], _vehicle] call CBA_fnc_targetEvent;
    };

    if (_vehicle getVariable [QGVAR(RampAttribute), false] isEqualTo true) then { // type checking
        [_vehicle, true] call FUNC(openRamp);
    }
};

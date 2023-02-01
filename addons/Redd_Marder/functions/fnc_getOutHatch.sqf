#include "script_component.hpp"
/**
 *  Author: Mishkar, Timi007
 *
 *  Description:
 *      Player action to get out of a marder through the hatch.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: OBJECT - Player which gets out.
 *      1: STRING - Hatch the player get out from.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      this call PzGrenBtl402_Redd_Marder_fnc_getOutHatch
 *
 */

params [["_veh", objNull, [objNull]], ["_caller", objNull, [objNull]], ["_hatch", "", [""]]];

if (isNull _veh || isNull _caller || _hatch isEqualTo "") exitWith {};

_caller action ["getOut", _veh];

[{isNull objectParent (_this select 1)}, { // wait until player is out of vehicle
    params ["_veh", "_caller", "_hatch"];

    switch (_hatch) do {
        case "commander": {
            _caller attachTo [_veh, [1, 0, -0.3]];
        };

        case "driver": {
            _caller attachTo [_veh, [-0.9, 1.6, -0.6]];
        };

        case "left": {
            _caller attachTo [_veh, [-0.6, -1.8, -0.4]];
            _caller setDir 270;
        };

        case "right": {
            _caller attachTo [_veh, [0.6, -1.8, -0.4]];
            _caller setDir 90;
        };

        case "middle": {
            _caller attachTo [_veh, [0, -2.7, -0.4]];
            _caller setDir 180;
        };
    };

    [{
        params ["_caller"];
        detach _caller;
    }, [_caller], 0.1] call CBA_fnc_waitAndExecute;
}, _this] call CBA_fnc_waitUntilAndExecute;

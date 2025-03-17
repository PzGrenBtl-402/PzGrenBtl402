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
 *      2: STRING - Hatch ("commander", "driver", "left", "right", "middle")
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player, "commander"] call PzGrenBtl402_Redd_Marder_fnc_getOutHatch
 *
 */

params ["_vehicle", "_unit", "_hatch"];

_unit action ["getOut", _vehicle];

[{isNull objectParent (_this select 1)}, { // wait until player is out of vehicle
    params ["_vehicle", "_unit", "_hatch"];

    switch (_hatch) do {
        case "commander": {
            _unit attachTo [_vehicle, [1, 0, -0.3]];
        };

        case "driver": {
            _unit attachTo [_vehicle, [-0.9, 1.6, -0.6]];
        };

        case "left": {
            _unit attachTo [_vehicle, [-0.6, -1.8, -0.4]];
            _unit setDir 270;
        };

        case "right": {
            _unit attachTo [_vehicle, [0.6, -1.8, -0.4]];
            _unit setDir 90;
        };

        case "middle": {
            _unit attachTo [_vehicle, [0, -2.7, -0.4]];
            _unit setDir 180;
        };
    };

    [{
        params ["_unit"];
        detach _unit;
    }, [_unit], 0.1] call CBA_fnc_waitAndExecute;
}, _this] call CBA_fnc_waitUntilAndExecute;

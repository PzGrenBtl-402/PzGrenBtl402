#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Add action to Marder for placing map onto the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_GM_Marder_fnc_initMapActions
 *
 */

params ["_veh"];

if (isNil "mts_map_fnc_getPlaceMapOnVehicleAction" || !hasInterface) exitWith {};

// On the ramp
private _action = [
    [0, -3.65, -2.065],
    [[1, 0, 0], [0, -0.422618, 0.906308]],
    {
        params ["_vehicle"];
        _vehicle doorPhase "hatch_1_1_source" == 1 &&
        {_vehicle getVariable ["PzGrenBtl402_showMapAction", true]}
    },
    []
] call mts_map_fnc_getPlaceMapOnVehicleAction;
[_veh, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;

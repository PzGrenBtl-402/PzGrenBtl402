#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Add action to Wolf for placing map onto the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Wolf.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_Redd_Wolf_fnc_initMapActions
 *
 */

params ["_veh"];

if (isNil "mts_map_fnc_getPlaceMapOnVehicleAction" || !hasInterface) exitWith {};

// On the hood
private _action = [
    [-0.2051, 1.4929, -0.3325],
    [[-1, 0, 0], [0, 0.1, 1]],
    {
        params ["_vehicle"];

        _vehicle getVariable ["PzGrenBtl402_showMapAction", true]
    },
    []
] call mts_map_fnc_getPlaceMapOnVehicleAction;
[_veh, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;

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
 *      [cursorTarget] call PzGrenBtl402_Redd_Marder_fnc_initMapActions
 *
 */

params ["_veh"];

if (isNil "mts_map_fnc_getPlaceMapOnVehicleAction" || !hasInterface) exitWith {};

// On the ramp
private _action = [
    [0.0012, -3.5815, -1.83],
    [[1, 0, 0], [0, -0.193627, 0.981075]],
    {
        params ["_vehicle"];
        _vehicle animationSourcePhase "heck_luke_rotation" == 1 &&
        {_vehicle getVariable ["PzGrenBtl402_showMapAction", true]}
    },
    []
] call mts_map_fnc_getPlaceMapOnVehicleAction;
[_veh, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;

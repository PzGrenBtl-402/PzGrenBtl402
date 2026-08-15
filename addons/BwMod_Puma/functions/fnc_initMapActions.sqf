#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Add action to Puma for placing map onto the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Puma.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_BwMod_Puma_fnc_initMapActions
 *
 */

params ["_veh"];

if (!("mts_map" call ace_common_fnc_isModLoaded) || !hasInterface) exitWith {};

// On the ramp
private _action = [
    [0.0131836,-3.86426,1.56863],
    [[1,-0.00291926,0.000209961],[-0.00286234,-0.990424,-0.138032]],
    {
        params ["_vehicle"];
        _vehicle getVariable ["PzGrenBtl402_showMapAction", true]
    },
    []
] call mts_map_fnc_getPlaceMapOnVehicleAction;
[_veh, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;

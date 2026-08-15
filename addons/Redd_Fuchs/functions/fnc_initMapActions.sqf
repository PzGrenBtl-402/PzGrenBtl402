#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Add action to Fuchs for placing map onto the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Fuchs.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_Redd_Fuchs_fnc_initMapActions
 *
 */

params ["_veh"];

if (!("mts_map" call ace_common_fnc_isModLoaded) || !hasInterface) exitWith {};

// On the doors at the back
private _action = [
    [-0.318359,-3.41504,-0.402802],
    [[1,0,-0.0131426],[0,-1,0.00305415]],
    {
        params ["_vehicle"];
        _vehicle animationSourcePhase "door3_Source" == 0 &&
        {_vehicle getVariable ["PzGrenBtl402_showMapAction", true]}
    },
    []
] call mts_map_fnc_getPlaceMapOnVehicleAction;
[_veh, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;

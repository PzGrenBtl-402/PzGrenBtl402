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
 *      [cursorTarget] call PzGrenBtl402_GM_Fuchs_fnc_initMapActions
 *
 */

params ["_veh"];

if (isNil "mts_map_fnc_getPlaceMapOnVehicleAction" || !hasInterface) exitWith {};

private _offset = [];
private _vectorDirAndUp = [];

switch (true) do
{
    case (_veh isKindOf "gm_fuchsa0_engineer_base"): {
        _offset = [-0.399902,-3.41406,-0.674683];
        _vectorDirAndUp = [[1,0.00418657,0],[0.00418883,-1,0.00504393]];
    };
    case (_veh isKindOf "gm_fuchsa0_reconnaissance_base"): {
        _offset = [-0.393066,-3.52734,-0.675018];
        _vectorDirAndUp = [[1,0.00010735,-0.0131467],[0.000252549,-1,0.0110433]];
    };
    case (_veh isKindOf "gm_fuchsa0_medic_base"): {
        _offset = [-0.602539,-3.47461,-0.676361];
        _vectorDirAndUp = [[1,0.00010735,-0.0131467],[0.000252549,-1,0.0110433]];
    };
    case (_veh isKindOf "gm_fuchsa0_command_base"): {
        _offset = [-0.57373,-3.47656,-0.669434];
        _vectorDirAndUp = [[1,0.0117002,-0.0131467],[0.0118456,-1,0.0110407]];
    };
};

if (_offset isEqualTo [] && _vectorDirAndUp isEqualTo []) exitWith {};

// On the doors at the back
private _action = [
    _offset,
    _vectorDirAndUp,
    {
        params ["_vehicle"];

        _vehicle doorPhase "door_2_1_source" == 0 &&
        {_vehicle doorPhase "door_2_2_source" == 0} &&
        {_vehicle getVariable ["PzGrenBtl402_showMapAction", true]}
    },
    []
] call mts_map_fnc_getPlaceMapOnVehicleAction;
[_veh, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;

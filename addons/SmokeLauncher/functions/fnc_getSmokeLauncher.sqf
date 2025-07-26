#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns the smoke launcher muzzle of the vehicle.
 *
 *  Parameter(s):
 *      0: STRING - Vehicle class.
 *
 *  Returns:
 *       STRING - Smoke launcher muzzle.
 *
 *  Example:
 *      ["Redd_Marder_1A5_base"] call PzGrenBtl402_SmokeLauncher_fnc_getSmokeLauncher
 *
 */

params [["_vehicleClass", "", [""]]];

if (_vehicleClass isEqualTo "") exitWith {ERROR("Empty vehicle class.")};

GVAR(smokeLauncherMuzzleCache) getOrDefaultCall [_vehicleClass, {
    getText (configFile >> "CfgVehicles" >> _vehicleClass >> "PzGrenBtl402_smokeLauncherMuzzle")
}, true]

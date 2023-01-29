#include "script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Assembles MILAN (only the Tripod; ammo has to be loaded separately)
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      this call PzGrenBtl402_Redd_Marder_fnc_assembleMilan
 *
 */

params ["_veh"];

_veh animateSource ["Hide_Milan_Source", 0];

// Use GM tripod if available
private _milanClass = if ("gm_milan_launcher_weaponBag" in backpackCargo _veh) then {
    "gm_milan_launcher_weaponBag"
} else {
    "Redd_Milan_Static_Tripod"
};

_veh setVariable [QGVAR(milanTripod), _milanClass, true];
[_veh, _milanClass] call CBA_fnc_removeBackpackCargo;

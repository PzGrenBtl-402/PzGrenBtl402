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
[_veh, "Redd_Milan_Static_Tripod"] call CBA_fnc_removeBackpackCargo;

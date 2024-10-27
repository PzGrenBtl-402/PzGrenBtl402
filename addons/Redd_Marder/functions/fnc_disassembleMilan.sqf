#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Disassemble MILAN.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      this call PzGrenBtl402_Redd_Marder_fnc_canDisassembleMilan
 *
 */

params ["_veh"];

_veh animateSource ["Hide_Milan_Source", 1];

private _milanClass = _veh getVariable [QGVAR(milanTripod), "Redd_Milan_Static_Tripod"];
_veh setVariable [QGVAR(milanTripod), nil, true]; // Remove var again
_veh addBackpackCargoGlobal [_milanClass, 1];

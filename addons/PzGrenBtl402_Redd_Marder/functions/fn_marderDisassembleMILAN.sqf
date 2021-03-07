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
 *      this call PzGrenBtl402_fnc_marderCanDisassembleMILAN
 *
 */

params ["_veh"];

_veh animateSource ["Hide_Milan_Source", 1];
_veh addBackPackCargoGlobal ["Redd_Milan_Static_Tripod", 1];

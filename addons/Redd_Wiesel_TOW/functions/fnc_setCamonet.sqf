#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Sets camonet on Wiesel.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder.
 *      1: BOOLEAN - Set (true) or remove (false) camonet.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this, true] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_setCamonet
 *
 */

params [["_vehicle", objNull, [objNull]], ["_setCamonet", true, [true]]];

if (isNull _vehicle) exitWith {};

private _camonetAnimPhase = [1, 0] select _setCamonet;
private _camonetAnimSource = switch (typeOf _vehicle) do {
    case "Redd_Tank_Wiesel_1A2_TOW_Flecktarn": {"netz_wanne_f_hide_Source"};
    case "Redd_Tank_Wiesel_1A2_TOW_Tropentarn": {"netz_wanne_d_hide_Source"};
    case "Redd_Tank_Wiesel_1A2_TOW_Wintertarn": {"netz_wanne_w_hide_Source"};
    default {""};
};

if (_camonetAnimSource isEqualTo "") exitWith {};

_vehicle setVariable ["has_camonet", _setCamonet, true];

_vehicle animateSource [_camonetAnimSource, _camonetAnimPhase];

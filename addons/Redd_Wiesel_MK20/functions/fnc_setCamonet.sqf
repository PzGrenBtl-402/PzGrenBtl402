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
 *      [this, true] call PzGrenBtl402_Redd_Wiesel_MK20_fnc_setCamonet
 *
 */

params [["_vehicle", objNull, [objNull]], ["_setCamonet", true, [true]]];

if (isNull _vehicle) exitWith {};

private _camonetAnimPhase = [1, 0] select _setCamonet;
private _camonetAnimSources = switch (typeOf _vehicle) do {
    case "Redd_Tank_Wiesel_1A4_MK20_Flecktarn": {["mk20_netz_wanne_hide_Source", "mk20_netz_turm_hide_Source", "mk20_netz_waffe_hide_Source"]};
    case "Redd_Tank_Wiesel_1A4_MK20_Tropentarn": {["mk20_netz_wanne_d_hide_Source", "mk20_netz_turm_d_hide_Source", "mk20_netz_waffe_d_hide_Source"]};
    case "Redd_Tank_Wiesel_1A4_MK20_Wintertarn": {["mk20_netz_wanne_w_hide_Source", "mk20_netz_turm_w_hide_Source", "mk20_netz_waffe_w_hide_Source"]};
    default {[]};
};

if (_camonetAnimSources isEqualTo []) exitWith {};

_vehicle setVariable ["has_camonet", _setCamonet, true];

{
    _vehicle animateSource [_x, _camonetAnimPhase];
} forEach _camonetAnimSources;

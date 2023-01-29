#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Sets camonet on Marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder.
 *      1: BOOLEAN - Set (true) or remove (false) camonet.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this, true] call PzGrenBtl402_Redd_Marder_fnc_setCamonet
 *
 */

params [["_vehicle", objNull, [objNull]], ["_setCamonet", true, [true]]];

if (isNull _vehicle) exitWith {};

private _camotnetAnimPhase = if (_setCamonet) then {0} else {1};
private _camonetAnimSource = switch (typeOf _vehicle) do {
    case "Redd_Marder_1A5_Flecktarn": {"marder_netz_wanne_hide_Source"};
    case "Redd_Marder_1A5_Tropentarn": {"marder_netz_wanne_d_hide_Source"};
    case "Redd_Marder_1A5_Wintertarn": {"marder_netz_wanne_w_hide_Source"};
    default {""};
};

if (_camonetAnimSource isEqualTo "") exitWith {};

_vehicle setVariable ["has_camonet", _setCamonet, true];

_vehicle animateSource [_camonetAnimSource, _camotnetAnimPhase];

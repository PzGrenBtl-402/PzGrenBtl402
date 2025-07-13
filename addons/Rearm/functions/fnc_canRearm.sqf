#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if other players currently rearm given magazine class of the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle.
 *      2: STRING - Magazine class.
 *
 *  Returns:
 *      BOOL - No players currently rearm given magazine class.
 *
 *  Example:
 *      [vehicle, "Redd_MK20_HE_Mag"] call PzGrenBtl402_Rearm_fnc_canRearm
 *
 */

params ["_vehicle", "_magazineClass"];

!(_magazineClass in (_vehicle getVariable [QGVAR(rearming), []]))

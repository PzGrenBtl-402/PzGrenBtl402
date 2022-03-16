#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if other players currently rearm given magazin class of the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle.
 *      1: OBJECT - Player.
 *      2: STRING - Magazine class.
 *
 *  Returns:
 *      BOOLEAN - No players currently rearm given magazin class.
 *
 *  Example:
 *      [vehicle, player, "Redd_MK20_HE_Mag"] call PzGrenBtl402_Rearm_fnc_canRearm
 *
 */

params ["_vehicle", "_player", "_magazineClass"];

!(_magazineClass in (_vehicle getVariable [QGVAR(rearming), []]))

#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Event trigger when Wiesel fires a weapon.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel.
 *      1: STRING - Weapon class which fired.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this, "Redd_TOW"] call PzGrenBtl402_Redd_Wiesel_TOW_fnc_handleTOWFired
 *
 */

params ["_vehicle", "_weapon"];

if (_weapon == "Redd_TOW") then {
    [QGVAR(removeMagazinesTurret), [_vehicle, [TOW_MAGAZINE, TOW_TURRET_PATH]], _vehicle, TOW_TURRET_PATH] call CBA_fnc_turretEvent;
};

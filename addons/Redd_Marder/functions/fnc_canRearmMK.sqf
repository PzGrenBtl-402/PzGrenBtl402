#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Check if given MK20 magazine of vehicle can be rearmed.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle.
 *      1: OBJECT - Player.
 *      2: STRING - Magazine of vehicle to rearm.
 *
 *  Returns:
 *      BOOLEAN - Can rearm.
 *
 *  Example:
 *      [_target, _this, "gm_425Rnd_20x139mm_hei_t_dm81"] call PzGrenBtl402_GM_Marder_fnc_canRearmMK
 *
 */

params ["_vehicle", "_player", "_magazineClass"];

([_vehicle, _player] call FUNC(canRearmMKProgress)) &&
{[_vehicle, _magazineClass] call EFUNC(Rearm,canRearm)}

#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Check if given MK20 magazine of vehicle can be rearmed. Used to check during rearming
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle.
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOLEAN - Can rearm.
 *
 *  Example:
 *      [_target, _this, "gm_425Rnd_20x139mm_hei_t_dm81"] call PzGrenBtl402_GM_Marder_fnc_canRearmMKProgress
 *
 */

params ["_vehicle", "_player"];

(_player isEqualTo (fullCrew [_vehicle, "cargo", true] select 0 select 0))

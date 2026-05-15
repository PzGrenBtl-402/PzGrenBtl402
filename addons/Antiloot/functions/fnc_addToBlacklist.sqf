#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Add Weapon/Magazine/Item to the blacklist that will trigger a trap. This function is local.
 *
 *  Parameter(s):
 *      0: STRING - Weapon/Magazine/Item classname that will trigger the trap.
 *      1: NUMBER - Probability (0-1) that will trigger the trap when the Weapon/Magazine/Item is picked up.
 *      2: NUMBER - Probability (0-1) that will trigger the trap when the Weapon is fired or the Magazine is used.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      // 10 % chance that picking up an RPG7 and 50 % chance on fire will trigger a trap (detonation).
 *      ["launch_RPG7_F", 0.1, 0.5] call PzGrenBtl402_Antiloot_fnc_addToBlacklist
 *      // 50 % chance that picking up a HandGrenade and 100 % chance on throw will trigger a trap (detonation).
 *      ["HandGrenade", 0.5, 1] call PzGrenBtl402_Antiloot_fnc_addToBlacklist
 *
 */

params [["_class", "", [""]], ["_probPickup", 0, [0]], ["_probFired", 0, [0]]];

GVAR(blacklist) set [toLowerANSI _class, [_probPickup, _probFired]];

nil

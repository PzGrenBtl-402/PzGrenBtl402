#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Remove a Weapon/Magazine/Item from the blacklist so that it is no longer trapped. This function is local.
 *
 *  Parameter(s):
 *      0: STRING - The Weapon/Magazine/Item classname.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      ["HandGrenade"] call PzGrenBtl402_Antiloot_fnc_removeFromBlacklist
 *
 */

params [["_class", "", [""]]];

GVAR(blacklist) deleteAt (toLowerANSI _class);

nil

#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets a non-ambigious display name for a magazine.
 *
 *  Parameter(s):
 *      0: STRING - Magazine Classname
 *
 *  Returns:
 *      STRING - Display Name
 *
 *  Example:
 *      ["B_20mm_AP"] call PzGrenBtl402_Rearm_fnc_getMagazineName
 *
 */

params [["_magazineClass", "", [""]]];

// Just a wrapper
[_magazineClass] call ace_rearm_fnc_getMagazineName

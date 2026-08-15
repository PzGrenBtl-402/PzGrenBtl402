#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if object can be cut down.
 *
 *  Parameter(s):
 *      0: OBJECT - Object to cut.
 *
 *  Returns:
 *       BOOL - Object can be cut.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_Wirecutter_fnc_canCut
 *
 */

params ["_object"];

(toLower (getModelInfo _object select 0)) in GVAR(possibleObjects)

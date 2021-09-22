#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Dummy function for creating actions on vehicles (open of hatches, lights, etc) once the infantry phone is picked up.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle with infantry phone
 *      1: OBJECT - Infantry phone unit
 *      2: NUMBER - Infantry phone action (1: return, 2: pick-up, 3: give, 4: switch network)
 *
 *  Returns:
 *      None
 *
 *  Example:
 *      [cursorTarget, player, 1] call PzGrenBtl402_ACRE_fnc_noApiFunction
 *
 */

TRACE_1("This is the dummy function for infantry phone: %1", QFUNC(noApiFunction));

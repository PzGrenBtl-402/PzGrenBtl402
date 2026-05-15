#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Add a trap to a container that will trigger if a unit opens it. Must be executed on Server.
 *
 *  Parameter(s):
 *      0: OBJECT - The container (e.g., a unit, vehicle, box, ...) to trap.
 *      1: NUMBER - Probability (0-1) that the trap will trigger.
 *      2: BOOL - Check the probability only when the container is opened for the first time. Defaults to check only the first open event.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget, 0.75, true] call PzGrenBtl402_Antiloot_fnc_addTrapToContainer
 *
 */

params [["_container", objNull, [objNull]], ["_probability", 0, [0]], ["_oneTime", true, [true]]];

if (!isServer) exitWith {};
TRACE_1("Add trap (server)",_this);

private _jipID = format [QGVAR(trappedContainer_%1), hashValue _container];
[QGVAR(addTrapToContainerLocal), [_container, _probability, _oneTime], _jipID] call CBA_fnc_globalEventJIP;
[_jipID, _container] call CBA_fnc_removeGlobalEventJIP;

nil

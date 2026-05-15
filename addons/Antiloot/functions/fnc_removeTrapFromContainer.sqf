#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Remove the trap from the container. Must be executed on Server.
 *
 *  Parameter(s):
 *      0: OBJECT - Container containing the trap.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_Antiloot_fnc_removeTrapFromContainer
 *
 */

params [["_container", objNull, [objNull]]];

if (!isServer) exitWith {};
TRACE_1("Remove trap (server)",_container);

private _jipID = format [QGVAR(trappedContainer_%1), hashValue _container];
[_jipID] call CBA_fnc_removeGlobalEventJIP;

[QGVAR(removeTrapFromContainerLocal), [_container]] call CBA_fnc_globalEvent;

nil

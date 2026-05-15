#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Remove the trap from the container. This function is local.
 *
 *  Parameter(s):
 *      0: OBJECT - Container containing the trap.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_Antiloot_fnc_removeTrapFromContainerLocal
 *
 */

params [["_container", objNull, [objNull]]];
TRACE_1("Remove trap (local)",_container);

private _handle = _container getVariable [QGVAR(handle), -1];
if (_handle < 0) exitWith {};

_container setVariable [QGVAR(handle), nil];
_container removeEventHandler ["ContainerOpened", _handle];

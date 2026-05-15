#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Add a trap to a container that will trigger if a unit opens it. This function is local.
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
 *      [cursorTarget, 0.75, true] call PzGrenBtl402_Antiloot_fnc_addTrapToContainerLocal
 *
 */

params [["_container", objNull, [objNull]], ["_probability", 0, [0]], ["_oneTime", true, [true]]];
TRACE_1("Add trap (local)",_this);

private _handle = [_container, "ContainerOpened", {
    params ["_container", "_unit"];
    _thisArgs params ["_probability", "_oneTime"];
    TRACE_2("ContainerOpened",_this,_thisArgs);

    if (!GVAR(activate) ||
        {!isPlayer _unit} ||
        {GVAR(excludeRemoteControlled) && {!isNull remoteControlled _unit}}
    ) exitWith {};

    if ((random 1) < _probability) then {
        [QGVAR(triggerTrap), ["container", _container, _unit]] call CBA_fnc_serverEvent;
    };

    if (_oneTime) then {
        [QGVAR(containerOpenedOnce), [_container, _unit]] call CBA_fnc_serverEvent;
    };
}, [_probability, _oneTime]] call CBA_fnc_addBISEventHandler;

_container setVariable [QGVAR(handle), _handle];

#include "script_component.hpp"

[QGVAR(lockSeat), LINKFUNC(lockSeat)] call CBA_fnc_addEventHandler;
[QGVAR(unlockSeat), LINKFUNC(unlockSeat)] call CBA_fnc_addEventHandler;

["CAManBase", "GetOutMan", {
    params ["_unit", "", "_vehicle"];

    if (local _vehicle) then {
        [QGVAR(unlockSeat), [_unit]] call CBA_fnc_localEvent;
    };
}] call CBA_fnc_addClassEventHandler;

["CAManBase", "Deleted", {
    params ["_unit"];
    TRACE_3("unit deleted",_unit,objectParent _unit,local _unit);

    (_unit getVariable [QGVAR(lockedSeat), []]) params [["_vehicle", objNull]];
    if ((!isNull _vehicle) && {local _vehicle}) then {
        [QGVAR(unlockSeat), [_unit]] call CBA_fnc_localEvent;
    };
}, true] call CBA_fnc_addClassEventHandler

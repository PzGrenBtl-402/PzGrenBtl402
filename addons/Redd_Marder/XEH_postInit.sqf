#include "script_component.hpp"

[QGVAR(lock), {(_this select 0) lock (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(setUnitTrait), {(_this select 0) lockTurret (_this select 1)}] call CBA_fnc_addEventHandler;

[QGVAR(lockSeat), LINKFUNC(lockSeat)] call CBA_fnc_addEventHandler;
[QGVAR(unlockSeat), LINKFUNC(unlockSeat)] call CBA_fnc_addEventHandler;

["CAManBase", "GetOutMan", {
    params ["_unit", "", "_vehicle"];

    if (local _vehicle) then {
        [_unit] call FUNC(unlockSeat);
    };
}] call CBA_fnc_addClassEventHandler;

["CAManBase", "Deleted", {
    params ["_unit"];
    TRACE_3("unit deleted",_unit,objectParent _unit,local _unit);

    (_unit getVariable [QGVAR(lockedSeat), []]) params [["_vehicle", objNull]];
    if ((!isNull _vehicle) && {local _vehicle}) then {
        [_unit] call FUNC(unlockSeat);
    };
}, true] call CBA_fnc_addClassEventHandler

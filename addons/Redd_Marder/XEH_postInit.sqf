#include "script_component.hpp"

[QGVAR(lock), {(_this select 0) lock (_this select 1)}] call CBA_fnc_addEventHandler;

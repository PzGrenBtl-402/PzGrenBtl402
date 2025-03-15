#include "script_component.hpp"

[QGVAR(addMagazineTurret), {(_this select 0) addMagazineTurret (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(removeMagazinesTurret), {(_this select 0) removeMagazinesTurret (_this select 1)}] call CBA_fnc_addEventHandler;

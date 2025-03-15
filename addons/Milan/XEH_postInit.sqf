#include "script_component.hpp"

[QGVAR(reload), {reload (_this select 0)}] call CBA_fnc_addEventHandler;
[QGVAR(addMagazineTurret), {(_this select 0) addMagazineTurret (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(removeMagazines), {(_this select 0) removeMagazines (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(removeMagazineTurret), {(_this select 0) removeMagazineTurret (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(removeMagazinesTurret), {(_this select 0) removeMagazinesTurret (_this select 1)}] call CBA_fnc_addEventHandler;

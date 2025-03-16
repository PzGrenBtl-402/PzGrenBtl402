#include "script_component.hpp"

["Acre_GenericClick"] call acre_sys_sounds_fnc_loadSound;

if (!hasInterface) exitWith {};

private _category = [LELSTRING(Main,category), LLSTRING(catergory)];
[_category, QGVAR(previousWorkingRadio), [LLSTRING(previousWorkingRadioKey), LLSTRING(previousWorkingRadioKey_description)], "", {
    [-1, true] call FUNC(switchWorkingRadioFast)
}, [DIK_1, [false, true, false]]] call CBA_fnc_addKeybind;

[_category, QGVAR(nextWorkingRadio), [LLSTRING(nextWorkingRadioKey), LLSTRING(nextWorkingRadioKey_description)], "", {
    [1, true] call FUNC(switchWorkingRadioFast)
}, [DIK_2, [false, true, false]]] call CBA_fnc_addKeybind;

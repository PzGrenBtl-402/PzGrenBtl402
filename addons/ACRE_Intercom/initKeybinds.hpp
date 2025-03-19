private _category = [LELSTRING(Main,category), LLSTRING(catergory)];
[
    _category,
    QGVAR(setPreviousWorkingRadio),
    [LLSTRING(previousWorkingRadioKey), LLSTRING(previousWorkingRadioKey_description)],
    {
        [-1, true] call FUNC(switchWorkingRadioFast)
    },
    "",
    [DIK_Q, [false, true, false]]
] call CBA_fnc_addKeybind;

[
    _category,
    QGVAR(setNextWorkingRadio),
    [LLSTRING(nextWorkingRadioKey), LLSTRING(nextWorkingRadioKey_description)],
    {
        [1, true] call FUNC(switchWorkingRadioFast)
    },
    "",
    [DIK_E, [false, true, false]]
] call CBA_fnc_addKeybind;

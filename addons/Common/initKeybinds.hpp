[
    LELSTRING(Main,category),
    QGVAR(toggleHEAP),
    [LLSTRING(toggleHEAP), LLSTRING(toggleHEAP_description)],
    {
        call FUNC(toggleHEAP)
    },
    "",
    [DIK_5, [false, false, false]]
] call CBA_fnc_addKeybind;

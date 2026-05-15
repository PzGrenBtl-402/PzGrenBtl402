[
    QGVAR(activate),
    "CHECKBOX",
    [LLSTRING(activate), LLSTRING(activate_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    true,
    1
] call CBA_fnc_addSetting;

[
    QGVAR(excludeRemoteControlled),
    "CHECKBOX",
    [LLSTRING(excludeRemoteControlled), LLSTRING(excludeRemoteControlled_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    true,
    1
] call CBA_fnc_addSetting;

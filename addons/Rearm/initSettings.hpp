#define MIN_DURATION 1
#define MAX_DURATION 120
#define TRAILING_DECIMALS 0
#define IS_SERVER_SETTINGS 1

[
    QGVAR(rearmMK20Duration),
    "SLIDER",
    [LLSTRING(settingsMk20Duration), LLSTRING(settingsMk20Duration_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, 15, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

[
    QGVAR(rearmSmokeDuration),
    "SLIDER",
    [LLSTRING(settingsSmokeDuration), LLSTRING(settingsSmokeDuration_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, 5, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

[
    QGVAR(rearmMGDuration),
    "SLIDER",
    [LLSTRING(settingsMGDuration), LLSTRING(settingsMGDuration_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, 15, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

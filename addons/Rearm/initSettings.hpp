#define MIN_DURATION 1
#define MAX_DURATION 120
#define DEFAULT_DURATION 15
#define TRAILING_DECIMALS 0
#define IS_SERVER_SETTINGS 1

[
    QGVAR(rearmMK20Duration),
    "SLIDER",
    [LLSTRING(settingsMk20Duration), LLSTRING(settingsMk20Duration_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, DEFAULT_DURATION, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

[
    QGVAR(rearmSmoke3Duration),
    "SLIDER",
    [LLSTRING(settingsSmoke3Duration), LLSTRING(settingsSmoke3Duration_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, DEFAULT_DURATION, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

[
    QGVAR(rearmMG3Duration),
    "SLIDER",
    [LLSTRING(settingsMG3Duration), LLSTRING(settingsMG3Duration_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, DEFAULT_DURATION, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

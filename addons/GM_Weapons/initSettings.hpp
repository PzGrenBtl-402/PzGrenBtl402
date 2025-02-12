#define MIN_TIME 0
#define MAX_TIME 60
#define DEFAULT_TIME 2
#define TRAILING_DECIMALS 0
#define IS_SERVER_SETTINGS 1

[
    QGVAR(grenadeSwapTime),
    "SLIDER",
    [LLSTRING(GrenadeSwapTime), LLSTRING(GrenadeSwapTime_Tooltip)],
    [LELSTRING(main,category), LLSTRING(FragCategory)],
    [MIN_TIME, MAX_TIME, DEFAULT_TIME, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

#define MIN_DURATION 1
#define MAX_DURATION 120
#define TRAILING_DECIMALS 0
#define IS_SERVER_SETTINGS 1
#define MG_MOUNT_TIME 5
#define DISASSEMBLE_TIME 10

[
    QGVAR(lafetteMountTime),
    "SLIDER",
    [LLSTRING(settingsLafetteMountTime), LLSTRING(settingsLafetteMountTime_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, MG_MOUNT_TIME, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

[
    QGVAR(lafetteDisassembleTime),
    "SLIDER",
    [LLSTRING(settingsLafetteDisassembleTime), LLSTRING(settingsLafetteDisassembleTime_tooltip)],
    [LELSTRING(main,category), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, DISASSEMBLE_TIME, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

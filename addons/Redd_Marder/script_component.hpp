#define COMPONENT Redd_Marder
#define COMPONENT_BEAUTIFIED Redd Marder
#include "\z\PzGrenBtl402\addons\Main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_REDD_MARDER
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_REDD_MARDER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_REDD_MARDER
#endif

#include "\z\PzGrenBtl402\addons\Main\script_macros.hpp"

#define MILAN_TURRET_PATH [1]
#define MILAN_MAGAZINE "Redd_Milan_Mag"

#define GUNNER_TURRET [0]
#define COMMANDER_TURRET_PATH [0, 0]
#define COMMANDER_HIGHER_TURRET_PATH [2]
#define DRIVER_TURRET_PATH [-1]
#define HATCH_LEFT_TURRET_PATH [0, 1]
#define HATCH_RIGHT_TURRET_PATH [0, 2]
#define HATCH_MIDDLE_TURRET_PATH [0, 3]

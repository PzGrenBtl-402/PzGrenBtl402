#define COMPONENT Redd_Wiesel_TOW
#define COMPONENT_BEAUTIFIED Redd Wiesel TOW
#include "\z\PzGrenBtl402\addons\Main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_REDD_WIESEL_TOW
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_REDD_WIESEL_TOW
    #define DEBUG_SETTINGS DEBUG_SETTINGS_REDD_WIESEL_TOW
#endif

#include "\z\PzGrenBtl402\addons\Main\script_macros.hpp"

#define TOW_TURRET_PATH [0]
#define COMMANDER_TURRET_PATH [0, 0]
#define LOADER_TURRET_PATH [0, 1]
#define LOADER_MG3_TURRET_PATH [1]
#define COMMANDER_HIGHER_TURRET_PATH [2]
#define LOADER_HIGHER_TURRET_PATH [3]

#define TOW_MAGAZINE "Redd_TOW_Mag"

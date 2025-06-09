#define COMPONENT GM_Marder
#define COMPONENT_BEAUTIFIED GM Marder
#include "\z\PzGrenBtl402\addons\Main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_GM_MARDER
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_GM_MARDER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_GM_MARDER
#endif

#include "\z\PzGrenBtl402\addons\Main\script_macros.hpp"

#define GUNNER_TURRET [0]
#define MILAN_TURRET_PATH [0, 1]
#define MILAN_MAGAZINE "gm_1Rnd_milan_heat_dm92"

#define HATCH_LEFT_FRONT_TURRET_PATH [2]
#define HATCH_RIGHT_FRONT_TURRET_PATH [3]

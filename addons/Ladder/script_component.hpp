#define COMPONENT Ladder
#define COMPONENT_BEAUTIFIED Ladder
#include "\z\PzGrenBtl402\addons\Main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_LADDER
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_LADDER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_LADDER
#endif

#include "\z\PzGrenBtl402\addons\Main\script_macros.hpp"

#define MAX_TILE 20
#define MIN_STEP 1
#define MIN_ALLOWED_STEP 3
#define MAX_STEP 11

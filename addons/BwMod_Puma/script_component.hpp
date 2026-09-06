#define COMPONENT BwMod_Puma
#define COMPONENT_BEAUTIFIED BwMod Puma
#include "\z\PzGrenBtl402\addons\Main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_BWMOD_PUMA
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_BWMOD_PUMA
    #define DEBUG_SETTINGS DEBUG_SETTINGS_BWMOD_PUMA
#endif

#include "\z\PzGrenBtl402\addons\Main\script_macros.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

#define MAX_NUM_CAMERAS 5

#define MUSS_MODE_JAMMING 0
#define MUSS_MODE_TURRET_ROTATION 1
#define MUSS_MODE_SMOKE 2
#define DEFAULT_MUSS_MODE MUSS_MODE_SMOKE

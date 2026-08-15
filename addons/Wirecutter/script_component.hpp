#define COMPONENT Wirecutter
#define COMPONENT_BEAUTIFIED Wirecutter
#include "\z\PzGrenBtl402\addons\Main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_WIRECUTTER
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WIRECUTTER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WIRECUTTER
#endif

#include "\z\PzGrenBtl402\addons\Main\script_macros.hpp"

#define SOUND_CLIP_TIME_SPACING 1.5
#define CUT_TIME_DEFAULT 11
#define CUT_TIME_ENGINEER 7.5

#define COMPONENT SmokeLauncher
#define COMPONENT_BEAUTIFIED Smoke Launcher
#include "\z\PzGrenBtl402\addons\Main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_SMOKELAUNCHER
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_SMOKELAUNCHER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_SMOKELAUNCHER
#endif

#include "\z\PzGrenBtl402\addons\Main\script_macros.hpp"

#define NO_MARDER 0
#define REDD_MARDER 1
#define GM_MARDER 2

#define IDC_MODECONTROLGROUP 1000
#define IDC_AMMO 1001

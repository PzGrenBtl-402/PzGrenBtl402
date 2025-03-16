#define COMPONENT ACRE_Intercom
#define COMPONENT_BEAUTIFIED ACRE Intercom
#include "\z\PzGrenBtl402\addons\Main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_ACRE_INTERCOM
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ACRE_INTERCOM
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ACRE_INTERCOM
#endif

#include "\z\PzGrenBtl402\addons\Main\script_macros.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

#define VIC3FFCS_WORK_KNOB_POSITIONS     6
#define VIC3FFCS_MONITOR_KNOB_POSITIONS  7

#define INTERCOM_STATIONSTATUS_WORKKNOB           "workKnob"
#define INTERCOM_STATIONSTATUS_MONITORKNOB        "monitorKnob"
#define INTERCOM_STATIONSTATUS_WIREDRACKS         "wiredRacks"
#define INTERCOM_STATIONSTATUS_CONNECTION         "connection"

#define INTERCOM_DISCONNECTED   0

#define RACK_NO_MONITOR 0
#define RACK_RX_ONLY    1
#define RACK_TX_ONLY    2
#define RACK_RX_AND_TX  3

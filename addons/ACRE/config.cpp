#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PzGrenBtl402_Main",
            "acre_sys_attenuate",
            "acre_sys_intercom",
            "acre_sys_rack"
        };
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007", "Mishkar"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgSoundEffects.hpp"

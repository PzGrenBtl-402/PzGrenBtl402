#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "PzGrenBtl402_GM_Marder"};
        author = ECSTRING(Main, authors);
        authors[] = {"Timi007"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

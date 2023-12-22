#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PzGrenBtl402_Main",
            "PzGrenBtl402_Redd_Main",
            "PzGrenBtl402_Milan",
            "Redd_Milan_Static",
            "Redd_Bags"
        };
        author = ECSTRING(Main,authors);
        authors[] = {"Lemonberries", "Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PzGrenBtl402_Main",
            "PzGrenBtl402_Common",
            "PzGrenBtl402_ACRE",
            "PzGrenBtl402_Redd_Main",
            "redd_tank_wiesel_1a4_mk20"
        };
        author = ECSTRING(Main,authors);
        authors[] = {"Lemonberries", "Mishkar", "Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"

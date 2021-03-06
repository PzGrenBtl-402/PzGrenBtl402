#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "PzGrenBtl402_ACRE", "PzGrenBtl402_SmokeLauncher", "PzGrenBtl402_GM_Milan", "gm_vehicles_land_tracked_marder1", "Redd_Bags"};
        author = ECSTRING(Main, authors);
        authors[] = {""};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"

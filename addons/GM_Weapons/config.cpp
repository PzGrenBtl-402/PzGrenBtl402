#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PzGrenBtl402_Main",
            "gm_weapons_items",
            "gm_weapons_throw"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(Main,authors);
        authors[] = {"Lemonberries", "Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"

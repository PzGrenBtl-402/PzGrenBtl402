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
            "PzGrenBtl402_ACRE",
            "PzGrenBtl402_SmokeLauncher",
            "PzGrenBtl402_MK20",
            "redd_marder_1a5",
            "Redd_Bags"
        };
        author = ECSTRING(Main, authors);
        authors[] = {"Lemonberries", "Mishkar", "Timi007"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

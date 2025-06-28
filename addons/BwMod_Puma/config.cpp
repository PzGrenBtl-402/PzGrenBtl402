#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PzGrenBtl402_Main",
            "PzGrenBtl402_ACRE",
            "PzGrenBtl402_SmokeLauncher",
            "PzGrenBtl402_BwMod_Weapons",
            "bwa3_puma"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007", "Mishkar"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "RscInGameUI.hpp"

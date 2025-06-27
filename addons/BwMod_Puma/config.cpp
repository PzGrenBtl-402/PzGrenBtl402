#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "PzGrenBtl402_ACRE", "bwa3_puma"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007", "Mishkar"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "RscInGameUI.hpp"

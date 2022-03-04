#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "ace_rearm"};
        author = ECSTRING(Main, authors);
        authors[] = {"Timi007"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"

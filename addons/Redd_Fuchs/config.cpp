#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "PzGrenBtl402_ACRE", "redd_tank_fuchs_1a4"};
        author = ECSTRING(Main, authors);
        authors[] = {"Mishkar"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"

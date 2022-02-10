#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "bwa3_headgear"};
        author = ECSTRING(Main, authors);
        authors[] = {"Mishkar"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"

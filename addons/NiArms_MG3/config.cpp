#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "hlcweapons_MG3s"};
        author = ECSTRING(Main, authors);
        authors[] = {"Mishkar"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgMagazines.hpp"

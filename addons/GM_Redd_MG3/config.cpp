#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PzGrenBtl402_Main",
            "PzGrenBtl402_Redd_MG3",
            "ace_csw",
            "gm_weapons_machineguns_mg3"
        };
        author = ECSTRING(Main, authors);
        authors[] = {"Zumi", "Timi007"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgMagazineGroups.hpp"
#include "CfgWeapons.hpp"

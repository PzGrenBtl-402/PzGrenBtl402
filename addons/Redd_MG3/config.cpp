#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "PzGrenBtl402_Redd_Main", "rnt_mg3_static", "Redd_Bags", "ace_csw"};
        author = ECSTRING(Main, authors);
        authors[] = {"Zumi", "Timi007"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgMagazineGroups.hpp"
#include "CfgWeapons.hpp"

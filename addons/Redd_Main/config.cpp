#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "Redd_Vehicles_Main"};
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007", "Lemonberries"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgRscInGameUI.hpp"
#include "CfgWeapons.hpp"
#include "CfgAnimationSourceSounds.hpp"
#include "CfgMagazines.hpp"

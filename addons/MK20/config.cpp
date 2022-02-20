#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(he_ammo_item),
            QGVAR(ap_ammo_item)
        };
        weapons[] = {
            QGVAR(he_ammo),
            QGVAR(ap_ammo)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main"};
        author = ECSTRING(Main, authors);
        authors[] = {"Timi007"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PzGrenBtl402_Main",
            "A3_Boat_F_Boat_Transport_01",
            "A3_Boat_F_Exp_Boat_Transport_01",
            "A3_Boat_F_Gamma_Boat_Transport_01",
            "A3_Boat_F_Beta_Boat_Transport_01"
        };
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"

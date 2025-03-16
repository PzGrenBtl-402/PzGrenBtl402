#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PzGrenBtl402_Main",
            "PzGrenBtl402_Redd_Main",
            "jsrs_soundmod_2025_Beta",
            "redd_marder_1a5",
            "Redd_Tank_Gepard_1A2",
            "Redd_Tank_Wiesel_1A4_MK20",
            "Redd_Tank_Wiesel_1A2_TOW",
            "redd_tank_fuchs_1a4",
            "rnt_sppz_2a2_luchs",
            "Redd_Tank_LKW_leicht_gl",
            "rnt_lkw_10t_mil_gl_kat_i",
            "rnt_lkw_7t_mil_gl_kat_i",
            "rnt_lkw_5t_mil_gl_kat_i"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PzGrenBtl402_Main",
            "CUP_Buildings_Config",
            "CUP_Ind_Workshop01",
            "CUP_Ind_Garage01",
            "CUP_Ind_Vysypka",
            "CUP_A_GeneralStore_01",
            "CUP_CAStructuresHouse_A_Office01",
            "CUP_CAStructuresHouse_A_Office02",
            "CUP_CABuildings2_A_Pub",
            "CUP_CAStructuresHouse_HouseV2",
            "CUP_CAStructuresHouse_HouseV",
            "CUP_CAStructuresHouse_HouseBT",
            "CUP_CAHouseBlock_A",
            "CUP_CAHouseBlock_B",
            "CUP_CAHouseBlock_C",
            "CUP_CAHouseBlock_D",
            "CUP_CAStructures_Mil",
            "CUP_CAStructuresHouse_a_stationhouse",
            "CUP_Rail_House_01",
            "CUP_CAStructures_Nav",
            "CUP_CAStructures_E_HouseA_a_stationhouse",
            "CUP_CAStructures_E_HouseC",
            "CUP_CAStructures_E_HouseK",
            "CUP_CAStructures_E_HouseL",
            "CUP_CAStructures_E_Mil",
            "CUP_CAStructures_E_HouseA_A_Minaret",
            "CUP_CAStructures_E_HouseA_A_Mosque_big",
            "CUP_CAStructures_E_HouseA_A_Mosque_small",
            "CUP_CAStructures_E_HouseA_A_Villa"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"

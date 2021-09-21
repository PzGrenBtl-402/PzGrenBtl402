class CfgPatches {
    class GM_Redd_MG3_Static_402 {
        units[] = {
          "PzGrenBtl402_Feldlafette"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"rnt_mg3_static", "Redd_Main_402", "cba_main","ace_main", "ace_csw", "gm_weapons_machineguns_mg3"};
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"
#include "CfgMagazineGroups.hpp"

class Extended_Init_EventHandlers {
    class rnt_mg3_static_tripod {
        class mg3_init_eh {
            init = "[_this] call PzGrenBtl402_fnc_reddStaticMG3_init;";
        };
    };
};

class CfgMagazineWells {
  	class mg3_762x51	{
    		MG_Magazines[] = {
      			"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn",
            "gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn",
            "gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn",
            "BWA3_120Rnd_762x51_soft",
            "BWA3_120Rnd_762x51_Tracer_soft",
            "BWA3_120Rnd_762x51",
            "BWA3_120Rnd_762x51_Tracer",
            "150Rnd_762x51_Box",
            "150Rnd_762x51_Box_Tracer",
            "hlc_100Rnd_762x51_B_MG3",
            "hlc_100Rnd_762x51_mdim_MG3",
            "hlc_100Rnd_762x51_M_MG3",
            "hlc_100Rnd_762x51_B_M60E4",
            "hlc_100Rnd_762x51_Mdim_M60E4",
            "hlc_100Rnd_762x51_M_M60E4",
            "hlc_100Rnd_762x51_Barrier_M60E4",
            "hlc_200Rnd_762x51_B_M60E4",
            "hlc_200Rnd_762x51_Mdim_M60E4",
            "hlc_200Rnd_762x51_Barrier_M60E4",
            "hlc_200Rnd_762x51_M_M60E4",
            "hlc_250Rnd_762x51_B_MG3",
            "hlc_250Rnd_762x51_mdim_MG3",
            "hlc_250Rnd_762x51_M_MG3",
            "hlc_50Rnd_762x51_B_MG3",
            "hlc_50Rnd_762x51_mdim_MG3",
            "hlc_50Rnd_762x51_M_MG3",
            "hlc_100Rnd_762x51_Barrier_MG3",
            "hlc_250Rnd_762x51_Barrier_MG3",
            "hlc_50Rnd_762x51_Barrier_MG3",
            "hlc_100Rnd_762x51_T_MG3",
            "hlc_100Rnd_762x51_T_M60E4",
            "hlc_200Rnd_762x51_T_M60E4",
            "hlc_250Rnd_762x51_T_MG3",
            "hlc_50Rnd_762x51_T_MG3"
    		};
  	};
};

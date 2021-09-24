class CfgWeapons {
    class Redd_MG3;
    class Redd_MG3_Static: Redd_MG3 {
        magazines[] = {
            "Redd_Mg3_Belt_100",

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
        magazineWell[] = {mg3_762x51};
        magazineReloadTime = 0.1;
        autoReload = 1;
        ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 0.75;
		ace_overheating_mrbs = 2000;
    };
};

class CfgWeapons {
    class Redd_MG3;
    class Redd_MG3_Static: Redd_MG3 {
        magazineWell[] += {GVAR(mg3_762x51)};
        magazines[] += { // ACE CSW needs all compatible magazines in this array for reloading
            "hlc_50Rnd_762x51_B_MG3",
            "hlc_50Rnd_762x51_mdim_MG3",
            "hlc_50Rnd_762x51_M_MG3",
            "hlc_50Rnd_762x51_T_MG3",
            "hlc_50Rnd_762x51_Barrier_MG3",

            "hlc_100Rnd_762x51_B_MG3",
            "hlc_100Rnd_762x51_mdim_MG3",
            "hlc_100Rnd_762x51_M_MG3",
            "hlc_100Rnd_762x51_T_MG3",
            "hlc_100Rnd_762x51_Barrier_MG3",

            "hlc_100Rnd_762x51_B_M60E4",
            "hlc_100Rnd_762x51_Mdim_M60E4",
            "hlc_100Rnd_762x51_M_M60E4",
            "hlc_100Rnd_762x51_T_M60E4",
            "hlc_100Rnd_762x51_Barrier_M60E4",

            "hlc_200Rnd_762x51_B_M60E4",
            "hlc_200Rnd_762x51_Mdim_M60E4",
            "hlc_200Rnd_762x51_M_M60E4",
            "hlc_200Rnd_762x51_T_M60E4",
            "hlc_200Rnd_762x51_Barrier_M60E4",

            "hlc_250Rnd_762x51_B_MG3",
            "hlc_250Rnd_762x51_mdim_MG3",
            "hlc_250Rnd_762x51_M_MG3",
            "hlc_250Rnd_762x51_T_MG3",
            "hlc_250Rnd_762x51_Barrier_MG3"
        };
    };
};

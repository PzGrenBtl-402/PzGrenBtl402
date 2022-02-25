class CfgWeapons {
    class Redd_MG3;
    class Redd_MG3_Static: Redd_MG3 {
        magazineWell[] += {QGVAR(mg3_762x51)};
        magazines[] += { // ACE CSW needs all compatible magazines in this array for reloading
            "gm_120Rnd_762x51mm_B_T_DM21_mg3_grn",
            "gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn",
            "gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn"
        };
    };
};

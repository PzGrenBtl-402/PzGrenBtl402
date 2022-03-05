class CfgWeapons
{
    class SmokeLauncher;

    class GVAR(SmokeLauncher): SmokeLauncher
    {
        magazines[] += {QGVAR(1Rnd_76mm_RP_dm35)};
        showToPlayer = 0;
    };


/*
    class gm_20mm_rh202_base;

    class gm_20mm_rh202: gm_20mm_rh202_base
    {
        class gm_20mm_rh202_he_muzzle;
        class gm_20mm_rh202_ap_muzzle;
    };

    class gm_20mm_rh202: gm_20mm_rh202_base
    {
        autoReload = 1;
        magazineReloadTime = 0.1;

        class gm_20mm_rh202_he_muzzle: gm_20mm_rh202_he_muzzle
        {
            autoReload = 1;
            magazineReloadTime = 0.1;
        };

        class gm_20mm_rh202_ap_muzzle: gm_20mm_rh202_ap_muzzle
        {
            autoReload = 1;
            magazineReloadTime = 0.1;
        };
    };
*/
};

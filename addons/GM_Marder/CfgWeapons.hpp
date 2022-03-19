class gm_SemiAuto;

class CfgWeapons
{
    class SmokeLauncher;
    class GVAR(SmokeLauncher): SmokeLauncher
    {
        magazines[] += {QGVAR(1Rnd_76mm_RP_dm35)};
        showToPlayer = 0;
    };

    class gm_20mm_rh202_base;
    class gm_20mm_rh202: gm_20mm_rh202_base
    {
        class gm_20mm_rh202_he_muzzle;
        class gm_20mm_rh202_ap_muzzle;
    };

    class GVAR(20mm_rh202): gm_20mm_rh202
    {
        class gm_20mm_rh202_he_muzzle: gm_20mm_rh202_he_muzzle
        {
            autoReload = 1;
            magazineReloadTime = 0.1;

            modes[]=
            {
                "SemiAuto",
                "Fullauto",
                "ai_FullAuto_close",
                "ai_FullAuto_short",
                "ai_FullAuto_medium",
                "ai_FullAuto_far"
            };

            class SemiAuto: gm_SemiAuto
            {
                sounds[] = {"StandardSound"};
                class StandardSound
                {
                    soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet", "Autocannon30mmBody_tail_SoundSet"};
                };
                reloadTime = 0.059999999;
                dispersion = 0.0024999999;
                soundContinuous = 0;
                aiRateOfFire = 0.1;
                aiRateOfFireDistance = 25;
                minRange = 0;
                minRangeProbab = 0.0099999998;
                midRange = 25;
                midRangeProbab = 0.0099999998;
                maxRange = 50;
                maxRangeProbab = 0.0099999998;
            };
        };
        class gm_20mm_rh202_ap_muzzle: gm_20mm_rh202_ap_muzzle
        {
            autoReload = 1;
            magazineReloadTime = 0.1;

            modes[]=
            {
                "SemiAuto",
                "Fullauto",
                "ai_FullAuto_close",
                "ai_FullAuto_short",
                "ai_FullAuto_medium",
                "ai_FullAuto_far"
            };

            class SemiAuto: gm_SemiAuto
            {
                sounds[] = {"StandardSound"};
                class StandardSound
                {
                    soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet", "Autocannon30mmBody_tail_SoundSet"};
                };
                reloadTime = 0.059999999;
                dispersion = 0.0024999999;
                soundContinuous = 0;
                aiRateOfFire = 0.1;
                aiRateOfFireDistance = 25;
                minRange = 0;
                minRangeProbab = 0.0099999998;
                midRange = 25;
                midRangeProbab = 0.0099999998;
                maxRange = 50;
                maxRangeProbab = 0.0099999998;
            };
        };
    };

    class gm_mg3_coax;
    class GVAR(mg3_coax): gm_mg3_coax
    {
        autoReload = 1;
        magazineReloadTime = 0.1;
    };
};

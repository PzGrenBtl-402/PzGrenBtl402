#define MK20_PROPERTIES \
    displayName = "MK20 Rh 202"; \
    multiplier = 1; \
    magazineReloadTime = 0.1; \
    ballisticsComputer = 2; /* Manual zeroing */ \
    autoReload = 1; \
    autoFire = 0; \
    soundContinuous = 0; \
    modes[] = {"Single","FullAuto","close","short","medium","far"}; \
    soundBurst = 0; \
    shotFromTurret = 0; \
    class FullAuto: Mode_FullAuto { \
        autoFire = 1; \
        sounds[] = {"StandardSound"}; \
        reloadTime = 60 / 900; \
        dispersion = 0.0008; \
        aiBurstTerminable = 1; \
        aiRateOfFire = 0.5; \
        aiRateOfFireDistance = 50; \
        minRange = 0; \
        minRangeProbab = 0.05; \
        midRange = 0; \
        midRangeProbab = 0.7; \
        maxRange = 0; \
        maxRangeProbab = 0.1; \
        showToPlayer = 1; \
        class StandardSound { \
            soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"}; \
        }; \
    }; \
    class Single: Mode_SemiAuto { \
        autoFire = 0; \
        sounds[] = {"StandardSound"}; \
        reloadTime = 60 / 900; \
        dispersion = 0.0008; \
        aiBurstTerminable = 1; \
        aiRateOfFire = 0.5; \
        aiRateOfFireDistance = 50; \
        minRange = 0; \
        minRangeProbab = 0.05; \
        midRange = 0; \
        midRangeProbab = 0.7; \
        maxRange = 0; \
        maxRangeProbab = 0.1; \
        showToPlayer = 1; \
        class StandardSound { \
            soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"}; \
        }; \
    }; \
    class close: FullAuto { \
        burst = 10; \
        aiBurstTerminable = 1; \
        aiRateOfFire = 0.3; \
        aiRateOfFireDistance = 500; \
        minRange = 0; \
        minRangeProbab = 0.05; \
        midRange = 250; \
        midRangeProbab = 0.7; \
        maxRange = 500; \
        maxRangeProbab = 0.1; \
        showToPlayer = 0; \
    }; \
    class short: close { \
        burst = 7; \
        aiBurstTerminable = 1; \
        aiRateOfFire = 0.5; \
        aiRateOfFireDistance = 1000; \
        minRange = 500; \
        minRangeProbab = 0.05; \
        midRange = 750; \
        midRangeProbab = 0.7; \
        maxRange = 1000; \
        maxRangeProbab = 0.1; \
    }; \
    class medium: close { \
        burst = 4; \
        aiBurstTerminable = 1; \
        aiRateOfFire = 1; \
        aiRateOfFireDistance = 1500; \
        minRange = 100; \
        minRangeProbab = 0.05; \
        midRange = 1200; \
        midRangeProbab = 0.7; \
        maxRange = 1500; \
        maxRangeProbab = 0.1; \
    }; \
    class far: close { \
        burst = 1; \
        aiBurstTerminable = 1; \
        aiRateOfFire = 1; \
        aiRateOfFireDistance = 2000; \
        minRange = 1500; \
        minRangeProbab = 0.05; \
        midRange = 1750; \
        midRangeProbab = 0.4; \
        maxRange = 2000; \
        maxRangeProbab = 0.01; \
    }


class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class missiles_titan;
    class Redd_Milan: missiles_titan {
        magazineReloadTime = 0.1; // Keep reload time short in order to bypass the getin and getout bug
    };

    class Redd_MG3;
    class GVAR(mg3): Redd_MG3 {
        magazineReloadTime = 0.1;
    };

    class autocannon_35mm;
    class Redd_MK20: autocannon_35mm {
        displayName = "MK20 Rh 202";
        muzzles[] = {
            "AP",
            "HE"
        };
        magazines[] = {};
        ballisticsComputer = 2; // Manual zeroing

        class AP: autocannon_35mm {
            MK20_PROPERTIES;

            magazines[] = {
                "Redd_MK20_AP_Mag",
                "Redd_MK20_AP_Mag100"
            };
        };

        class HE: autocannon_35mm {
            MK20_PROPERTIES;

            magazines[] = {
                "Redd_MK20_HE_Mag",
                "Redd_MK20_HE_Mag275"
            };
        };
    };

    class Redd_MK20FL: Redd_MK20 {
        class AP: autocannon_35mm {
            MK20_PROPERTIES;

            magazines[] = {
                "Redd_MK20_AP_Mag120"
            };
        };

        class HE: autocannon_35mm {
            MK20_PROPERTIES;

            magazines[] = {
                "Redd_MK20_HE_Mag200"
            };
        };
    };
};

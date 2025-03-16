class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class missiles_titan;
    class Redd_Milan: missiles_titan {
        magazineReloadTime = 0.1; //Armanachladezeit möglichst gering, um Ein-, Aussteigebug zu umgehen
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

        class AP: autocannon_35mm {
            displayName = "MK20 Rh 202";
            magazines[] = {
                "Redd_MK20_AP_Mag",
                "Redd_MK20_AP_Mag100"
            };
            magazineReloadTime = 0.1;
            modes[] = {"Single","FullAuto","close","short","medium","far"};

            class FullAuto: Mode_FullAuto {
                autoFire = 1;
                sounds[] = {"StandardSound"};
                reloadTime = 60 / 900;
                dispersion = 0.0008;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 0;
                midRangeProbab = 0.7;
                maxRange = 0;
                maxRangeProbab = 0.1;
                showToPlayer = 1;

                class StandardSound {
                    soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"};
                };
            };

            class Single: Mode_SemiAuto {
                autoFire = 0;
                sounds[] = {"StandardSound"};
                reloadTime = 60 / 900;
                dispersion = 0.0008;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 0;
                midRangeProbab = 0.7;
                maxRange = 0;
                maxRangeProbab = 0.1;
                showToPlayer = 1;

                class StandardSound {
                    soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"};
                };
            };

            class close: FullAuto {
                burst = 10;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.3;
                aiRateOfFireDistance = 500;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 250;
                midRangeProbab = 0.7;
                maxRange = 500;
                maxRangeProbab = 0.1;
                showToPlayer = 0;
            };

            class short: close {
                burst = 7;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 1000;
                minRange = 500;
                minRangeProbab = 0.05;
                midRange = 750;
                midRangeProbab = 0.7;
                maxRange = 1000;
                maxRangeProbab = 0.1;
            };

            class medium: close {
                burst = 4;
                aiBurstTerminable = 1;
                aiRateOfFire = 1;
                aiRateOfFireDistance = 1500;
                minRange = 100;
                minRangeProbab = 0.05;
                midRange = 1200;
                midRangeProbab = 0.7;
                maxRange = 1500;
                maxRangeProbab = 0.1;
            };

            class far: close {
                burst = 1;
                aiBurstTerminable = 1;
                aiRateOfFire = 1;
                aiRateOfFireDistance = 2000;
                minRange = 1500;
                minRangeProbab = 0.05;
                midRange = 1750;
                midRangeProbab = 0.4;
                maxRange = 2000;
                maxRangeProbab = 0.01;
            };
        };

        class HE: autocannon_35mm {
            displayName = "MK20 Rh 202";
            magazines[] = {
                "Redd_MK20_HE_Mag",
                "Redd_MK20_HE_Mag275"
            };
            magazineReloadTime = 0.1;
            modes[] = {"Single","FullAuto","close","short","medium","far"};

            class FullAuto: Mode_FullAuto {
                autoFire = 1;
                sounds[] = {"StandardSound"};
                reloadTime = 60 / 900;
                dispersion = 0.0008;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 0;
                midRangeProbab = 0.7;
                maxRange = 0;
                maxRangeProbab = 0.1;
                showToPlayer = 1;

                class StandardSound {
                    soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"};
                };
            };

            class Single: Mode_SemiAuto {
                autoFire = 0;
                sounds[] = {"StandardSound"};
                reloadTime = 60 / 900;
                dispersion = 0.0008;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 0;
                midRangeProbab = 0.7;
                maxRange = 0;
                maxRangeProbab = 0.1;
                showToPlayer = 1;

                class StandardSound {
                    soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"};
                };
            };

            class close: FullAuto {
                burst = 10;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.3;
                aiRateOfFireDistance = 500;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 250;
                midRangeProbab = 0.7;
                maxRange = 500;
                maxRangeProbab = 0.1;
                showToPlayer = 0;
            };

            class short: close {
                burst = 7;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 1000;
                minRange = 500;
                minRangeProbab = 0.05;
                midRange = 750;
                midRangeProbab = 0.7;
                maxRange = 1000;
                maxRangeProbab = 0.1;
            };

            class medium: close {
                burst = 4;
                aiBurstTerminable = 1;
                aiRateOfFire = 1;
                aiRateOfFireDistance = 1500;
                minRange = 100;
                minRangeProbab = 0.05;
                midRange = 1200;
                midRangeProbab = 0.7;
                maxRange = 1500;
                maxRangeProbab = 0.1;
            };

            class far: close {
                burst = 1;
                aiBurstTerminable = 1;
                aiRateOfFire = 1;
                aiRateOfFireDistance = 2000;
                minRange = 1500;
                minRangeProbab = 0.05;
                midRange = 1750;
                midRangeProbab = 0.4;
                maxRange = 2000;
                maxRangeProbab = 0.01;
            };
        };
    };

    class Redd_MK20FL: Redd_MK20 {
        class AP: autocannon_35mm {
            displayName = "MK20 Rh 202";
            magazines[] = {
                "Redd_MK20_AP_Mag120"
            };
            magazineReloadTime = 0.1;
            modes[] = {"Single","FullAuto","close","short","medium","far"};

            class FullAuto: Mode_FullAuto {
                autoFire = 1;
                sounds[] = {"StandardSound"};
                reloadTime = 60 / 900;
                dispersion = 0.0008;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 0;
                midRangeProbab = 0.7;
                maxRange = 0;
                maxRangeProbab = 0.1;
                showToPlayer = 1;

                class StandardSound {
                    soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"};
                };
            };

            class Single: Mode_SemiAuto {
                autoFire = 0;
                sounds[] = {"StandardSound"};
                reloadTime = 60 / 900;
                dispersion = 0.0008;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 0;
                midRangeProbab = 0.7;
                maxRange = 0;
                maxRangeProbab = 0.1;
                showToPlayer = 1;

                class StandardSound {
                    soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"};
                };
            };

            class close: FullAuto {
                burst = 10;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.3;
                aiRateOfFireDistance = 500;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 250;
                midRangeProbab = 0.7;
                maxRange = 500;
                maxRangeProbab = 0.1;
                showToPlayer = 0;
            };

            class short: close {
                burst = 7;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 1000;
                minRange = 500;
                minRangeProbab = 0.05;
                midRange = 750;
                midRangeProbab = 0.7;
                maxRange = 1000;
                maxRangeProbab = 0.1;
            };

            class medium: close {
                burst = 4;
                aiBurstTerminable = 1;
                aiRateOfFire = 1;
                aiRateOfFireDistance = 1500;
                minRange = 100;
                minRangeProbab = 0.05;
                midRange = 1200;
                midRangeProbab = 0.7;
                maxRange = 1500;
                maxRangeProbab = 0.1;
            };

            class far: close {
                burst = 1;
                aiBurstTerminable = 1;
                aiRateOfFire = 1;
                aiRateOfFireDistance = 2000;
                minRange = 1500;
                minRangeProbab = 0.05;
                midRange = 1750;
                midRangeProbab = 0.4;
                maxRange = 2000;
                maxRangeProbab = 0.01;
            };
        };

        class HE: autocannon_35mm {
            displayName = "MK20 Rh 202";
            magazines[] = {
                "Redd_MK20_HE_Mag200"
            };
            magazineReloadTime = 0.1;
            modes[] = {"Single","FullAuto","close","short","medium","far"};

            class FullAuto: Mode_FullAuto {
                autoFire = 1;
                sounds[] = {"StandardSound"};
                reloadTime = 60 / 900;
                dispersion = 0.0008;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 0;
                midRangeProbab = 0.7;
                maxRange = 0;
                maxRangeProbab = 0.1;
                showToPlayer = 1;

                class StandardSound {
                    soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"};
                };
            };

            class Single: Mode_SemiAuto {
                autoFire = 0;
                sounds[] = {"StandardSound"};
                reloadTime = 60 / 900;
                dispersion = 0.0008;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 50;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 0;
                midRangeProbab = 0.7;
                maxRange = 0;
                maxRangeProbab = 0.1;
                showToPlayer = 1;

                class StandardSound {
                    soundsetshot[] = {"Redd_Mk20_Shot_SoundSet", "Redd_Mk20_Tail_SoundSet"};
                };
            };

            class close: FullAuto {
                burst = 10;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.3;
                aiRateOfFireDistance = 500;
                minRange = 0;
                minRangeProbab = 0.05;
                midRange = 250;
                midRangeProbab = 0.7;
                maxRange = 500;
                maxRangeProbab = 0.1;
                showToPlayer = 0;
            };

            class short: close {
                burst = 7;
                aiBurstTerminable = 1;
                aiRateOfFire = 0.5;
                aiRateOfFireDistance = 1000;
                minRange = 500;
                minRangeProbab = 0.05;
                midRange = 750;
                midRangeProbab = 0.7;
                maxRange = 1000;
                maxRangeProbab = 0.1;
            };

            class medium: close {
                burst = 4;
                aiBurstTerminable = 1;
                aiRateOfFire = 1;
                aiRateOfFireDistance = 1500;
                minRange = 100;
                minRangeProbab = 0.05;
                midRange = 1200;
                midRangeProbab = 0.7;
                maxRange = 1500;
                maxRangeProbab = 0.1;
            };

            class far: close {
                burst = 1;
                aiBurstTerminable = 1;
                aiRateOfFire = 1;
                aiRateOfFireDistance = 2000;
                minRange = 1500;
                minRangeProbab = 0.05;
                midRange = 1750;
                midRangeProbab = 0.4;
                maxRange = 2000;
                maxRangeProbab = 0.01;
            };
        };
    };
};

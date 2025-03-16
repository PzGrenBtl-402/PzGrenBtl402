class Mode_FullAuto;
class Mode_SemiAuto;
class Mode_Burst;

class CfgWeapons {
    class LMG_coax;
    class Redd_MG3: LMG_coax {
        class StandardSound {
            soundsetshot[] = {
                "jsrs_2025_mg3_shot_soundset",
                "jsrs_2025_weapon_snap_lmg_soundset",
                "jsrs_2025_762mm_tails_soundset"
            };
        };

        class FullAuto: Mode_FullAuto {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_mg3_shot_soundset",
                    "jsrs_2025_weapon_snap_lmg_soundset",
                    "jsrs_2025_762mm_tails_soundset"
                };
            };
        };
    };

    class autocannon_35mm;
    class Redd_MK20: autocannon_35mm {
        class FullAuto: Mode_FullAuto {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_autocannon_small_shot_soundset",
                    "jsrs_2025_weapon_stereo_autocannon_soundset",
                    "jsrs_2025_autocannon_tails_soundset"
                };
            };
        };

        class Single: Mode_SemiAuto {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_autocannon_small_shot_soundset",
                    "jsrs_2025_weapon_stereo_autocannon_soundset",
                    "jsrs_2025_autocannon_tails_soundset"
                };
            };
        };
    };

    class Redd_35mm: autocannon_35mm {
        class FullAuto: Mode_FullAuto {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_autocannon_big_shot_soundset",
                    "jsrs_2025_weapon_stereo_autocannon_soundset",
                    "jsrs_2025_autocannon_tails_soundset"
                };
            };
        };

        class Burst: Mode_Burst {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_autocannon_big_shot_soundset",
                    "jsrs_2025_weapon_stereo_autocannon_soundset",
                    "jsrs_2025_autocannon_tails_soundset"
                };
            };
        };

        class Single: Mode_SemiAuto {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_autocannon_big_shot_soundset",
                    "jsrs_2025_weapon_stereo_autocannon_soundset",
                    "jsrs_2025_autocannon_tails_soundset"
                };
            };
        };
    };

    class Redd_35mm_mantis: Redd_35mm {
        class FullAuto: Mode_FullAuto {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_autocannon_big_shot_soundset",
                    "jsrs_2025_weapon_stereo_autocannon_soundset",
                    "jsrs_2025_autocannon_tails_soundset"
                };
            };
        };
    };

    class missiles_titan;
    class Redd_Milan: missiles_titan {
        class StandardSound {
            soundsetshot[] = {
                "jsrs_2025_missile_shot_soundset"
            };
        };
    };

    class mortar_82mm;
    class Redd_mortar_120mm: mortar_82mm {
        class StandardSound {
            soundsetshot[] = {
                "jsrs_2025_mortar_big_shot_soundset"
            };
        };

        class Single1: Mode_SemiAuto {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_mortar_big_shot_soundset"
                };
            };
        };

        class Burst1: Mode_Burst {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_mortar_big_shot_soundset"
                };
            };
        };
    };

    class GMG_40mm;
    class GMG_F;
    class Redd_gmw_Static: GMG_40mm {
        class manual: GMG_F {
            class StandardSound {
                soundsetshot[] = {
                    "jsrs_2025_gmg_vehicle_shot_soundset",
                    "jsrs_2025_50cal_vehicle_tails_soundset"
                };
            };
        };
    };
};

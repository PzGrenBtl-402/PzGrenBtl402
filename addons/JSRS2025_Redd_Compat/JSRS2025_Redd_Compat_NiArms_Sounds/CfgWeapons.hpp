class Mode_FullAuto;

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
};

class Mode_FullAuto;
class BaseSoundModeType;

class CfgWeapons {
    class Rifle_Base_F;
    class hlc_MG42_base: Rifle_Base_F {
        nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg", 0, 1, 0};
        soundbullet[] = {"nullbullet", 1};
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundsetshot[] = {
                    "jsrs_2025_mg3_shot_soundset",
                    "jsrs_2025_weapon_snap_lmg_soundset",
                    "jsrs_2025_762mm_tails_soundset"
                };
            };
        };
    };

    class hlc_lmg_MG3: hlc_MG42_base {
        class FullAuto: FullAuto {
            class StandardSound: BaseSoundModeType {
                soundsetshot[] = {
                    "jsrs_2025_mg3_shot_soundset",
                    "jsrs_2025_weapon_snap_lmg_soundset",
                    "jsrs_2025_762mm_tails_soundset"
                };
            };
        };
    };
};

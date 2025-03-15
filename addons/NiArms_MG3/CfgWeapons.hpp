class CfgWeapons {
    class Rifle_Base_F;
    class hlc_MG42_base: Rifle_Base_F {
        class FullAuto;
    };

    class hlc_lmg_MG3: hlc_MG42_base {
        class FullAuto: FullAuto {
            reloadtime = 60 / 1200;
        };
    };
};

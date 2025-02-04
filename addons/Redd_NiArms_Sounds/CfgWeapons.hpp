class Mode_FullAuto;

class CfgWeapons {
    class LMG_coax;
    class Redd_MG3: LMG_coax {
        reloadmagazinesound[] = {"\hlc_wp_mg3\snd\mg3_reload.wss", 0.8, 1, 18};
        drysound[] = {"\hlc_wp_mg3\snd\mg3_dryfire.wss", 1, 1, 10};

        class FullAuto: Mode_FullAuto {
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"\hlc_wp_Mg3\snd\mg3_first.wss", 1, 1, 10};
                closure2[] = {"\hlc_wp_Mg3\snd\mg3_first.wss", 1, 1, 10};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
                soundSetShot[] = {"NIA_MG3_NEW_Shot_SoundSet", "MG3_Tail_SoundSet"};
            };
        };
    };
};

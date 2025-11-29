#define MK30_PROPERITIES \
    displayName = "$STR_BWA3_MK30Name"; \
    FCSMaxLeadSpeed = 0; \
    modes[] = {"player","player_single","close","short","medium","far"}; \
    magazineReloadTime = 0.3; \
    class GunParticles { \
        class Effect { \
            effectName = "BWA3_AutoCannonFired"; \
            positionName = "Usti hlavne"; \
            directionName = "Konec hlavne"; \
        }; \
        class Shell { \
            positionName = "shell_eject_pos"; \
            directionName = "shell_eject_dir"; \
            effectName = "BWA3_30mm_Cartridge"; \
        }; \
    }; \
    class player: player { \
        class StandardSound { \
            SoundSetShot[] = {"BWA3_MK30_Shot_SoundSet", "BWA3_MK30_Tail_SoundSet"}; \
        }; \
        magazineReloadTime = 0.3; \
    }; \
    class player_single: player { \
        autoFire = 0; \
        displayName = "$STR_DN_MODE_SEMIAUTO"; \
        textureType = "semi"; \
        recoil = "recoil_single_primary_3outof10"; \
        recoilProne = "recoil_single_primary_prone_3outof10"; \
        aiDispersionCoefY = 1.7; \
        aiDispersionCoefX = 1.4; \
        class StandardSound { \
            SoundSetShot[] = {"BWA3_MK30_Shot_SoundSet", "BWA3_MK30_Tail_SoundSet"}; \
        }; \
        magazineReloadTime = 0.3; \
    }; \
    class close: close { \
        class StandardSound { \
            SoundSetShot[] = {"BWA3_MK30_Shot_SoundSet", "BWA3_MK30_Tail_SoundSet"}; \
        }; \
        magazineReloadTime = 0.3; \
    }; \
    class short: short { \
        class StandardSound { \
            SoundSetShot[] = {"BWA3_MK30_Shot_SoundSet", "BWA3_MK30_Tail_SoundSet"}; \
        }; \
        magazineReloadTime = 0.3; \
    }; \
    class medium: medium { \
        class StandardSound { \
            SoundSetShot[] = {"BWA3_MK30_Shot_SoundSet", "BWA3_MK30_Tail_SoundSet"}; \
        }; \
        magazineReloadTime = 0.3; \
    }; \
    class far: far { \
        class StandardSound { \
            SoundSetShot[] = {"BWA3_MK30_Shot_SoundSet", "BWA3_MK30_Tail_SoundSet"}; \
        }; \
        magazineReloadTime = 0.3; \
    }

class CfgWeapons {
    class CannonCore;
    class autocannon_Base_F: CannonCore {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };

    // Create AP/HE muzzles and remove mouse wheel action for switching
    class BWA3_MK30: autocannon_Base_F {
        muzzles[] = {"AP", "HE"};
        magazines[] = {};

        class AP: autocannon_Base_F {
            MK30_PROPERITIES;

            magazines[] = {"BWA3_240Rnd_APFSDS_shells"};
        };
        class HE: autocannon_Base_F {
            MK30_PROPERITIES;

            magazines[] = {"BWA3_160Rnd_HE_shells","BWA3_160Rnd_ABM_shells"};
        };
    };

    class LMG_RCWS;
    class BWA3_MG5_vehicle: LMG_RCWS {
        magazines[] += {QGVAR(1000Rnd_762x51)};

        autoReload = 1;
        magazineReloadTime = 0.1;
    };
};

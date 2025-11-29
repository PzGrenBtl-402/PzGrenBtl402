class CfgMagazines {
    class 140Rnd_30mm_MP_shells;
    class BWA3_160Rnd_HE_shells: 140Rnd_30mm_MP_shells {
        count = 240;
    };

    class BWA3_160Rnd_ABM_shells: BWA3_160Rnd_HE_shells {
        count = 240;
    };

    class 60Rnd_30mm_APFSDS_shells;
    class BWA3_240Rnd_APFSDS_shells: 60Rnd_30mm_APFSDS_shells {
        count = 160;
    };

    class BWA3_1200Rnd_762x51;
    class GVAR(1000Rnd_762x51): BWA3_1200Rnd_762x51 {
        displayName = CSTRING(MG5_BeltDisplayName);
        count = 1000;
        mass = 167;
    };

    class SmokeLauncherMag;
    class BWA3_SmokeLauncherMag: SmokeLauncherMag {
        displayName = CSTRING(smokeGrenadeAmmoDisplayName);
        descriptionShort = CSTRING(smokeGrenadeAmmoDescription);
    };
};

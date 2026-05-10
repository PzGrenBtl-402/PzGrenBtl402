class CfgAmmo {
    class BWA3_Flare_Base;
    class BWA3_F_Singlestar_White: BWA3_Flare_Base {
        submunitionAmmo = QEGVAR(Flare,White);
    };
    class BWA3_F_Singlestar_Green: BWA3_F_Singlestar_White {
        submunitionAmmo = QEGVAR(Flare,Green);
    };
    class BWA3_F_Singlestar_Red: BWA3_F_Singlestar_White {
        submunitionAmmo = QEGVAR(Flare,Red);
    };

    class BWA3_F_Multistar_White: BWA3_F_Singlestar_White {
        submunitionAmmo = QEGVAR(Flare,White);
        submunitionConeAngle = 40; // Use GM value
    };
    class BWA3_F_Multistar_Green: BWA3_F_Multistar_White {
        submunitionAmmo = QEGVAR(Flare,Green);
        submunitionConeAngle = 40; // Use GM value
    };
    class BWA3_F_Multistar_Red: BWA3_F_Multistar_White {
        submunitionAmmo = QEGVAR(Flare,Red);
        submunitionConeAngle = 40; // Use GM value
    };
};

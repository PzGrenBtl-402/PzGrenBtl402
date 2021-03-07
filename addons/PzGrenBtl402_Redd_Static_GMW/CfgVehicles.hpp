class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets;
        class MainTurret;
    };
    class StaticGrenadeLauncher: StaticWeapon {};
    class GMG_TriPod: StaticGrenadeLauncher {};
    class GMG_01_base_F: GMG_TriPod {};
    
    class rnt_gmw_static: GMG_01_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "PzGrenBtl402_RSC_MG3";
            };
        };
    };
};
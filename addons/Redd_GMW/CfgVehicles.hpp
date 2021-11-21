class XEH_CLASS_BASE;

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
        armor = 500000; // Make invincible

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = QEGVAR(Redd_Main, RSC_MG3);

                gunnerGetInAction = "PlayerCrouch";
                gunnerGetOutAction = "PlayerCrouch";
            };
        };

        class EventHandlers {
            // Readd CBA XEH EventHandlers. (Redd didn't inherit from base eventhandles overwriting all eventhandles including XEH)
            class XEH_CLASS: XEH_CLASS_BASE {};
        };
    };
};

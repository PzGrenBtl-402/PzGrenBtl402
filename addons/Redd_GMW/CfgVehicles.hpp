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

        class ACE_CSW {
            enabled = 1;
            magazineLocation = "(_target selectionPosition 'konec hlavne3') vectorAdd [-0.3,-0.07,-0.14]";
            ammoLoadTime = 10;
            ammoUnloadTime = 8;
            desiredAmmo = 32;
            proxyWeapon = QGVAR(Redd_gmw_Static_Proxy);
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = QEGVAR(Redd_Main,RSC_MG3);

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

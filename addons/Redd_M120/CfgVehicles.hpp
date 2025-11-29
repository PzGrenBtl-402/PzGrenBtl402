class XEH_CLASS_BASE;

class CfgVehicles {
    class StaticMortar;
    class Redd_Tank_M120_Tampella_Base: StaticMortar {
        class ACE_CSW {
            enabled = 1;
            magazineLocation = "_target selectionPosition 'muendung'";
            ammoLoadTime = 1;
            ammoUnloadTime = 2;
            desiredAmmo = 1;
            proxyWeapon = QGVAR(M120_Tampella_Proxy);
            allowFireOnLoad = 1;
        };

        class UserActions
        {
            delete M120_removeflag;
            delete M120_redFlag;
            delete M120_greenFlag;
        };

        class EventHandlers
        {
            init = "_this call redd_fnc_m120_init";
            fired = QUOTE(_this spawn redd_fnc_m120_fired; _this call FUNC(m120HandleFired)); // Replace Redd's ACE fired handler with own because Redd's causes script errors.

            // Readd CBA XEH EventHandlers. (Redd didn't inherit from base eventhandlers overwriting all eventhandlers including XEH)
            class XEH_CLASS: XEH_CLASS_BASE {};
        };
    };
};

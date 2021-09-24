class CfgVehicles {
    class Bag_Base;
    class rnt_mg3_static_tripod: Bag_Base {
        armor = 500000;

        class assembleInfo {
            primary = 1;
            base = "";
            assembleTo = QGVAR(Tripod);
            dissasembleTo[] = {};
            displayName = CSTRING(lafette_displayname);
        };
    };


    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets;
        class MainTurret;
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    class StaticMGWeapon: StaticWeapon {};
    class HMG_01_base_F: StaticMGWeapon {};
    class HMG_01_high_base_F: HMG_01_base_F {};

    class rnt_mg3_static: HMG_01_high_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = QEGVAR(Redd_Main, RSC_MG3);

                class HitPoints {
                    class HitGun {
                        armor = 100;
                    };
                };
            };
        };

        delete assembleInfo;

        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "Redd_MG3_Static"; // Adjusted in CfgWeapons
            magazineLocation = "_target selectionPosition 'machinegun_eject_pos'";
            disassembleWeapon = "";
            disassembleTurret = QGVAR(Tripod);
            desiredAmmo = 250;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                displayName = CSTRING(lafette_displayname);
                condition = "alive _target";
                position = "";

                class GVAR(disassemble) {
                    displayName = CSTRING(disassemble);
                    condition = "(count crew _target) isEqualTo 0";
                    statement = QUOTE(call FUNC(disassemble));
                };
            };
        };
    };


    class ace_csw_sag30Tripod;
    class GVAR(Tripod): ace_csw_sag30Tripod {
        displayName = CSTRING(lafette_displayname);
        scope = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 2, 0};
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 2, 0};

        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_CSW_genericTripod_displayName";
                selection = "";
                distance = 2.5;
                condition = "alive _target";

                class GVAR(mountWeapon) {
                    displayName = CSTRING(mount);
                    condition = QUOTE(call FUNC(canMountMG));
                    icon = "\Redd_Backpacks\pictures\rnt_mg3_static_barell_ui_pre_ca.paa";
                    statement = QUOTE(call FUNC(mountMG));
                };
                class GVAR(pickup) {
                    displayName = "$STR_ACE_CSW_Pickup_displayName";
                    condition = "(backpack _player) isEqualTo ''";
                    icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\backpack_ca.paa";
                    statement = QUOTE(call FUNC(pickupTripod));
                };
            };
        };
    };
};

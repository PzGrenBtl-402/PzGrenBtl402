class Optics_Armored;
class BWA3_Optics_Commander_Leopard: Optics_Armored {
    class Wide;
    class Medium;
    class Narrow;
};

class CfgVehicles {
    class Land;
    class LandVehicle: Land {
        class NewTurret;
    };
    class Tank: LandVehicle {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };
    class Tank_F: Tank {};

    class BWA3_Leopard_base: Tank_F {
        maximumLoad = 10000;

        ace_vehicles_engineStartDelay = 5;

        PzGrenBtl402_gunnerAndCommanderCanSmoke = 1; // Requires that gunner has smoke launcher as weapon
        PzGrenBtl402_smokeLauncherMuzzle = QEGVAR(BwMod_Weapons,SmokeLauncher);

        driverWeaponsInfoType = QGVAR(RscOptics_Driver);

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(ACRE,BV);
                shortName = ECSTRING(ACRE,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        acre_hasInfantryPhone = 0;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(ACRE,noApiFunction);
        acre_infantryPhonePosition[] = {};

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(ACRE,RackA);
                shortName = ECSTRING(ACRE,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_2 {
                displayName = ECSTRING(ACRE,RackB);
                shortName = ECSTRING(ACRE,RackBShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        // Change optics to vanilla Warrior
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
                        turretInfoType = QGVAR(RscOpticsCommander);

                        // Move SmokeLauncher to gunner
                        weapons[] = {};
                        magazines[] = {};

                        class OpticsIn: BWA3_Optics_Commander_Leopard {
                            class Wide: Wide {
                                gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
                                visionMode[] = {"Normal", "TI"}; // Remove NVG
                            };
                            class Medium: Medium {
                                gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
                                visionMode[] = {"Normal", "TI"}; // Remove NVG
                            };
                            class Narrow: Narrow {
                                gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
                                visionMode[] = {"Normal", "TI"}; // Remove NVG
                            };
                        };
                    };
                };

                // Move SmokeLauncher to gunner
                weapons[] += {QEGVAR(BwMod_Weapons,SmokeLauncher)};
                magazines[] += {"BWA3_SmokeLauncherMag"};
            };
        };
    };
};

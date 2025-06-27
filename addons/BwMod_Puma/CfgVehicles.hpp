class Optics_Armored;
class BWA3_Optics_Gunner_Puma: Optics_Armored {
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

    class BWA3_Puma_base: Tank_F {
        maximumLoad = 10000;

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(ACRE,BV);
                shortName = ECSTRING(ACRE,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        acre_hasInfantryPhone = 1;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};

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

        // Change optics to vanilla Warrior
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
                        turretInfoType = QGVAR(RscOpticsCommander);
                    };
                };

                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                turretInfoType = QGVAR(RscOpticsGunner);

                class OpticsIn: BWA3_Optics_Gunner_Puma {
                    class Wide: Wide {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
                    };
                    class Medium: Medium {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_m_F.p3d";
                    };
                    class Narrow: Narrow {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_n_F.p3d";
                    };
                };
            };
        };
    };
};

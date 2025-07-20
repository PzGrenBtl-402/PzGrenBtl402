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

        disableSoundAttenuation = 0;
        soundAttenuationTurret = "TankAttenuation";
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment2"};

        ace_vehicles_engineStartDelay = 5;

        PzGrenBtl402_gunnerAndCommanderCanSmoke = 1; // Requires that gunner has smoke launcher as weapon
        PzGrenBtl402_smokeLauncherMuzzle = QGVAR(SmokeLauncher);

        driverWeaponsInfoType = QGVAR(RscOptics_Driver);

        magazines[] = {
            "BWA3_240Rnd_APFSDS_shells",
            "BWA3_160Rnd_HE_shells", // Set default to HE instead of ABM
            "BWA3_1200Rnd_762x51",
            "BWA3_1200Rnd_762x51",
            "BWA3_2Rnd_Spike_Lr"
        };

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(ACRE,BV);
                shortName = ECSTRING(ACRE,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 6;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
            delete Intercom_2;
        };

        acre_hasInfantryPhone = 1;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        // Inf phone position in BWMod is defined via selection
        // We cannot change the data type of array entries
        // acre_infantryPhonePosition[] = {-1.35, -3.83, 1.40};

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

                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments = "Compartment1";

                        // Move SmokeLauncher to gunner
                        weapons[] = {};
                        magazines[] = {};
                    };
                };

                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                turretInfoType = QGVAR(RscOpticsGunner);

                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments = "Compartment1";

                // Move SmokeLauncher to gunner
                weapons[] += {
                    QGVAR(SmokeLauncher)
                };
                magazines[] += {
                    "BWA3_SmokeLauncherMag"
                };

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

        class Attributes {
            // Set default to HE instead of ABM
            class BWA3_MK30AP;
            class BWA3_MK30HE: BWA3_MK30AP {
                defaultValue = 1;
            };
            class BWA3_MK30ABM: BWA3_MK30AP {
                defaultValue = 0;
            };
        };
    };
};

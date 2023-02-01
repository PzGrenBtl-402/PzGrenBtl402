class CfgVehicles
{
    class gm_tracked_base;
    class gm_tracked_APC_base: gm_tracked_base
    {
        class Turrets;
        class UserActions;
    };

    class gm_marder1_base: gm_tracked_APC_base
    {
        class CargoTurret;
        class CommanderTurret_base;
        class MachineGunTurret_base;
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;

        maximumLoad = 10000;
        fuelCapacity = 100;
        disableSoundAttenuation = 0;
        attenuationEffectType = "TankAttenuation";
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment2"};
        enableGPS = 0;

        ace_vehicles_engineStartDelay = 5;

        PzGrenBtl402_gunnerAndCommanderCanSmoke = 1; // Requires that gunner has smoke launcher as weapon
        PzGrenBtl402_smokeLauncherMuzzle = QGVAR(SmokeLauncher);

        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = ECSTRING(ACRE, BV);
                shortName = ECSTRING(ACRE, BVShort);
                allowedPositions[] = {"driver", "gunner", "commander", {"turret", {0,1}}};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}, {"turret", {1}}};
                numLimitedPositions = 3;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        acre_hasInfantryPhone = 1;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(ACRE, noApiFunction);
        acre_infantryPhonePosition[] = {-1.175, -3.45, -1.1};

        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(ACRE, RackA);
                shortName = ECSTRING(ACRE, RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"gunner"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };

            class Rack_2
            {
                displayName = ECSTRING(ACRE, RackB);
                shortName = ECSTRING(ACRE, RackBShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"gunner"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };

        class UserActions: UserActions
        {
            class heckklappe_auf
            {
                displayName = CSTRING(openRamp);
                displayNameDefault = CSTRING(openRamp);
                position = "actionPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(ACE_player in [driver this, gunner this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' isEqualTo 0) && (alive this)";
                statement = QUOTE(this call FUNC(openRamp));
            };

            class heckklappe_zu
            {
                displayName = CSTRING(closeRamp);
                displayNameDefault = CSTRING(closeRamp);
                position = "actionPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(ACE_player in [driver this, gunner this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' isEqualTo 1) && (alive this)";
                statement = QUOTE(this call FUNC(closeRamp));
            };
        };
    };

    class gm_marder1a0_base: gm_marder1_base
    {
        smokeLauncherGrenadeCount = 6;

        class Turrets: Turrets
        {
            class CargoTurret_01: CargoTurret
            {
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments = "Compartment2";
            };

            class SquadLeaderTurret: MainTurret
            {
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments = "Compartment2";
            };

            class MainTurret: MainTurret
            {
                discreteDistanceInitIndex = 7; // Set initial gun zeoring to 800 m
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments = "Compartment3";

                weapons[] = {
                    QGVAR(20mm_rh202), // Modified reload time for Rearm and single fire mode
                    QGVAR(mg3_coax), // Modified reload time for Rearm
                    QGVAR(SmokeLauncher)
                };
                magazines[] = {
                    "gm_425Rnd_20x139mm_hei_t_dm81",
                    "gm_75Rnd_20x139mm_apds_t_dm63",
                    "gm_500Rnd_762x51mm_b_t_DM21_mg3",
                    QGVAR(1Rnd_76mm_RP_dm35) // Marder A1/2 have 1 rnd 6 smoke granades
                };

                class Turrets
                {
                    class CommanderTurret: CommanderTurret_base
                    {
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments = "Compartment3";

                        weapons[] = {}; // Move SmokeLauncher to gunner
                        magazines[] = {};
                    };

                    class MilanTurret_01: MachineGunTurret_base
                    {
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments = "Compartment4";

                        magazines[] = {};
                    };
                };
            };
        };

        class AnimationSources: AnimationSources
        {
            // Changes for Rearm (modified 20mm_rh202 and mg3 classes)
            class MainTurret_reload_source
            {
                source = "reload";
                weapon = QGVAR(20mm_rh202);
            };
            class MainTurret_ammorandom_source
            {
                source = "ammorandom";
                weapon = QGVAR(20mm_rh202);
            };
            class MainTurret_coax_ammorandom_source
            {
                source = "ammorandom";
                weapon = QGVAR(mg3_coax);
            };
        };
    };
};

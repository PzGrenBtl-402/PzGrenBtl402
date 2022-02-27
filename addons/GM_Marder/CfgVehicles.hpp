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
        class MachineGunTurret_base;
        class CommanderTurret_base;
        class Turrets: Turrets
        {
            class MainTurret;
        };

        maximumLoad = 10000;
        fuelCapacity = 100;

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
                numLimitedPositions = 1;
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
                position = "actionPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(player in [driver this, gunner this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' isEqualTo 0) && (alive this)";
                statement = QUOTE(this call FUNC(openRamp));
            };

            class heckklappe_zu
            {
                displayName = CSTRING(closeRamp);
                position = "actionPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(player in [driver this, gunner this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' isEqualTo 1) && (alive this)";
                statement = QUOTE(this call FUNC(closeRamp));
            };
        };
    };

    class gm_marder1a0_base: gm_marder1_base
    {
        smokeLauncherGrenadeCount = 6;

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"gm_20mm_rh202", "gm_mg3_coax", QGVAR(SmokeLauncher)};
                magazines[] = {
                    "gm_425Rnd_20x139mm_hei_t_dm81",
                    "gm_425Rnd_20x139mm_hei_t_dm81",
                    "gm_75Rnd_20x139mm_apds_t_dm63",
                    "gm_75Rnd_20x139mm_apds_t_dm63",
                    "gm_500Rnd_762x51mm_b_t_DM21_mg3",
                    "gm_500Rnd_762x51mm_b_t_DM21_mg3",
                    "gm_500Rnd_762x51mm_b_t_DM21_mg3",
                    "gm_500Rnd_762x51mm_b_t_DM21_mg3",
                    QGVAR(1Rnd_76mm_RP_dm35) // Smoke Mag
                };

                class Turrets
                {
                    class CommanderTurret: CommanderTurret_base
                    {
                        weapons[] = {}; // Move SmokeLauncher to gunner
                        magazines[] = {};
                    };

                    class MilanTurret_01: MachineGunTurret_base
                    {
                        magazines[] = {};
                    };
                };
            };
        };
    };
};

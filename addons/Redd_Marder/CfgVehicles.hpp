class CBA_Extended_EventHandlers_base;

class CfgSoundEffects
{
    class AttenuationsEffects
    {
        class TankAttenuation;
        class GVAR(TankAttenuation): TankAttenuation
        {
            acreAttenuation = 1;
        };
    };
};

class CfgVehicles
{
    class LandVehicle;

    class Tank: LandVehicle
    {
        class NewTurret;
    };

    class Tank_F: Tank
    {
        class Components;
        class EventHandlers;
        class ViewOptics;
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class ViewOptics;
                class Turrets
                {
                    class CommanderOptics;
                };
            };
        };
    };

    class Redd_Marder_1A5_base: Tank_F
    {
        maximumLoad = 10000;
        lockWhenDriverOut = 0;
        driverWeaponsInfoType = QEGVAR(Redd_Main, RSC_Driver);
        attenuationEffectType = QGVAR(TankAttenuation);
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment2"};

        PzGrenBtl402_gunnerAndCommanderCanSmoke = 1; // Requires that gunner has smoke launcher as weapon
        PzGrenBtl402_smokeLauncherMuzzle = QGVAR(SmokeLauncher);

        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = ECSTRING(ACRE, BV);
                shortName = ECSTRING(ACRE, BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
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
        acre_infantryPhonePosition[] = {-1.23, -3.37, -0.78};

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

        class Components: Components
        {
            class VehicleSystemsDisplayManagerComponentLeft
            {
                componentType = "VehicleSystemsDisplayManager";
                defaultDisplay = "EmptyDisplay";
                left = 1;
                x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                class Components
                {
                    class EmptyDisplay
                    {
                        componentType = "EmptyDisplayComponent";
                    };

                    class MinimapDisplay
                    {
                        componentType = "MinimapDisplayComponent";
                    };
                };
            };

            class VehicleSystemsDisplayManagerComponentRight
            {
                componentType = "VehicleSystemsDisplayManager";
                defaultDisplay = "EmptyDisplay";
                right = 1;
                x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
                y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                class Components
                {
                    class EmptyDisplay
                    {
                        componentType = "EmptyDisplayComponent";
                    };

                    class MinimapDisplay
                    {
                        componentType = "MinimapDisplayComponent";
                    };
                };
            };
        };

        class TransportBackpacks {delete _xx_B_AssaultPack_rgr;};
        //delete _xx_milan_Bag; delete _xx_milan_tripod;
        class TransportItems {delete _xx_Toolkit;};

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                discreteDistanceInitIndex = 6; // Set initial gun zeoring to 800 m
                lockWhenDriverOut = 0; // Don't lock turret when driver is turned out
                turretInfoType = QEGVAR(Redd_Main, RSC_Turret);
                soundAttenuationTurret = QGVAR(TankAttenuation);
                gunnerCompartments= "Compartment2";

                weapons[] = {
                    "Redd_Gesichert",
                    "Redd_MK20",
                    "Redd_MG3",
                    QGVAR(SmokeLauncher) // Add SmokeLauncher to gunner
                };
                magazines[] = {
                    "Redd_MK20_HE_Mag",
                    "Redd_MK20_AP_Mag",
                    "Redd_Mg3_Mag",
                    "Redd_Mg3_Mag",
                    "Redd_Mg3_Mag",
                    "Redd_Mg3_Mag",
                    "Redd_Mg3_Mag",
                    "Redd_Mg3_Mag",
                    "Redd_Mg3_Mag",
                    "Redd_SmokeLauncherMag" // PzGrenBtl402_SmokeLauncher still uses Redds Mags
                };

                // Remove NVG
                class ViewOptics: ViewOptics
                {
                    visionMode[] = {"Normal", "TI"};
                };

                // Remove NVG
                class OpticsIn
                {
                    class Day1
                    {
                        visionMode[] = {"Normal"};
                    };
                    class Day2
                    {
                        visionMode[] = {"Normal"};
                    };
                };

                class Components
                {
                    class VehicleSystemsDisplayManagerComponentLeft
                    {
                        componentType = "VehicleSystemsDisplayManager";
                        defaultDisplay = "EmptyDisplay";
                        left = 1;
                        x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                        y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };

                            class MinimapDisplay
                            {
                                componentType = "MinimapDisplayComponent";
                            };
                        };
                    };

                    class VehicleSystemsDisplayManagerComponentRight
                    {
                        componentType = "VehicleSystemsDisplayManager";
                        defaultDisplay = "EmptyDisplay";
                        right = 1;
                        x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
                        y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };

                            class MinimapDisplay
                            {
                                componentType = "MinimapDisplayComponent";
                            };
                        };
                    };
                };

                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        stabilizedInAxes = 0;
                        turretInfoType = QEGVAR(Redd_Main, RSC_Turret);
                        soundAttenuationTurret = QGVAR(TankAttenuation);
                        gunnerCompartments= "Compartment3";

                        weapons[] = {}; // Move SmokeLauncher to gunner
                        magazines[] = {};

                        // Remove NVG
                        class ViewOptics: ViewOptics
                        {
                            visionMode[] = {"Normal", "TI"};
                        };

                        // Remove NVG
                        class OpticsIn
                        {
                            class Day1
                            {
                                visionMode[] = {"Normal"};
                            };
                            class Day2
                            {
                                visionMode[] = {"Normal"};
                            };
                        };

                        class Components
                        {
                            class VehicleSystemsDisplayManagerComponentLeft
                            {
                                componentType = "VehicleSystemsDisplayManager";
                                defaultDisplay = "EmptyDisplay";
                                left = 1;
                                x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                                y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                                class Components
                                {
                                    class EmptyDisplay
                                    {
                                        componentType = "EmptyDisplayComponent";
                                    };

                                    class MinimapDisplay
                                    {
                                        componentType = "MinimapDisplayComponent";
                                    };
                                };
                            };

                            class VehicleSystemsDisplayManagerComponentRight
                            {
                                componentType = "VehicleSystemsDisplayManager";
                                defaultDisplay = "EmptyDisplay";
                                right = 1;
                                x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
                                y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                                class Components
                                {
                                    class EmptyDisplay
                                    {
                                        componentType = "EmptyDisplayComponent";
                                    };

                                    class MinimapDisplay
                                    {
                                        componentType = "MinimapDisplayComponent";
                                    };
                                };
                            };
                        };
                    };

                    class CargoTurret_Links: NewTurret
                    {
                        gunnerCompartments= "Compartment2";
                        soundAttenuationTurret = QGVAR(TankAttenuation);

                        class Components
                        {
                            class VehicleSystemsDisplayManagerComponentLeft
                            {
                                componentType = "VehicleSystemsDisplayManager";
                                defaultDisplay = "EmptyDisplay";
                                left = 1;
                                x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                                y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                                class Components
                                {
                                    class EmptyDisplay
                                    {
                                        componentType = "EmptyDisplayComponent";
                                    };

                                    class MinimapDisplay
                                    {
                                        componentType = "MinimapDisplayComponent";
                                    };
                                };
                            };

                            class VehicleSystemsDisplayManagerComponentRight
                            {
                                componentType = "VehicleSystemsDisplayManager";
                                defaultDisplay = "EmptyDisplay";
                                right = 1;
                                x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
                                y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                                class Components
                                {
                                    class EmptyDisplay
                                    {
                                        componentType = "EmptyDisplayComponent";
                                    };

                                    class MinimapDisplay
                                    {
                                        componentType = "MinimapDisplayComponent";
                                    };
                                };
                            };
                        };
                    };
                };
            };

            class Redd_Milan: NewTurret
            {
                magazines[] = {}; //Waffe ist direkt nach dem Aufbau leer, Patrone muss manuell geladen werden
                stabilizedInAxes = 0;
                turretInfoType = QEGVAR(Redd_Main, RSC_Milan);
                gunnerCompartments= "Compartment3";

                class OpticsIn
                {
                    class Day1
                    {
                        visionMode[] = {"Normal"};
                    };

                    class Day2
                    {
                        visionMode[] = {"Normal"};
                    };
                };

                class Components
                {
                    class VehicleSystemsDisplayManagerComponentLeft
                    {
                        componentType = "VehicleSystemsDisplayManager";
                        defaultDisplay = "EmptyDisplay";
                        left = 1;
                        x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                        y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };

                    class VehicleSystemsDisplayManagerComponentRight
                    {
                        componentType = "VehicleSystemsDisplayManager";
                        defaultDisplay = "EmptyDisplay";
                        right = 1;
                        x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
                        y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };
                };
            };

            class Luchs_Bino_Turret_Com: NewTurret
            {
                stabilizedInAxes = 0;
                gunnerCompartments= "Compartment3";

                class Components
                {
                    class VehicleSystemsDisplayManagerComponentLeft
                    {
                        componentType = "VehicleSystemsDisplayManager";
                        defaultDisplay = "EmptyDisplay";
                        left = 1;
                        x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                        y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };

                    class VehicleSystemsDisplayManagerComponentRight
                    {
                        componentType = "VehicleSystemsDisplayManager";
                        defaultDisplay = "EmptyDisplay";
                        right = 1;
                        x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
                        y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };
                };
            };
        };

        class AnimationSources
        {
            class heck_luke_rotation
            {
                source = "user";
                initPhase = 0;
                animPeriod = 3;
                sound = "Redd_Heckluke_sound";
                soundPosition = "HecklukePoint";
            };

            class ReloadMagazine
            {
                source = "user"; //Hide-Animation auf User-Kontrolle umschreiben, um sie über Eventhandler kontrollieren zu können
                initPhase = 1; //Damit die Patrone beim ersten Aufbau versteckt ist
                AnimPeriod = 0;
            };
        };

        class EventHandlers: EventHandlers
        {
            fired = QUOTE(_this call FUNC(handleFired); _this call redd_fnc_Marder_Fired); //Patrone an der Waffe verstecken und Magazin entfernen, gleichzeitig RnT Funktion weiterhin aufrufen
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };

        class UserActions
        {
            class heckluke_auf
            {
                displayName = "$STR_heckluke_auf";
                position = "HecklukePoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(player in [driver this, gunner this, this turretUnit [0,3]]) && (this animationSourcePhase 'heck_luke_rotation' == 0) && (alive this)";
                statement = QUOTE(this call FUNC(openRamp));
            };

            class heckluke_zu
            {
                displayName = "$STR_heckluke_zu";
                position = "HecklukePoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(player in [driver this, gunner this, this turretUnit [0,3]]) && (this animationSourcePhase 'heck_luke_rotation' > 0) && (alive this)";
                statement = QUOTE(this call FUNC(closeRamp));
            };

            class Bino_in
            {
                displayName = "$STR_Hoeher_steigen";
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "turnOut";
                condition = "(this turretUnit [0,0] == player) and (this animationSourcePhase 'hatchCommander' > 0) and (alive this)";
                statement = "(missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) action ['moveToTurret', this, [2]];[this,[[0,0],true]] remoteExecCall ['lockTurret'];this setVariable ['Redd_Marder_Bino_In', true, true];";
            };

            class Bino_out
            {
                displayName = "$STR_Tiefer_steigen";
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "turnIn";
                condition = "(this turretUnit [2] == player) and (alive this)";
                statement = "(missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) action ['moveToTurret', this, [0,0]];[this,[[0,0],false]] remoteExecCall ['lockTurret'];this setVariable ['Redd_Marder_Bino_In', false, true];";
            };

            delete heckluke_auf_2;
            delete heckluke_zu_2;

            delete milan_auf;
            delete milan_ab;

            class Tarnnetz_Boden_abbauen
            {
                displayName = "$STR_Redd_Tarnnetz_boden_abbauen";
                position = "actionPoint";
                radius = 5;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "player == (driver this) and !(this getVariable 'has_camonet') and (this getVariable 'has_camonet_large')";
                statement = "[this,'camonet_large',player] call Redd_fnc_marder_camonet";
            };
        };
    };
};

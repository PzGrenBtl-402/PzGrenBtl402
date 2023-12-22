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

    class Redd_Tank_Wiesel_1A2_TOW_base: Tank_F
    {
        maximumLoad = 10000;
        driverWeaponsInfoType = QEGVAR(Redd_Main,RSC_Driver);
        disableSoundAttenuation = 0;
        attenuationEffectType = "TankAttenuation";
        driverCompartments = "Compartment1";
        enableGPS = 0;

        class TransportBackpacks
        {
            delete _xx_B_AssaultPack_rgr;

            class _xx_milan_Bag
            {
                backpack = "Redd_Milan_Static_Barrel";
                count = 5;
            };
        };
        class TransportItems {delete _xx_Toolkit;};

        class AcreIntercoms
        {
            class Intercom_1
            {
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

        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(ACRE,RackA);
                shortName = ECSTRING(ACRE,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"commander"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };

            class Rack_2
            {
                displayName = ECSTRING(ACRE,RackB);
                shortName = ECSTRING(ACRE,RackBShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"commander"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };

        class EventHandlers: EventHandlers
        {
            fired = QUOTE(_this call FUNC(handleTOWFired));
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

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                lockWhenDriverOut = 0;
                stabilizedInAxes = 0;
                turretInfoType = QEGVAR(Redd_Main,RSC_Milan);
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";
                magazines[] = {"Redd_TOW_Mag"};

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

                class Turrets: Turrets
                {
                    class CommanderOptic: CommanderOptics
                    {
                        stabilizedInAxes = 0;
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment2";

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
            };
        };

        class Loader_MG3: NewTurret
        {
            lockWhenDriverOut = 0;
            stabilizedInAxes = 0;
            turretInfoType = QEGVAR(Redd_Main,RSC_MG3);
            disableSoundAttenuation = 0;
            soundAttenuationTurret = "TankAttenuation";
            gunnerCompartments = "Compartment3";

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

        class Bino_Turret_Com: NewTurret
        {
            stabilizedInAxes = 0;
            disableSoundAttenuation = 0;
            soundAttenuationTurret = "TankAttenuation";
            gunnerCompartments = "Compartment3";

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

        class Bino_Turret_Loader: NewTurret
        {
            stabilizedInAxes = 0;
            disableSoundAttenuation = 0;
            soundAttenuationTurret = "TankAttenuation";
            gunnerCompartments = "Compartment3";

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
};

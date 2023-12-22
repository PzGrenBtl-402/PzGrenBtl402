class CfgVehicles
{
    class Car_F;

    class Wheeled_APC_F: Car_F
    {
        class NewTurret;

        class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
            };
        };
    };

    class Redd_Tank_Fuchs_1A4_Base: Wheeled_APC_F
    {
        maximumLoad = 10000;
        disableSoundAttenuation = 0;
        attenuationEffectType = "TankAttenuation";
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment2"};
        enableGPS = 0;

        class TransportBackpacks {delete _xx_B_AssaultPack_rgr;};
        class TransportItems {delete _xx_Toolkit;};

        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = ECSTRING(ACRE,BV);
                shortName = ECSTRING(ACRE,BVShort);
                allowedPositions[] = {"driver", "gunner", {"turret", {0,3}}};
                disabledPositions[] = {};
                limitedPositions[] = {"commander", {"turret", {1}}, {"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 2;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        acre_hasInfantryPhone = 1;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(ACRE,noApiFunction);
        acre_infantryPhonePosition[] = {-1.1, -3.3, -0.4};

        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(ACRE,RackA);
                shortName = ECSTRING(ACRE,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"ffv", {0,2}}};
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
                allowedPositions[] = {{"ffv", {0,2}}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                stabilizedInAxes = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";

                class Turrets: Turrets
                {
                    class commander_hatch: NewTurret
                    {
                        stabilizedInAxes = 0;
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment2";
                    };

                    class fake_gunner_turret: commander_hatch
                    {
                        stabilizedInAxes = 0;
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment1";
                    };
                };
            };

            class Fuchs_Bino_Turret_Com: NewTurret
            {
                stabilizedInAxes = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";
            };

            class Fuchs_Milan_Turret: NewTurret
            {
                stabilizedInAxes = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";
            };
        };
    };
};

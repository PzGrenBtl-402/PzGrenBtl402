class CfgPatches
{
    class Redd_Tank_Fuchs_1A4_402
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"redd_tank_fuchs_1a4"};
    };
};

class CfgVehicles
{
    class Car;
    class Car_F: Car {};
    class Wheeled_APC_F: Car_F {};
    class Redd_Tank_Fuchs_1A4_Base: Wheeled_APC_F
    {
        maximumLoad = 10000;

        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Bordverstaendigung";
                shortName = "BV";
                allowedPositions[] = {"driver", "gunner", {"turret", {0,3}}};
                disabledPositions[] = {};
                limitedPositions[] = {"commander", {"turret", [1]}, {"cargo", "all"}, {"ffv", "all"}};
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
        acre_eventInfantryPhone = QFUNC(noApiFunction);
        acre_infantryPhonePosition[] = {-1.1, -3.3, -0.4};

        class AcreRacks {
            class Rack_1 {
                displayName = "Funkkreis A";
                shortName = "Krs A";
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"ffv", {0,2}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_2 {
                displayName = "Funkkreis B";
                shortName = "Krs B";
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"ffv", {0,2}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };

    };

};

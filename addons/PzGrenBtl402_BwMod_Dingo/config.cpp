class CfgPatches
{
    class BwMod_402_Dingo
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"bwa3_dingo2"};
    };
};

class CfgVehicles
{
    class LandVehicle;
    class Car: LandVehicle {};
    class Car_F: Car {};
    class BWA3_Dingo2_base: Car_F
    {
        maximumLoad = 10000;

        /*
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Bordverstaendigung";
                shortName = "BV";
                allowedPositions[] = {"commander"};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {};
                connectedByDefault = 0;
            };
        };
        */

        acre_hasInfantryPhone = 0;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {};
        acre_infantryPhoneControlActions[] = {};
        acre_eventInfantryPhone = "QFUNC(noApiFunction)";
        acre_infantryPhonePosition[] = {};

        class AcreRacks {
            class Rack_1 {
                displayName = "Funkkreis A";
                shortName = "Krs A";
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
            class Rack_2 {
                displayName = "Funkkreis B";
                shortName = "Krs B";
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
        };
    };
};

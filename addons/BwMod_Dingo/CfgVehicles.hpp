class CfgVehicles {
    class Car_F;
    class BWA3_Dingo2_base: Car_F {
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
        acre_eventInfantryPhone = QEFUNC(ACRE, noApiFunction);
        acre_infantryPhonePosition[] = {};

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(ACRE, RadioNetworkA);
                shortName = ECSTRING(ACRE, RadioNetworkAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
            class Rack_2 {
                displayName = ECSTRING(ACRE, RadioNetworkB);
                shortName = ECSTRING(ACRE, RadioNetworkBShort);
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

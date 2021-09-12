class CfgVehicles {
    class Wheeled_APC_F;
    class rnt_sppz_2a2_luchs_Base: Wheeled_APC_F {
        maximumLoad = 10000;

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(ACRE, BV);
                shortName = ECSTRING(ACRE, BVShort);
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
        acre_eventInfantryPhone = QEFUNC(ACRE, noApiFunction);
        acre_infantryPhonePosition[] = {};

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(ACRE, RadioNetworkA);
                shortName = ECSTRING(ACRE, RadioNetworkAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"turret", [1]}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_2 {
                displayName = ECSTRING(ACRE, RadioNetworkB);
                shortName = ECSTRING(ACRE, RadioNetworkBShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"turret", [1]}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };
    };
};

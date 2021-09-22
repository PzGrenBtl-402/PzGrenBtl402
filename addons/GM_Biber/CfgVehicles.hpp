class CfgVehicles {
    class gm_Leopard1_base;
    class gm_biber_base: gm_Leopard1_base {
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
                displayName = ECSTRING(ACRE, RackA);
                shortName = ECSTRING(ACRE, RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };
    };
};

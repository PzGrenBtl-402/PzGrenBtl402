class CfgVehicles {
    class Wheeled_APC_F;
    class Redd_Tank_Fuchs_1A4_Base: Wheeled_APC_F {
        maximumLoad = 10000;

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(ACRE, BV);
                shortName = ECSTRING(ACRE, BVShort);
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
        acre_eventInfantryPhone = QEFUNC(ACRE, noApiFunction);
        acre_infantryPhonePosition[] = {-1.1, -3.3, -0.4};

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(ACRE, RackA);
                shortName = ECSTRING(ACRE, RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"ffv", {0,2}}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_2 {
                displayName = ECSTRING(ACRE, RackB);
                shortName = ECSTRING(ACRE, RackBShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"ffv", {0,2}}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };
    };
};

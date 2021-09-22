class CfgVehicles {
    class Car_F;
    class Redd_Tank_LKW_leicht_gl_Wolf_Base: Car_F {
        maximumLoad = 10000;

        delete AcreIntercoms;
        delete acre_hasInfantryPhone;
        delete acre_infantryPhoneDisableRinging;
        delete acre_infantryPhoneCustomRinging;
        delete acre_infantryPhoneIntercom;
        delete acre_infantryPhoneControlActions;
        delete acre_eventInfantryPhone;
        delete acre_infantryPhonePosition;

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(ACRE, RackA);
                shortName = ECSTRING(ACRE, RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew", {"cargo", "all"}, "external"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
            class Rack_2 {
                displayName = ECSTRING(ACRE, RackB);
                shortName = ECSTRING(ACRE, RackBShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew", {"cargo", "all"}, "external"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
        };
    };
};

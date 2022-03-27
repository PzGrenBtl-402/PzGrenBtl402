class CfgVehicles
{
    class gm_wheeled_APC_base;
    class gm_fuchs_base: gm_wheeled_APC_base
    {
        class UserActions;
    };

    class gm_fuchsa0_base: gm_fuchs_base
    {
        maximumLoad = 10000;

        class UserActions: UserActions
        {
            class hecktueren_auf
            {
                displayName = CSTRING(openDoors);
                position = "hatch_1_1_axis";
                radius = 2;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(this doorPhase 'door_2_1_source' == 0) && (alive this)";
                statement = "this animateDoor ['door_2_2_source', 1, false]; this animateDoor ['door_2_1_source', 1, false];";
            };

            class hecktueren_zu
            {
                displayName = CSTRING(closeDoors);
                position = "hatch_1_1_axis";
                radius = 2;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(this doorPhase 'door_2_1_source' == 1) && (alive this)";
                statement = "this animateDoor ['door_2_1_source', 0, false]; this animateDoor ['door_2_2_source', 0, false];";
            };

            class hecktueren_auf_2
            {
                displayName = CSTRING(openDoors);
                position = "actionPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(player in this) && (this doorPhase 'door_2_1_source' == 0) && (alive this)";
                statement = "this animateDoor ['door_2_2_source', 1, false]; this animateDoor ['door_2_1_source', 1, false];";
            };

            class hecktueren_zu_2
            {
                displayName = CSTRING(closeDoors);
                position = "actionPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(player in this) && (this doorPhase 'door_2_1_source' == 1) && (alive this)";
                statement = "this animateDoor ['door_2_1_source', 0, false]; this animateDoor ['door_2_2_source', 0, false];";
            };
        };
    };

    class gm_fuchsa0_engineer_base: gm_fuchsa0_base
    {
        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = ECSTRING(ACRE, BV);
                shortName = ECSTRING(ACRE, BVShort);
                allowedPositions[] = {"driver", {"turret", {0}, {2}}};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}, {"turret", {1}, {3}, {4}, {5}}};
                numLimitedPositions = 3;
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
        acre_infantryPhonePosition[] = {-1.025, -3.4, -0.75};

        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(ACRE, RackA);
                shortName = ECSTRING(ACRE, RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"turret", {4}}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };
    };

    class gm_fuchsa0_reconnaissance_base: gm_fuchsa0_base
    {
        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = ECSTRING(ACRE, BV);
                shortName = ECSTRING(ACRE, BVShort);
                allowedPositions[] = {"driver", {"turret", {0}, {4}}};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}, {"turret", {1}, {2}, {3}, {5}}};
                numLimitedPositions = 3;
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
        acre_infantryPhonePosition[] = {-1.025, -3.4, -0.75};

        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(ACRE, RackA);
                shortName = ECSTRING(ACRE, RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"turret", {3}}};
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
                allowedPositions[] = {{"turret", {3}}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };
    };

    class gm_fuchsa0_command_base: gm_fuchsa0_base
    {
        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = ECSTRING(ACRE, BV);
                shortName = ECSTRING(ACRE, BVShort);
                allowedPositions[] = {"driver", {"turret", {0}, {1}}};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}, {"turret", {2}, {3}}};
                numLimitedPositions = 3;
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
        acre_infantryPhonePosition[] = {-1.025, -3.4, -0.75};

        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(ACRE, RackA);
                shortName = ECSTRING(ACRE, RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"turret", {3}}};
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
                allowedPositions[] = {{"turret", {3}}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };

            class Rack_3
            {
                displayName = ECSTRING(ACRE, RackC);
                shortName = ECSTRING(ACRE, RackCShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"turret", {3}}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };
    };
};

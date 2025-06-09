class CfgVehicles
{
    class gm_tracked_base;
    class gm_tracked_APC_base: gm_tracked_base {
        class UserActions;
    };

    class gm_m113_base: gm_tracked_APC_base
    {
        maximumLoad = 10000;

        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = ECSTRING(ACRE,BV);
                shortName = ECSTRING(ACRE,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 2;
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
                allowedPositions[] = {"crew"};
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
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };

        class UserActions: UserActions
        {
            class ramp_open
            {
                displayName = CSTRING(openRamp);
                position = "actionPoint";
                radius = 2;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(alive this) && {this doorPhase 'hatch_2_1_source' isEqualTo 0} && {(call CBA_fnc_currentUnit) in this}";
                statement = "this animateDoor ['hatch_2_1_source', 1, false];";
            };

            class ramp_close
            {
                displayName = CSTRING(closeRamp);
                position = "actionPoint";
                radius = 2;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(alive this) && {this doorPhase 'hatch_2_1_source' isEqualTo 1} && {(call CBA_fnc_currentUnit) in this}";
                statement = "this animateDoor ['hatch_2_1_source', 0, false];";
            };
        };
    };

    class gm_m113a1g_base;
    class gm_m113a1g_command_base: gm_m113a1g_base
    {
        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(ACRE,RackA);
                shortName = ECSTRING(ACRE,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
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
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };

            class Rack_3
            {
                displayName = ECSTRING(ACRE,RackC);
                shortName = ECSTRING(ACRE,RackCShort);
                componentName = "ACRE_SEM90"; // Should actually be a XK405 but we don't have this in ACRE
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };
    };

    class gm_m113a1g_mortar_base: gm_m113a1g_base
    {
        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(ACRE,RackA);
                shortName = ECSTRING(ACRE,RackAShort);
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

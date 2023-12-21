#define DOOR_USERACTION(id,index) \
    class OpenDoor_##id { \
        displayName = "$STR_dn_out_o_door"; \
        displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
        onlyForPlayer = 0; \
        radius = 1.2; \
        priority = 0.1; \
        position = QUOTE(Door_##id##_trigger); \
        condition = QUOTE((this animationPhase 'Door_##id##_rot') < 0.5); \
        statement = QUOTE([ARR_3(this,'Door_##id',1)] call FUNC(door)); \
    }; \
    class CloseDoor_##id##: OpenDoor_##id { \
        displayName = "$STR_dn_out_c_door"; \
        priority = 0.5; \
        condition = QUOTE((this animationPhase 'Door_##id##_rot') >= 0.5); \
        statement = QUOTE([ARR_3(this,'Door_##id',0)] call FUNC(door)); \
    }

class CfgVehicles {
    class House_F;
    class Land_WL_House_01_A: House_F {
        armor = 100000;

        // Replace Open/Close door actions because
        // they do not check if the door is locked in the original
        class UserActions {
            DOOR_USERACTION(01,1);
            DOOR_USERACTION(02,2);
            DOOR_USERACTION(03,3);
            DOOR_USERACTION(04,4);
            DOOR_USERACTION(05,5);
            DOOR_USERACTION(06,6);
            DOOR_USERACTION(07,7);
            DOOR_USERACTION(08,8);
            DOOR_USERACTION(09,9);
            DOOR_USERACTION(10,10);
            DOOR_USERACTION(11,11);
            DOOR_USERACTION(12,12);
            DOOR_USERACTION(13,13);
        };
    };

    class Land_WL_House_02_A: House_F {
        armor = 100000;

        class UserActions {
            DOOR_USERACTION(01,1);
            DOOR_USERACTION(02,2);
            DOOR_USERACTION(03,3);
            DOOR_USERACTION(04,4);
            DOOR_USERACTION(05,5);
            DOOR_USERACTION(06,6);
            DOOR_USERACTION(07,7);
            DOOR_USERACTION(08,8);
            DOOR_USERACTION(09,9);
            DOOR_USERACTION(10,10);
            DOOR_USERACTION(11,11);
        };
    };

    class Land_WL_House_03_A: House_F {
        armor = 100000;

        class UserActions {
            DOOR_USERACTION(01,1);
            DOOR_USERACTION(02,2);
            DOOR_USERACTION(03,3);
            DOOR_USERACTION(04,4);
            DOOR_USERACTION(05,5);
            DOOR_USERACTION(06,6);
        };
    };

    class Land_WL_House_04_A: House_F {
        armor = 100000;

        class UserActions {
            DOOR_USERACTION(01,1);
            DOOR_USERACTION(02,2);
            DOOR_USERACTION(03,3);
            DOOR_USERACTION(04,4);
            DOOR_USERACTION(05,5);
        };
    };

    class Land_WL_House_05_A: House_F {
        armor = 100000;

        class UserActions {
            DOOR_USERACTION(01,1);
        };
    };
};

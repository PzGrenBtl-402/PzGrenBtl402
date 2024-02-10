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

#define HOUSE_ARMOR 100000
#define SET_ARMOR(BASE,CLS) class CLS: BASE { armor = HOUSE_ARMOR; }
#define SET_GLASS_HITPOINT_ARMOR(id) class Glass_##id##_hitpoint { armor = 0.00001; }

class CfgVehicles {
    class House_F;
    class Land_WL_House_01_A: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(01);
            SET_GLASS_HITPOINT_ARMOR(02);
            SET_GLASS_HITPOINT_ARMOR(03);
            SET_GLASS_HITPOINT_ARMOR(04);
            SET_GLASS_HITPOINT_ARMOR(05);
            SET_GLASS_HITPOINT_ARMOR(06);
            SET_GLASS_HITPOINT_ARMOR(07);
            SET_GLASS_HITPOINT_ARMOR(08);
            SET_GLASS_HITPOINT_ARMOR(09);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
            SET_GLASS_HITPOINT_ARMOR(15);
            SET_GLASS_HITPOINT_ARMOR(16);
            SET_GLASS_HITPOINT_ARMOR(17);
            SET_GLASS_HITPOINT_ARMOR(18);
            SET_GLASS_HITPOINT_ARMOR(19);
            SET_GLASS_HITPOINT_ARMOR(20);
            SET_GLASS_HITPOINT_ARMOR(21);
            SET_GLASS_HITPOINT_ARMOR(22);
            SET_GLASS_HITPOINT_ARMOR(23);
            SET_GLASS_HITPOINT_ARMOR(24);
            SET_GLASS_HITPOINT_ARMOR(25);
        };

        // Replace Open/Close door actions because
        // they do not check if the door is locked in the original

        // The door inheritance structure was also changed to make more sense
        // This will cause Updating base class log messages in the RPT
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
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(01);
            SET_GLASS_HITPOINT_ARMOR(02);
            SET_GLASS_HITPOINT_ARMOR(03);
            SET_GLASS_HITPOINT_ARMOR(04);
            SET_GLASS_HITPOINT_ARMOR(05);
            SET_GLASS_HITPOINT_ARMOR(06);
            SET_GLASS_HITPOINT_ARMOR(07);
            SET_GLASS_HITPOINT_ARMOR(08);
            SET_GLASS_HITPOINT_ARMOR(09);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
            SET_GLASS_HITPOINT_ARMOR(15);
            SET_GLASS_HITPOINT_ARMOR(16);
            SET_GLASS_HITPOINT_ARMOR(17);
            SET_GLASS_HITPOINT_ARMOR(18);
            SET_GLASS_HITPOINT_ARMOR(19);
            SET_GLASS_HITPOINT_ARMOR(20);
            SET_GLASS_HITPOINT_ARMOR(21);
            SET_GLASS_HITPOINT_ARMOR(22);
            SET_GLASS_HITPOINT_ARMOR(23);
            SET_GLASS_HITPOINT_ARMOR(24);
        };

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
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(01);
            SET_GLASS_HITPOINT_ARMOR(02);
            SET_GLASS_HITPOINT_ARMOR(03);
            SET_GLASS_HITPOINT_ARMOR(04);
            SET_GLASS_HITPOINT_ARMOR(05);
            SET_GLASS_HITPOINT_ARMOR(06);
            SET_GLASS_HITPOINT_ARMOR(07);
            SET_GLASS_HITPOINT_ARMOR(08);
            SET_GLASS_HITPOINT_ARMOR(09);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
            SET_GLASS_HITPOINT_ARMOR(15);
            SET_GLASS_HITPOINT_ARMOR(16);
            SET_GLASS_HITPOINT_ARMOR(17);
            SET_GLASS_HITPOINT_ARMOR(18);
            SET_GLASS_HITPOINT_ARMOR(19);
            SET_GLASS_HITPOINT_ARMOR(20);
            SET_GLASS_HITPOINT_ARMOR(21);
            SET_GLASS_HITPOINT_ARMOR(22);
        };

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
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(01);
            SET_GLASS_HITPOINT_ARMOR(02);
            SET_GLASS_HITPOINT_ARMOR(03);
            SET_GLASS_HITPOINT_ARMOR(04);
            SET_GLASS_HITPOINT_ARMOR(05);
            SET_GLASS_HITPOINT_ARMOR(06);
            SET_GLASS_HITPOINT_ARMOR(07);
            SET_GLASS_HITPOINT_ARMOR(08);
            SET_GLASS_HITPOINT_ARMOR(09);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
            SET_GLASS_HITPOINT_ARMOR(15);
        };

        class UserActions {
            DOOR_USERACTION(01,1);
            DOOR_USERACTION(02,2);
            DOOR_USERACTION(03,3);
            DOOR_USERACTION(04,4);
            DOOR_USERACTION(05,5);
        };
    };

    class Land_WL_House_05_A: House_F {
        armor = HOUSE_ARMOR;

        class UserActions {
            DOOR_USERACTION(01,1);
        };
    };

    class House;
    // HAG_Garage
    SET_ARMOR(House,Land_Hag_Garage);

    // Hag_Barn_1
    SET_ARMOR(House,Land_Hag_barn_1);

    // HAG_bridges
    SET_ARMOR(House,Land_Hag_pillar);
    SET_ARMOR(House,Land_hag_bridge_rail);
    SET_ARMOR(House,land_hag_bridge_road);
};

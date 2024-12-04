class CfgVehicles {
    // Orininal armor for houses 2000
    #define HOUSE_ARMOR 100000
    #define SET_ARMOR(BASE,CLS) class CLS: BASE { armor = HOUSE_ARMOR; }
    // Original 0.001 -> 2 / 2000
    #define SET_GLASS_HITPOINT_ARMOR(id) class Glass_##id##_hitpoint { armor = QUOTE(2 / HOUSE_ARMOR); }

    class House_F;
    SET_ARMOR(House_F,Land_CoalPlant_01_LoadingHouse_F);
    SET_ARMOR(House_F,land_smokestack_01_factory_f);
    SET_ARMOR(House_F,land_powerstation_01_f);

    SET_ARMOR(House_F,Land_GH_House_1_F);
    SET_ARMOR(House_F,Land_GH_House_2_F);

    class Land_GuardHouse_02_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
        };
    };
    SET_ARMOR(House_F,Land_GuardHouse_03_F);

    class Land_House_1B01_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
        };
    };
    class Land_House_1W01_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
        };
    };
    class Land_House_1W02_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
        };
    };
    class Land_House_1W03_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
        };
    };
    class Land_House_1W04_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
        };
    };
    class Land_House_1W05_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
        };
    };
    class Land_House_1W06_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
        };
    };
    class Land_House_1W07_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
        };
    };
    class Land_House_1W08_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
        };
    };
    class Land_House_1W09_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
        };
    };
    class Land_House_1W10_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
        };
    };
    class Land_House_1W11_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
            SET_GLASS_HITPOINT_ARMOR(15);
        };
    };
    class Land_House_1W12_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
        };
    };
    SET_ARMOR(House_F,Land_House_1W13_F);
    class Land_House_2B01_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
        };
    };
    class Land_House_2B02_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
        };
    };
    class Land_House_2B03_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
        };
    };
    class Land_House_2B04_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
        };
    };
    class Land_House_2W01_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
        };
    };
    class Land_House_2W02_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
        };
    };
    class Land_House_2W03_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
        };
    };
    class Land_House_2W04_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
        };
    };
    class Land_House_2W05_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
        };
    };

    SET_ARMOR(House_F,Land_House_Big_01_F);
    SET_ARMOR(House_F,Land_House_Big_02_F);
    class Land_House_Big_03_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
            SET_GLASS_HITPOINT_ARMOR(15);
            SET_GLASS_HITPOINT_ARMOR(16);
        };
    };
    class Land_House_Big_04_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
            SET_GLASS_HITPOINT_ARMOR(26);
            SET_GLASS_HITPOINT_ARMOR(27);
            SET_GLASS_HITPOINT_ARMOR(28);
            SET_GLASS_HITPOINT_ARMOR(29);
            SET_GLASS_HITPOINT_ARMOR(30);
            SET_GLASS_HITPOINT_ARMOR(31);
        };
    };
    SET_ARMOR(House_F,Land_House_Big_05_F);

    SET_ARMOR(House_F,Land_LightHouse_F);
    SET_ARMOR(House_F,Land_Lighthouse_01_noLight_F);
    SET_ARMOR(House_F,Land_Lighthouse_03_base_F);

    SET_ARMOR(House_F,Land_Mine_01_warehouse_F);
    class Land_Warehouse_03_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
        };
    };

    SET_ARMOR(House_F,Land_d_House_Big_01_V1_F);
    SET_ARMOR(House_F,Land_d_House_Big_02_V1_F);
    SET_ARMOR(House_F,Land_d_House_Small_01_V1_F);
    SET_ARMOR(House_F,Land_d_Stone_HouseBig_V1_F);
    SET_ARMOR(House_F,Land_d_Stone_HouseSmall_V1_F);

    class Land_i_House_Big_01_V1_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
        };
    };
    class Land_i_House_Big_02_V1_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
        };
    };
    class Land_i_House_Small_01_V1_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
        };
    };
    class Land_i_House_Small_03_V1_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
        };
    };
    SET_ARMOR(House_F,Land_i_Stone_HouseBig_V1_F);
    SET_ARMOR(House_F,Land_i_Stone_HouseSmall_V1_F);

    SET_ARMOR(House_F,Land_Barn_01_brown_F);
    SET_ARMOR(House_F,Land_Barn_01_grey_F);
    SET_ARMOR(House_F,Land_Barn_02_F);
    SET_ARMOR(House_F,Land_Barn_03_large_F);
    SET_ARMOR(House_F,Land_Barn_03_small_F);
    SET_ARMOR(House_F,Land_Barn_04_F);
    class Land_Cowshed_01_A_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
        };
    };
    class Land_Cowshed_01_B_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
    };
    class Land_Cowshed_01_C_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
        };
    };
    SET_ARMOR(House_F,Land_Shed_Big_F);
    SET_ARMOR(House_F,Land_TTowerBig_1_F);
    SET_ARMOR(House_F,Land_TTowerBig_2_F);
    SET_ARMOR(House_F,Land_MetalShelter_01_F);
    SET_ARMOR(House_F,Land_MetalShelter_02_F);
    SET_ARMOR(House_F,Land_dp_bigTank_F);
    SET_ARMOR(House_F,Land_dp_bigTank_old_F);
    SET_ARMOR(House_F,Land_Shed_Small_F);
    SET_ARMOR(House_F,Land_Hangar_F);
    SET_ARMOR(House_F,Land_cmp_Shed_F);
    class Land_IndustrialShed_01_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
            SET_GLASS_HITPOINT_ARMOR(26);
        };
    };
    class Land_Supermarket_01_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
    };
    class Land_Supermarket_01_malden_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
    };

    class Land_i_Barracks_V1_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
            SET_GLASS_HITPOINT_ARMOR(26);
            SET_GLASS_HITPOINT_ARMOR(27);
            SET_GLASS_HITPOINT_ARMOR(28);
            SET_GLASS_HITPOINT_ARMOR(29);
            SET_GLASS_HITPOINT_ARMOR(30);
            SET_GLASS_HITPOINT_ARMOR(31);
            SET_GLASS_HITPOINT_ARMOR(32);
            SET_GLASS_HITPOINT_ARMOR(33);
            SET_GLASS_HITPOINT_ARMOR(34);
            SET_GLASS_HITPOINT_ARMOR(35);
            SET_GLASS_HITPOINT_ARMOR(36);
            SET_GLASS_HITPOINT_ARMOR(37);
            SET_GLASS_HITPOINT_ARMOR(38);
            SET_GLASS_HITPOINT_ARMOR(39);
            SET_GLASS_HITPOINT_ARMOR(40);
            SET_GLASS_HITPOINT_ARMOR(41);
            SET_GLASS_HITPOINT_ARMOR(42);
            SET_GLASS_HITPOINT_ARMOR(43);
            SET_GLASS_HITPOINT_ARMOR(44);
            SET_GLASS_HITPOINT_ARMOR(45);
            SET_GLASS_HITPOINT_ARMOR(46);
            SET_GLASS_HITPOINT_ARMOR(47);
            SET_GLASS_HITPOINT_ARMOR(48);
            SET_GLASS_HITPOINT_ARMOR(49);
            SET_GLASS_HITPOINT_ARMOR(50);
            SET_GLASS_HITPOINT_ARMOR(51);
            SET_GLASS_HITPOINT_ARMOR(52);
            SET_GLASS_HITPOINT_ARMOR(53);
            SET_GLASS_HITPOINT_ARMOR(54);
            SET_GLASS_HITPOINT_ARMOR(55);
            SET_GLASS_HITPOINT_ARMOR(56);
            SET_GLASS_HITPOINT_ARMOR(57);
            SET_GLASS_HITPOINT_ARMOR(58);
            SET_GLASS_HITPOINT_ARMOR(59);
            SET_GLASS_HITPOINT_ARMOR(60);
            SET_GLASS_HITPOINT_ARMOR(61);
            SET_GLASS_HITPOINT_ARMOR(62);
        };
    };

    class i_House_Small_01_b_base_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
        };
    };

    class Land_i_Shed_Ind_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
    };

    class Land_MilOffices_V1_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
            SET_GLASS_HITPOINT_ARMOR(26);
            SET_GLASS_HITPOINT_ARMOR(27);
            SET_GLASS_HITPOINT_ARMOR(28);
            SET_GLASS_HITPOINT_ARMOR(29);
            SET_GLASS_HITPOINT_ARMOR(30);
            SET_GLASS_HITPOINT_ARMOR(31);
            SET_GLASS_HITPOINT_ARMOR(32);
        };
    };

    class i_House_Big_01_b_base_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
        };
    };

    class Land_Radar_01_HQ_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
            SET_GLASS_HITPOINT_ARMOR(26);
            SET_GLASS_HITPOINT_ARMOR(27);
            SET_GLASS_HITPOINT_ARMOR(28);
            SET_GLASS_HITPOINT_ARMOR(29);
            SET_GLASS_HITPOINT_ARMOR(30);
            SET_GLASS_HITPOINT_ARMOR(31);
            SET_GLASS_HITPOINT_ARMOR(32);
            SET_GLASS_HITPOINT_ARMOR(33);
        };
    };

    class House_Small_F;
    SET_ARMOR(House_Small_F,Land_House_Small_01_F);
    SET_ARMOR(House_Small_F,Land_House_Small_02_F);
    SET_ARMOR(House_Small_F,Land_House_Small_03_F);
    SET_ARMOR(House_Small_F,Land_House_Small_04_F);
    SET_ARMOR(House_Small_F,Land_House_Small_05_F);
    SET_ARMOR(House_Small_F,Land_House_Small_06_F);

    SET_ARMOR(House_Small_F,Land_TBox_F);
    SET_ARMOR(House_Small_F,Land_GarageShelter_01_F);
    SET_ARMOR(House_Small_F,Land_i_Garage_V1_F);

    class i_House_Small_02_b_base_F: House_Small_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
        };
    };

    class Land_Workshop_01_F: House_Small_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
        };
    };

    SET_ARMOR(House_Small_F,Land_Workshop_02_F);

    class Land_Workshop_03_F: House_Small_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
        };
    };

    class Land_Workshop_04_F: House_Small_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
        };
    };

    class Land_Workshop_05_F: House_Small_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
        };
    };

    class Land_Factory_02_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
            SET_GLASS_HITPOINT_ARMOR(15);
        };
    };

    class Land_GarageOffice_01_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
        };
    };

    class Land_GarageRow_01_large_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
        };
    };

    class Land_CementWorks_01_base_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
            SET_GLASS_HITPOINT_ARMOR(26);
            SET_GLASS_HITPOINT_ARMOR(27);
            SET_GLASS_HITPOINT_ARMOR(28);
            SET_GLASS_HITPOINT_ARMOR(29);
            SET_GLASS_HITPOINT_ARMOR(30);
            SET_GLASS_HITPOINT_ARMOR(31);
            SET_GLASS_HITPOINT_ARMOR(32);
        };
    };

    class Land_Airport_Tower_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
            SET_GLASS_HITPOINT_ARMOR(26);
            SET_GLASS_HITPOINT_ARMOR(27);
            SET_GLASS_HITPOINT_ARMOR(28);
            SET_GLASS_HITPOINT_ARMOR(29);
            SET_GLASS_HITPOINT_ARMOR(30);
            SET_GLASS_HITPOINT_ARMOR(31);
            SET_GLASS_HITPOINT_ARMOR(32);
            SET_GLASS_HITPOINT_ARMOR(33);
            SET_GLASS_HITPOINT_ARMOR(34);
        };
    };

    class Land_Barracks_02_F: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
        };
    };

    class land_coalplant_01_mainbuilding_f: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
            SET_GLASS_HITPOINT_ARMOR(10);
            SET_GLASS_HITPOINT_ARMOR(11);
            SET_GLASS_HITPOINT_ARMOR(12);
            SET_GLASS_HITPOINT_ARMOR(13);
            SET_GLASS_HITPOINT_ARMOR(14);
        };
    };

    class land_i_shed_ind_old_f: House_F {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
            SET_GLASS_HITPOINT_ARMOR(6);
            SET_GLASS_HITPOINT_ARMOR(7);
            SET_GLASS_HITPOINT_ARMOR(8);
            SET_GLASS_HITPOINT_ARMOR(9);
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
    };
};

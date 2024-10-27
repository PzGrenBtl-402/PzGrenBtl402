class CfgVehicles {
    // Orininal armor for houses 2000
    #define HOUSE_ARMOR 100000
    #define SET_ARMOR(BASE,CLS) class CLS: BASE { armor = HOUSE_ARMOR; }
    // Original 0.001 -> 2 / 2000
    #define SET_GLASS_HITPOINT_ARMOR(id) class Glass_##id##_hitpoint { armor = QUOTE(2 / HOUSE_ARMOR); }

    // CUP_Ind_Workshop01
    class House;
    class Land_Ind_Workshop01_01: House {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
        };
    };
    class Land_Ind_Workshop01_02: House {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
        };
    };
    class Land_Ind_Workshop01_03: House {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
        };
    };
    class Land_Ind_Workshop01_04: House {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
            SET_GLASS_HITPOINT_ARMOR(5);
        };
    };
    SET_ARMOR(House,Land_Ind_Workshop01_box);
    class Land_Ind_Workshop01_L: House {
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

    // CUP_Buildings_Config
    SET_ARMOR(House,Land_Sara_Domek_sedy);
    SET_ARMOR(House,Land_Sara_Dum_podloubi03klaster);
    SET_ARMOR(House,Land_Sara_Dum_podloubi03rovny);
    SET_ARMOR(House,Land_Sara_domek01);
    SET_ARMOR(House,Land_Sara_domek02);
    SET_ARMOR(House,Land_Sara_domek03);
    SET_ARMOR(House,Land_Sara_domek04);
    SET_ARMOR(House,Land_Sara_domek05);
    SET_ARMOR(House,Land_Sara_domek_hospoda);
    SET_ARMOR(House,Land_Sara_domek_kovarna);
    SET_ARMOR(House,Land_Sara_domek_podhradi_1);
    SET_ARMOR(House,Land_Sara_domek_rosa);
    SET_ARMOR(House,Land_Sara_domek_ruina);
    SET_ARMOR(House,Land_Sara_domek_sedy_bez);
    SET_ARMOR(House,Land_Sara_domek_vilka);
    SET_ARMOR(House,Land_Sara_domek_zluty);
    SET_ARMOR(House,Land_Sara_domek_zluty_bez);
    SET_ARMOR(House,Land_Sara_hasic_zbroj);
    SET_ARMOR(House,Land_Sara_stodola);
    SET_ARMOR(House,Land_Sara_stodola2);
    SET_ARMOR(House,Land_Sara_stodola3);
    SET_ARMOR(House,Land_Sara_zluty_statek);
    class Land_Sara_zluty_statek_in: House {
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

    SET_ARMOR(House,Land_Stodola_old_open);
    SET_ARMOR(House,Land_Deutshe_mini);
    SET_ARMOR(House,Land_Tovarna2);
    SET_ARMOR(House,Land_Garaz);
    class Land_Hangar_2: House {
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
    SET_ARMOR(House,Land_Panelak);
    SET_ARMOR(House,Land_Cihlovej_Dum);
    SET_ARMOR(House,Land_Cihlovej_Dum_in);
    class Land_House_y: House {
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

    SET_ARMOR(House,Land_AfDum_mesto2);
    SET_ARMOR(House,Land_AfDum_mesto2L);
    SET_ARMOR(House,Land_AfDum_mesto3);
    SET_ARMOR(House,Land_Dum01);
    SET_ARMOR(House,Land_Dum02);
    SET_ARMOR(House,Land_Dum_istan2);
    SET_ARMOR(House,Land_Dum_istan2_01);
    SET_ARMOR(House,Land_Dum_istan2_02);
    SET_ARMOR(House,Land_Dum_istan2_03);
    SET_ARMOR(House,Land_Dum_istan2_03a);
    SET_ARMOR(House,Land_Dum_istan2_04a);
    SET_ARMOR(House,Land_Dum_istan2b);
    SET_ARMOR(House,Land_Dum_istan3);
    SET_ARMOR(House,Land_Dum_istan3_hromada);
    SET_ARMOR(House,Land_Dum_istan3_hromada2);
    SET_ARMOR(House,Land_Dum_istan3_pumpa);
    SET_ARMOR(House,Land_Dum_istan4);
    SET_ARMOR(House,Land_Dum_istan4_big);
    SET_ARMOR(House,Land_Dum_istan4_big_inverse);
    SET_ARMOR(House,Land_Dum_istan4_detaily1);
    SET_ARMOR(House,Land_Dum_istan4_inverse);
    SET_ARMOR(House,Land_Dum_m2);
    SET_ARMOR(House,Land_Dum_mesto);
    SET_ARMOR(House,Land_Dum_mesto2);
    SET_ARMOR(House,Land_Dum_mesto2l);
    SET_ARMOR(House,Land_Dum_mesto3);
    SET_ARMOR(House,Land_Dum_mesto3_istan);
    SET_ARMOR(House,Land_Dum_mesto_in_bare);
    SET_ARMOR(House,Land_Dum_olez_istan1_closed);
    SET_ARMOR(House,Land_Dum_olez_istan2);
    class Land_Dum_olez_istan2_maly: House {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
        };
    };
    SET_ARMOR(House,Land_Dum_olez_istan2_maly2);
    SET_ARMOR(House,Land_Dum_olez_istan2_maly_closed);
    SET_ARMOR(House,Land_Dum_olezlina_closed);
    SET_ARMOR(House,Land_Dum_rasovna);
    SET_ARMOR(House,Land_Dum_zboreny);
    SET_ARMOR(House,Land_Dum_zboreny_total);
    SET_ARMOR(House,Land_Dumruina);
    SET_ARMOR(House,Land_Dumruina_mini);
    SET_ARMOR(House,Land_Hruzdum);
    SET_ARMOR(House,land_cihlovej_dum_mini_IBR);

    // CUP_CAStructuresHouse_HouseBT
    class Land_HouseB_Tenement: House {
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

    // CUP_CAHouseBlock_A
    SET_ARMOR(House,Land_HouseBlock_A1);
    // CUP_CAHouseBlock_B
    SET_ARMOR(House,Land_HouseBlock_B1);
    // CUP_CAHouseBlock_C
    SET_ARMOR(House,Land_HouseBlock_C1);
    // CUP_CAHouseBlock_D
    SET_ARMOR(House,Land_HouseBlock_D1);

    // CUP_CAStructuresHouse_HouseV2
    SET_ARMOR(House,Land_HouseV2_01A);
    SET_ARMOR(House,Land_HouseV2_01A_dam);
    SET_ARMOR(House,Land_HouseV2_01B_dam);
    SET_ARMOR(House,Land_HouseV2_03B_dam);
    SET_ARMOR(House,Land_HouseV2_03_dam);
    SET_ARMOR(House,Land_HouseV2_05);

    // CUP_CAStructuresHouse_HouseV
    // SET_ARMOR(House,Land_HouseV_1I1);
    SET_ARMOR(House,Land_HouseV_1I1_dam);
    SET_ARMOR(House,Land_HouseV_1I2);
    class Land_HouseV_1I4: House {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
        };
    };
    SET_ARMOR(House,Land_HouseV_2L_dam);

    // CUP_CAStructures_Mil
    class Land_Mil_Guardhouse: House {
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
    SET_ARMOR(House,Land_Mil_Guardhouse_no_interior_CUP);
    class Land_Mil_House: House {
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
    SET_ARMOR(House,Land_Mil_House_no_interior_CUP);

    // CUP_CAStructures_Nav
    SET_ARMOR(House,Land_NAV_Lighthouse);

    // CUP_Rail_House_01
    SET_ARMOR(House,Land_Rail_House_01);

    // CUP_CAStructuresHouse_a_stationhouse
    class Land_a_stationhouse: House {
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
        };
    };

    // CUP_Ind_Garage01
    SET_ARMOR(House,Land_Ind_Garage01);

    // CUP_Ind_Vysypka
    SET_ARMOR(House,Land_Ind_Vysypka);

    // CUP_A_GeneralStore_01
    class Land_A_GeneralStore_01: House {
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
        };
    };

    // CUP_CAStructuresHouse_A_Office01
    class Land_A_Office01: House {
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
        };
    };

    // CUP_CAStructuresHouse_A_Office02
    class Land_A_Office02: House {
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

    // CUP_CABuildings2_A_Pub
    class Land_A_Pub_01: House {
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
        };
    };

    class House_EP1;
    // CUP_CAStructures_E_Ind_Ind_Garage01
    SET_ARMOR(House_EP1,Land_Ind_Garage01_EP1);

    // CUP_CAStructures_E_HouseA_a_stationhouse
    class Land_A_Stationhouse_ep1: House_EP1 {
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
        };
    };

    // CUP_CAStructures_E_HouseC
    class Land_House_C_10_EP1: House_EP1 {
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
    class Land_House_C_11_EP1: House_EP1 {
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
    class Land_House_C_12_EP1: House_EP1 {
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
    class Land_House_C_1_EP1: House_EP1 {
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
        };
    };
    class Land_House_C_1_v2_EP1: House_EP1 {
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
        };
    };
    class Land_House_C_2_EP1: House_EP1 {
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
        };
    };
    class Land_House_C_3_EP1: House_EP1 {
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
        };
    };
    class Land_House_C_4_EP1: House_EP1 {
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
        };
    };
    class Land_House_C_5_EP1: House_EP1 {
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
    class Land_House_C_5_V1_EP1: House_EP1 {
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
        };
    };
    class Land_House_C_5_V2_EP1: House_EP1 {
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
    class Land_House_C_5_V3_EP1: House_EP1 {
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
        };
    };
    class Land_House_C_9_EP1: House_EP1 {
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
        };
    };

    // CUP_CAStructures_E_HouseK
    class Land_House_K_2_basehide_EP1: House_EP1 {
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
    class Land_House_K_3_EP1: House_EP1 {
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
    class Land_House_K_5_EP1: House_EP1 {
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
    class Land_House_K_6_EP1: House_EP1 {
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
        };
    };
    class Land_House_K_7_EP1: House_EP1 {
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
    class Land_House_K_8_EP1: House_EP1 {
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

    // CUP_CAStructures_E_HouseL
    SET_ARMOR(House_EP1,Land_House_L_1_EP1);
    SET_ARMOR(House_EP1,Land_House_L_3_EP1);
    SET_ARMOR(House_EP1,Land_House_L_3_H_EP1);
    SET_ARMOR(House_EP1,Land_House_L_4_EP1);
    class Land_House_L_6_EP1: House_EP1 {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
            SET_GLASS_HITPOINT_ARMOR(4);
        };
    };
    class Land_House_L_7_EP1: House_EP1 {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
            SET_GLASS_HITPOINT_ARMOR(3);
        };
    };
    class Land_House_L_8_EP1: House_EP1 {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
        };
    };
    SET_ARMOR(House_EP1,Land_House_L_9_EP1);

    // CUP_CAStructures_E_Mil
    class Land_Mil_Barracks_EP1: House_EP1 {
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
    SET_ARMOR(House_EP1,Land_Mil_Barracks_L_EP1);
    SET_ARMOR(House_EP1,Land_Mil_Barracks_i_EP1);
    SET_ARMOR(House_EP1,Land_Mil_Barracks_no_interior_EP1_CUP);
    class Land_Mil_ControlTower_EP1: House_EP1 {
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
        };
    };
    SET_ARMOR(House_EP1,Land_Mil_ControlTower_no_interior_EP1_CUP);
    class Land_Mil_Guardhouse_EP1: House_EP1 {
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
    SET_ARMOR(House_EP1,Land_Mil_Guardhouse_no_interior_EP1_CUP);
    class Land_Mil_House_EP1: House_EP1 {
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
    SET_ARMOR(House_EP1,Land_Mil_House_no_interior_EP1_CUP);
    class Land_Mil_Repair_center_EP1: House_EP1 {
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
    class Land_Mil_hangar_EP1: House_EP1 {
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

    // CUP_CAStructures_E_HouseA_A_Minaret
    SET_ARMOR(House_EP1,Land_A_Minaret_EP1);
    SET_ARMOR(House_EP1,Land_A_Minaret_Porto_EP1);
    SET_ARMOR(House_EP1,Land_A_Minaret_dam_EP1);
    SET_ARMOR(House_EP1,Land_A_Minaret_porto_dam_EP1);

    // CUP_CAStructures_E_HouseA_A_Mosque_big
    class Land_A_Mosque_big_addon_EP1: House_EP1 {
        armor = HOUSE_ARMOR;

        class HitPoints {
            SET_GLASS_HITPOINT_ARMOR(1);
            SET_GLASS_HITPOINT_ARMOR(2);
        };
    };
    class Land_A_Mosque_big_hq_EP1: House_EP1 {
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
    SET_ARMOR(House_EP1,Land_A_Mosque_big_minaret_1_EP1);
    SET_ARMOR(House_EP1,Land_A_Mosque_big_minaret_1_dam_EP1);
    SET_ARMOR(House_EP1,Land_A_Mosque_big_minaret_2_EP1);
    SET_ARMOR(House_EP1,Land_A_Mosque_big_minaret_2_dam_EP1);

    // CUP_CAStructures_E_HouseA_A_Mosque_small
    SET_ARMOR(House_EP1,Land_A_Mosque_small_1_EP1);
    SET_ARMOR(House_EP1,Land_A_Mosque_small_1_dam_EP1);
    SET_ARMOR(House_EP1,Land_A_Mosque_small_2_EP1);
    SET_ARMOR(House_EP1,Land_A_Mosque_small_2_dam_EP1);

    // CUP_CAStructures_E_HouseA_A_Villa
    class Land_A_Villa_EP1: House_EP1 {
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
            SET_GLASS_HITPOINT_ARMOR(63);
            SET_GLASS_HITPOINT_ARMOR(64);
            SET_GLASS_HITPOINT_ARMOR(65);
            SET_GLASS_HITPOINT_ARMOR(66);
            SET_GLASS_HITPOINT_ARMOR(67);
            SET_GLASS_HITPOINT_ARMOR(68);
            SET_GLASS_HITPOINT_ARMOR(69);
        };
    };
};

class CfgWeapons {
    class ItemCore;
    class HeadgearItem;

    #define OVERWRITE_ITEM_INFO \
    class ItemInfo: HeadgearItem { \
        allowedslots[] = {TYPE_HEADGEAR, TYPE_VEST, TYPE_UNIFORM, TYPE_BACKPACK}; \
        mass = 1; \
    }

    class BWA3_OpsCore_FastMT: ItemCore {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_Peltor: BWA3_OpsCore_FastMT {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_SOF: BWA3_OpsCore_FastMT {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_Fleck: BWA3_OpsCore_FastMT {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_Peltor_Fleck: BWA3_OpsCore_FastMT_Fleck {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_SOF_Fleck: BWA3_OpsCore_FastMT_Fleck {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_Tropen: BWA3_OpsCore_FastMT {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_Peltor_Tropen: BWA3_OpsCore_FastMT_Tropen {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_SOF_Tropen: BWA3_OpsCore_FastMT_Tropen {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_Multi: BWA3_OpsCore_FastMT {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_Peltor_Multi: BWA3_OpsCore_FastMT_Multi {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_OpsCore_FastMT_SOF_Multi: BWA3_OpsCore_FastMT_Multi {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_CrewmanKSK: ItemCore {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_Knighthelm: ItemCore {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_M92_Fleck: ItemCore {
        OVERWRITE_ITEM_INFO;
    };

    class BWA3_Beret_PzGren: ItemCore {
        OVERWRITE_ITEM_INFO;
    };
};

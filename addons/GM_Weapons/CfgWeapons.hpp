class CfgWeapons {
    class gm_item_base;
    class gm_inventoryItem_ToolKit_base;
    class gm_boltcutter_base: gm_item_base {
        ACE_isWirecutter = 1;
        ACE_isTool = 1; // sort in ACE Arsenal Tools tab
        class ItemInfo: gm_inventoryItem_ToolKit_base {
            mass = 25; // Previously 120
        };
    };
};

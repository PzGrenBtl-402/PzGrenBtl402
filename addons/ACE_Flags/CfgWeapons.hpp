class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    // Make all flags very light
    class ace_flags_white: ACE_ItemCore {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};

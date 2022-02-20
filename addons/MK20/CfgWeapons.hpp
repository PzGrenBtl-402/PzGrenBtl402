class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class GVAR(ammo_base): CBA_MiscItem {
        author = ECSTRING(Main, authors);
        scope = 0;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
        GVAR(fillAmount) = 25; // 25 Patronen
    };

    class GVAR(he_ammo): GVAR(ammo_base) {
        scope = 1;
        displayName = CSTRING(heAmmoDisplayName);
        descriptionShort = CSTRING(heAmmoDescription);
        descriptionUse = CSTRING(heAmmoDescription);
        picture = QPATHTOF(data\ui\he_ammo_item_icon.paa);
    };
    class GVAR(ap_ammo): GVAR(ammo_base) {
        scope = 1;
        displayName = CSTRING(apAmmoDisplayName);
        descriptionShort = CSTRING(apAmmoDescription);
        descriptionUse = CSTRING(apAmmoDescription);
        picture = QPATHTOF(data\ui\ap_ammo_item_icon.paa);
    };
};

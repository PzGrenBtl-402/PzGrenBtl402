class CfgMagazines {
    class CA_Magazine;
    class GVAR(ammo_base): CA_Magazine {
        author = ECSTRING(Main,authors);
        scope = 0;
    };

    class GVAR(mk20_he_ammo): GVAR(ammo_base) {
        scope = 2;
        displayName = CSTRING(mk20HeAmmoDisplayName);
        descriptionShort = CSTRING(mk20HeAmmoDescription);
        descriptionUse = CSTRING(mk20HeAmmoDescription);
        picture = QPATHTOF(data\ui\mk20_he_ammo_item_icon.paa);
        mass = 20;
        count = 25; // 25 Patronen
    };
    class GVAR(mk20_ap_ammo): GVAR(ammo_base) {
        scope = 2;
        displayName = CSTRING(mk20ApAmmoDisplayName);
        descriptionShort = CSTRING(mk20ApAmmoDescription);
        descriptionUse = CSTRING(mk20ApAmmoDescription);
        picture = QPATHTOF(data\ui\mk20_ap_ammo_item_icon.paa);
        mass = 20;
        count = 25; // 25 Patronen
    };

    class GVAR(smoke_3grenade_ammo): GVAR(ammo_base) {
        scope = 2;
        displayName = CSTRING(smoke3GrenadeAmmoDisplayName);
        descriptionShort = CSTRING(smoke3GrenadeAmmoDescription);
        descriptionUse = CSTRING(smoke3GrenadeAmmoDescription);
        picture = QPATHTOF(data\ui\smoke_3_ammo_item_icon.paa);
        mass = 15;
        count = 1;
    };
    class GVAR(smoke_4grenade_ammo): GVAR(ammo_base) {
        scope = 2;
        displayName = CSTRING(smoke4GrenadeAmmoDisplayName);
        descriptionShort = CSTRING(smoke4GrenadeAmmoDescription);
        descriptionUse = CSTRING(smoke4GrenadeAmmoDescription);
        picture = QPATHTOF(data\ui\smoke_4_ammo_item_icon.paa);
        mass = 20;
        count = 1;
    };
    class GVAR(smoke_6grenade_ammo): GVAR(ammo_base) {
        scope = 2;
        displayName = CSTRING(smoke6GrenadeAmmoDisplayName);
        descriptionShort = CSTRING(smoke6GrenadeAmmoDescription);
        descriptionUse = CSTRING(smoke6GrenadeAmmoDescription);
        picture = QPATHTOF(data\ui\smoke_6_ammo_item_icon.paa);
        mass = 30;
        count = 1;
    };
};

class CfgVehicles {
    class Item_Base_F;

    class GVAR(ammo_item_base): Item_Base_F {
        author = ECSTRING(Main, authors);
        scope = 0;
        scopeCurator = 0;
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";
        vehicleClass = "Items";
        model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
        class TransportItems {};
    };

    class GVAR(he_ammo_item_base): GVAR(ammo_item_base) {
        displayName = CSTRING(heAmmoDisplayName);
        scope = 2;
        scopeCurator = 2;
        class TransportItems {
            class GVAR(he_ammo) {
                name = QGVAR(he_ammo);
                count = 1;
            };
        };
    };
    class GVAR(ap_ammo_item_base): GVAR(ammo_item_base) {
        displayName = CSTRING(apAmmoDisplayName);
        scope = 2;
        scopeCurator = 2;
        class TransportItems {
            class GVAR(ap_ammo) {
                name = QGVAR(ap_ammo);
                count = 1;
            };
        };
    };
};

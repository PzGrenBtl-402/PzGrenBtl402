class CfgMagazines {
    class Redd_gmw_Belt_32;
    class GVAR(gmw_Belt_32): Redd_gmw_Belt_32 {
        scope = 2;
        displayName = CSTRING(DisplayName);
        descriptionShort = CSTRING(DescriptionShort);
        type = 256;  // Must be 256 to show up in Arsenal
        model = "\rnt_gmw_static\rnt_munkasten_gmw_h.p3d";
        picture = "\redd_vehicles_main\data\rnt_munkasten_gmw_ca.paa";
        ACE_isBelt = 1; // Enables belt linking for this magazine
        mass = 237;
    };
};

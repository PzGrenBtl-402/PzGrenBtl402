class CfgAmmo {
    class gm_HandGrenade_frag_base;
    class gm_HandGrenade_frag_dm51: gm_HandGrenade_frag_base {
        hit = 10;

        ace_frag_metal = 296;
        ace_frag_charge = 64;
        ace_frag_gurney_c = 2930;
        ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
    };

    class gm_HandGrenade_conc_base;
    class gm_HandGrenade_conc_dm51: gm_HandGrenade_conc_base {
        explosionEffectsRadius = 3;
        hit = 10;

        ace_frag_skip = 1;
    };

    class gm_handgrenade_frag_dm51a1: gm_HandGrenade_frag_dm51 {
        hit = 10;

        ace_frag_metal = 296;
        ace_frag_charge = 64;
        ace_frag_gurney_c = 2930;
        ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
    };

    class gm_HandGrenade_conc_dm51a1: gm_HandGrenade_conc_dm51 {
        explosionEffectsRadius = 3;
        hit = 10;

        ace_frag_skip = 1;
    };

    class gm_HandGrenade_prac_base;
    class gm_HandGrenade_pracfrag_dm58: gm_HandGrenade_prac_base {
        ace_frag_skip = 1;
    };

    class gm_HandGrenade_pracconc_dm58: gm_HandGrenade_prac_base {
        ace_frag_skip = 1;
    };
};

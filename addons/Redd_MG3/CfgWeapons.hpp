class CfgWeapons {
    class Redd_MG3;
    class Redd_MG3_Static: Redd_MG3 {
        magazineReloadTime = 0.1;
        autoReload = 1;
        ace_overheating_allowSwapBarrel = 1;
        ace_overheating_dispersion = 0.75;
        ace_overheating_mrbs = 2000;

        magazineWell[] = {GVAR(mg3_762x51)};
        magazines[] += { // ACE CSW needs all compatible magazines in this array for reloading
            "150Rnd_762x51_Box",
            "150Rnd_762x51_Box_Tracer"
        };
    };
};

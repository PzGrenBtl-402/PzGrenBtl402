class CfgWeapons {
    class Redd_MG3;
    class Redd_MG3_Static: Redd_MG3 {
        magazineWell[] += {QGVAR(mg3_762x51)};
        magazines[] += { // ACE CSW needs all compatible magazines in this array for reloading
            "BWA3_120Rnd_762x51_soft",
            "BWA3_120Rnd_762x51_Tracer_soft",
            "BWA3_120Rnd_762x51",
            "BWA3_120Rnd_762x51_Tracer"
        };
    };
};

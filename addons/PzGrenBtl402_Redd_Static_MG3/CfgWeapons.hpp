
class Mode_FullAuto;

class cfgWeapons {

    class Redd_MG3;
    class Redd_MG3_Static: Redd_MG3 {
    		magazines[] = {
          "Redd_Mg3_Belt_100",
          "BWA3_120Rnd_762x51_soft",
          "BWA3_120Rnd_762x51_Tracer_soft",
          "BWA3_120Rnd_762x51",
          "BWA3_120Rnd_762x51_Tracer",
          "150Rnd_762x51_Box",
          "150Rnd_762x51_Box_Tracer",
          "hlc_100Rnd_762x51_B_MG3",
          "hlc_100Rnd_762x51_mdim_MG3",
          "hlc_100Rnd_762x51_M_MG3",
          "hlc_100Rnd_762x51_B_M60E4",
          "hlc_100Rnd_762x51_Mdim_M60E4",
          "hlc_100Rnd_762x51_M_M60E4",
          "hlc_100Rnd_762x51_Barrier_M60E4",
          "hlc_200Rnd_762x51_B_M60E4",
          "hlc_200Rnd_762x51_Mdim_M60E4",
          "hlc_200Rnd_762x51_Barrier_M60E4",
          "hlc_200Rnd_762x51_M_M60E4",
          "hlc_250Rnd_762x51_B_MG3",
          "hlc_250Rnd_762x51_mdim_MG3",
          "hlc_250Rnd_762x51_M_MG3",
          "hlc_50Rnd_762x51_B_MG3",
          "hlc_50Rnd_762x51_mdim_MG3",
          "hlc_50Rnd_762x51_M_MG3",
          "hlc_100Rnd_762x51_Barrier_MG3",
          "hlc_250Rnd_762x51_Barrier_MG3",
          "hlc_50Rnd_762x51_Barrier_MG3",
          "hlc_100Rnd_762x51_T_MG3",
          "hlc_100Rnd_762x51_T_M60E4",
          "hlc_200Rnd_762x51_T_M60E4",
          "hlc_250Rnd_762x51_T_MG3",
          "hlc_50Rnd_762x51_T_MG3"
        };
        magazineWell[] = {mg3_762x51};
    		magazineReloadTime = 0.1;
        autoReload = 1;
    		ace_overheating_allowSwapBarrel = 1;
    		ace_overheating_dispersion = 0.75;
    		ace_overheating_mrbs = 2000;
    		class FullAuto: Mode_FullAuto {
            displayName = "MG3";
        		autoFire = 1;
        		burst = 1;
        		sounds[] = {"StandardSound"};
        		reloadTime = (60/1200);
        		dispersion = 0.003;
        		aiBurstTerminable = 1;
        		aiRateOfFire = 0.5;
        		aiRateOfFireDistance = 50;
        		minRange = 0;
        		minRangeProbab = 0.05;
        		midRange = 0;
        		midRangeProbab = 0.7;
        		maxRange = 0;
        		maxRangeProbab = 0.1;
        		showToPlayer = 1;
            class StandardSound {
          			soundsetshot[] = {"Redd_MG3_Shot_SoundSet", "Redd_MG3_Tail_SoundSet"};
          			closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.56234133,1,40};
          			closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.56234133,1,40};
          			soundClosure[] = {"closure1",0.5,"closure2",0.5};
        		};
    		};
  	};
};

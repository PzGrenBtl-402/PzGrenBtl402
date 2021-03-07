class CfgPatches {
  class hlcweapons_MG3s_402 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.2;
    requiredAddons[] = {"hlcweapons_MG3s"};
  };
};

class CfgMagazines {
  class hlc_50Rnd_792x57_B_MG42;

  class hlc_50Rnd_762x51_B_MG3 : hlc_50Rnd_792x57_B_MG42 {
    mass = 20;
  };

  class hlc_100Rnd_762x51_B_MG3 : hlc_50Rnd_762x51_B_MG3 {
    mass = 40;
  };

  class hlc_250Rnd_762x51_B_MG3 : hlc_50Rnd_762x51_B_MG3 {
    mass = 100;
  };

  class hlc_50Rnd_762x51_M_MG3 : hlc_50Rnd_762x51_B_MG3 {
    mass = 20;
  };

  class hlc_100Rnd_762x51_M_MG3 : hlc_50Rnd_762x51_M_MG3 {
    mass = 40;
  };

  class hlc_250Rnd_762x51_M_MG3 : hlc_50Rnd_762x51_M_MG3 {
    mass = 100;
  };

  class hlc_50Rnd_762x51_mdim_MG3 : hlc_50Rnd_762x51_B_MG3 {
    mass = 20;
  };

  class hlc_100Rnd_762x51_mdim_MG3 : hlc_50Rnd_762x51_mdim_MG3 {
    mass = 40;
  };

  class hlc_250Rnd_762x51_mdim_MG3 : hlc_50Rnd_762x51_mdim_MG3 {
    mass = 100;
  };

  class hlc_50Rnd_762x51_Barrier_MG3 : hlc_50Rnd_762x51_B_MG3 {
    mass = 20;
  };

  class hlc_100Rnd_762x51_Barrier_MG3 : hlc_50Rnd_762x51_Barrier_MG3 {
    mass = 40;
  };

  class hlc_250Rnd_762x51_Barrier_MG3 : hlc_50Rnd_762x51_Barrier_MG3 {
    mass = 100;
  };

  class hlc_50Rnd_762x51_T_MG3 : hlc_50Rnd_762x51_B_MG3 {
    mass = 20;
  };

  class hlc_100Rnd_762x51_T_MG3 : hlc_50Rnd_762x51_T_MG3 {
    mass = 40;
  };

  class hlc_250Rnd_762x51_T_MG3 : hlc_50Rnd_762x51_T_MG3 {
    mass = 100;
  };
};

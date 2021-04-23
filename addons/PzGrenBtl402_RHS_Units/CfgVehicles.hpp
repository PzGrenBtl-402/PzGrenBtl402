class CfgVehicles
{
  class rhs_msv_rifleman;
  class PzGrenBtl_MSV_Rifleman_2000: rhs_msv_rifleman
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
    linkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
    respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
  };

  class rhs_msv_arifleman_rpk;
  class PzGrenBtl_MSV_AutoRifleman_2000: rhs_msv_arifleman_rpk
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
    linkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
    respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
  };

  class rhs_msv_sergeant;
  class PzGrenBtl_MSV_Sergeant_2000: rhs_msv_sergeant
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
  };

  class rhs_msv_grenadier_rpg;
  class PzGrenBtl_MSV_Grenadier_2000: rhs_msv_grenadier_rpg
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
    linkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
    respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
  };

  class rhs_msv_strelok_rpg_assist;
  class PzGrenBtl_MSV_Grenadier2_2000: rhs_msv_strelok_rpg_assist
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
    linkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
    respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
  };

  class rhs_msv_efreitor;
  class PzGrenBtl_MSV_Efreitor_2000: rhs_msv_efreitor
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
  };

  class rhs_msv_LAT;
  class PzGrenBtl_MSV_RPG26_2000: rhs_msv_LAT
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
    linkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
    respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
  };

  class rhs_msv_medic;
  class PzGrenBtl_MSV_Medic_2000: rhs_msv_medic
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
    linkedItems[] = {"rhs_6b27m","rhs_6b23_medic","ItemWatch"};
    respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_medic","ItemWatch"};
  };

  class rhs_msv_marksman;
  class PzGrenBtl_MSV_SVD_2000: rhs_msv_marksman
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    headgearList[] = {"rhs_6b27m",10,"rhs_6b27m_ess",10,"rhs_6b27m_bala",5,"rhs_6b27m_ess_bala",5,"rhs_6b27m_green",2,"rhs_6b27m_green_ess",2,"rhs_6b27m_green_bala",1,"rhs_6b27m_green_ess_bala",1};
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
    linkedItems[] = {"rhs_6b27m","rhs_6b23_sniper","ItemWatch"};
    respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_sniper","ItemWatch"};
  };

  class rhs_msv_machinegunner;
  class PzGrenBtl_MSV_MG_2000: rhs_msv_machinegunner
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
    linkedItems[] = {"rhs_6b27m","rhs_6b23","ItemWatch"};
    respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
  };

  class rhs_msv_machinegunner_assistant;
  class PzGrenBtl_MSV_MG2_2000: rhs_msv_machinegunner_assistant
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_infantry_2000";
    vehicleClass = "PzGrenBtl_vehclass_infantry_2000";
    linkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman","ItemWatch"};
    respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23","ItemWatch"};
  };


  class PzGrenBtl_MSV_Rifleman_94: PzGrenBtl_MSV_Rifleman_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
  };

  class PzGrenBtl_MSV_AutoRifleman_94: PzGrenBtl_MSV_AutoRifleman_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
  };

  class PzGrenBtl_MSV_Sergeant_94: PzGrenBtl_MSV_Sergeant_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_officer_khaki","ItemMap","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_officer_khaki","ItemMap","ItemCompass","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
  };

  class PzGrenBtl_MSV_Grenadier_94: PzGrenBtl_MSV_Grenadier_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
    backPack = "rhs_rpg_6b3";
  };

  class PzGrenBtl_MSV_Grenadier2_94: PzGrenBtl_MSV_Grenadier2_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
    backPack = "rhs_rpg_6b3";
  };

  class PzGrenBtl_MSV_Efreitor_94: PzGrenBtl_MSV_Efreitor_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
  };

  class PzGrenBtl_MSV_RPG26_94: PzGrenBtl_MSV_RPG26_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
  };

  class PzGrenBtl_MSV_Medic_94: PzGrenBtl_MSV_Medic_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_medic_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_medic_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
    backPack = "";
  };

  class PzGrenBtl_MSV_SVD_94: PzGrenBtl_MSV_SVD_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
  };

  class PzGrenBtl_MSV_MG_94: PzGrenBtl_MSV_MG_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_rifleman_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_rifleman_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
  };

  class PzGrenBtl_MSV_MG2_94: PzGrenBtl_MSV_MG2_2000
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_94";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_94";
    headgearList[] = {"rhs_ssh68_2",5,"rhsgref_ssh68_vsr",5};
    linkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b5_khaki","ItemWatch"};
    uniformClass = "rhs_uniform_afghanka_vsr_2";
  };


  class PzGrenBtl_MSV_Rifleman_86: PzGrenBtl_MSV_Rifleman_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
    magazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
  };

  class PzGrenBtl_MSV_AutoRifleman_86: PzGrenBtl_MSV_AutoRifleman_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
  };

  class PzGrenBtl_MSV_Sergeant_86: PzGrenBtl_MSV_Sergeant_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
    magazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rgn","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_GRD40_White"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rgn","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_GRD40_White"};
    respawnWeapons[] = {"rhs_weap_ak74_gp25","rhs_weap_makarov_pm","Throw","Put"};
    weapons[] = {"rhs_weap_ak74_gp25","rhs_weap_makarov_pm","Throw","Put"};
  };

  class PzGrenBtl_MSV_Grenadier_86: PzGrenBtl_MSV_Grenadier_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
    magazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn","rhs_rpg7_PG7VL_mag"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn","rhs_rpg7_PG7VL_mag"};
    respawnWeapons[] = {"rhs_weap_ak74","Throw","Put","rhs_weap_rpg7_pgo"};
    weapons[] = {"rhs_weap_aks74u","Throw","Put","rhs_weap_rpg7_pgo"};
  };

  class PzGrenBtl_MSV_Grenadier2_86: PzGrenBtl_MSV_Grenadier2_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
    magazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
  };

  class PzGrenBtl_MSV_Efreitor_86: PzGrenBtl_MSV_Efreitor_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
    magazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
  };

  class PzGrenBtl_MSV_RPG26_86: PzGrenBtl_MSV_RPG26_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
    magazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnWeapons[] = {"rhs_weap_ak74","rhs_weap_rpg26","Throw","Put"};
    weapons[] = {"rhs_weap_ak74","rhs_weap_rpg26","Throw","Put"};
  };

  class PzGrenBtl_MSV_Medic_86: PzGrenBtl_MSV_Medic_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
    magazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
  };

  class PzGrenBtl_MSV_SVD_86: PzGrenBtl_MSV_SVD_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
  };

  class PzGrenBtl_MSV_MG_86: PzGrenBtl_MSV_MG_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
    magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rgn"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rgn"};
    backPack = "rhs_rd54_vest";
  };

  class PzGrenBtl_MSV_MG2_86: PzGrenBtl_MSV_MG2_94
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_86";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_86";
    headgearList[] = {"rhs_ssh68_2",1};
    uniformClass = "rhs_uniform_afghanka";
    magazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    backPack = "rhs_rd54_vest";
  };


  class PzGrenBtl_MSV_Rifleman_83: PzGrenBtl_MSV_Rifleman_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK","ItemWatch"};
  };

  class PzGrenBtl_MSV_AutoRifleman_83: PzGrenBtl_MSV_AutoRifleman_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_RPK","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_RPK","ItemWatch"};
  };

  class PzGrenBtl_MSV_Sergeant_83: PzGrenBtl_MSV_Sergeant_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_off","ItemMap","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_off","ItemMap","ItemCompass","ItemWatch"};
  };

  class PzGrenBtl_MSV_Grenadier_83: PzGrenBtl_MSV_Grenadier_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_2","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_2","ItemWatch"};
  };

  class PzGrenBtl_MSV_Grenadier2_83: PzGrenBtl_MSV_Grenadier2_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_3","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_3","ItemWatch"};
  };

  class PzGrenBtl_MSV_Efreitor_83: PzGrenBtl_MSV_Efreitor_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK","ItemWatch"};
  };

  class PzGrenBtl_MSV_RPG18_83: PzGrenBtl_MSV_RPG26_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_2","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_2","ItemWatch"};
    respawnWeapons[] = {"rhs_weap_ak74","rhs_weap_rpg18","Throw","Put"};
    weapons[] = {"rhs_weap_ak74","rhs_weap_rpg18","Throw","Put"};
  };

  class PzGrenBtl_MSV_Medic_83: PzGrenBtl_MSV_Medic_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_3","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_3","ItemWatch"};
    backPack = "rhs_medic_bag_filled";
  };

  class PzGrenBtl_MSV_SVD_83: PzGrenBtl_MSV_SVD_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK","ItemWatch"};
  };

  class PzGrenBtl_MSV_MG_83: PzGrenBtl_MSV_MG_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_RPK","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_RPK","ItemWatch"};
  };

  class PzGrenBtl_MSV_MG2_83: PzGrenBtl_MSV_MG2_86
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_83";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_83";
    linkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_2","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_6b3_AK_2","ItemWatch"};
  };


  class PzGrenBtl_MSV_Rifleman_81: PzGrenBtl_MSV_Rifleman_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
  };

  class PzGrenBtl_MSV_AutoRifleman_81: PzGrenBtl_MSV_AutoRifleman_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
  };

  class PzGrenBtl_MSV_Sergeant_81: PzGrenBtl_MSV_Sergeant_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemMap","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemMap","ItemCompass","ItemWatch"};
  };

  class PzGrenBtl_MSV_Grenadier_81: PzGrenBtl_MSV_Grenadier_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    backPack = "rhs_rpg_2";
  };

  class PzGrenBtl_MSV_Grenadier2_81: PzGrenBtl_MSV_Grenadier2_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    backPack = "rhs_rpg_2";
  };

  class PzGrenBtl_MSV_Efreitor_81: PzGrenBtl_MSV_Efreitor_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
  };

  class PzGrenBtl_MSV_RPG18_81: PzGrenBtl_MSV_RPG18_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
  };

  class PzGrenBtl_MSV_Medic_81: PzGrenBtl_MSV_Medic_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
  };

  class PzGrenBtl_MSV_SVD_81: PzGrenBtl_MSV_SVD_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
  };

  class PzGrenBtl_MSV_MG_81: PzGrenBtl_MSV_MG_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK","ItemWatch"};
    backPack = "rhs_rd54";
  };

  class PzGrenBtl_MSV_MG2_81: PzGrenBtl_MSV_MG2_83
  {
    editorSubcategory = "PzGrenBtl_EdSubcat_Infantry_81";
    vehicleClass = "PzGrenBtl_Vehclass_Infantry_81";
    linkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    respawnLinkedItems[] = {"rhs_ssh68_2","rhs_suspender_AK8_chestrig","ItemWatch"};
    backPack = "rhs_rd54";
  };
};

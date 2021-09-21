class CfgVehicles {


    class Bag_Base;

    class Weapon_Bag_Base: Bag_Base {
        class assembleInfo{};
    };

    class rnt_mg3_static_tripod: Bag_Base {
        armor = 500000;
        class assembleInfo {
            primary=1;
            base="";
            assembleTo = "PzGrenBtl402_Feldlafette";
            dissasembleTo[]={};
            displayName="Feldlafette";
        };
    };




    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets;
        class MainTurret;
    };
    class StaticMGWeapon: StaticWeapon {};
    class HMG_01_base_F: StaticMGWeapon {};
    class HMG_01_high_base_F: HMG_01_base_F {};

    class rnt_mg3_static: HMG_01_high_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "PzGrenBtl402_RSC_MG3";
                class HitPoints {

          					class HitGun {
            						armor = 100;
            						material = -1;
            						name = "gun";
            						visual = "damage_visual";
            						passThrough = 0;
            						radius = 0.038;
          					};
          				};

            };
        };
        delete assembleInfo;
        class UserActions {
          class Disassemble {
                displayName = "Feldlafette abbauen";
                priority = 3;
                position = "actionPoint";
                radius = 5;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "alive this and count magazines this isEqualTo 0 and count crew this isEqualTo 0";
                statement = "deleteVehicle _target; _player addBackPack 'rnt_mg3_static_tripod'; [_player, 'PutDown'] call ace_common_fnc_doGesture;";
            };
        };
        class ACE_CSW {
            enabled = 0;
            proxyWeapon = "Redd_MG3_Static";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = "";
            disassembleTurret = "PzGrenBtl402_Feldlafette";
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
            desiredAmmo = 250;
            disassembleFunc = "";
        };
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "Feldlafette";
                position = "[-0.25,0.45,-0.5]";
                distance = 2.5;
                condition = "alive _target";
                selection = "";
                class pickUp {
                    displayName = "Feldlafette abbauen";
                    condition = "count crew _target isEqualTo 0";
                    statement = "[_player, _target] call PzGrenBtl402_fnc_reddStaticMG3_zerlegen;";
                };
            };
        };
    };

    class ace_csw_sag30Tripod;
    class PzGrenBtl402_Feldlafette: ace_csw_sag30Tripod {
          side = 3;
          typicalCargo[] = {};
          armor = 500000;
          mapSize = 0.4;
          nameSound = "Bunker";
          accuracy = 1000;
          destrType = "DestructDefault";
          author = "Zumi";
          scope = 2;
          editorPreview = "\Redd_Backpacks\pictures\rnt_mg3_static_tripod_pre.paa";
          displayName = "MG3-Feldlafette";
          ace_dragging_canDrag = 1;
          ace_dragging_dragPosition[] = {0, 2, 0};
          ace_dragging_canCarry = 1;
          ace_dragging_carryPosition[] = {0, 2, 0};
          class ACE_Actions {
              class ACE_MainActions {
                  displayName = "Dreibein";
                  selection = "";
                  distance = 2.5;
                  condition = "alive _target";
                  class mountWeapon {
                      displayName = "MG3 lafettieren";
                      condition = "(primaryWeapon _player IN ['gm_mg3_blk','BWA3_MG3','BWA3_MG3_bipod','BWA3_MG3_MicroT2_pointer_bipod','gm_mg3_des','hlc_lmg_MG3','hlc_lmg_MG3_optic','hlc_lmg_MG3KWS_b','hlc_lmg_MG3KWS_g','hlc_lmg_MG3KWS']) && ((currentWeapon _player) == (primaryWeapon _player))";
                      icon = "\Redd_Backpacks\pictures\rnt_mg3_static_barell_ui_pre_ca.paa";
                      statement = "[_player, _target] call PzGrenBtl402_fnc_reddStaticMG3_lafettieren;";
                  };
                  class pickup {
                      displayName = "Dreibein zusammenklappen";
                      condition = "true";
                      icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\backpack_ca.paa";
                      statement = "deleteVehicle _target; _player addBackPack 'rnt_mg3_static_tripod'; [_player, 'PutDown'] call ace_common_fnc_doGesture;";
                  };
              };
          };
      };
};

#include "script_component.hpp"

if (hasInterface) then {

	  // Lochkoppel
	  // SEM attachen
	  _koppel_sem_anheften = ["SEM","SEM 52 Anheften","\idi\acre\addons\sys_sem52sl\data\ui\sem52sl_icon.paa",{
			  params ["_t","_p","_actionparams"];
	      private _loadout = getUnitLoadout _p;
	      _loadout params ["_primary", "_tertiary", "_secondary", "_uniform","_vest"];
	      _vest params ["_vestclass", "_stuff"];
	      _vest set [0, "gm_ge_vest_90_leader_flk"];
	      _loadout set [4, _vest];
	      _p setUnitLoadout [_loadout, false];
	      [_p, ""] call BIS_fnc_setUnitInsignia;
	      _p call gm_core_characters_fnc_updateUniformDetails;
		  },
		  {(Vest _player != "gm_ge_vest_90_leader_flk") && ([_player, "ACRE_SEM52SL"] call acre_api_fnc_hasKindOfRadio) && (Vest _player IN ["gm_ge_vest_90_rifleman_flk","gm_ge_vest_90_machinegunner_flk","gm_ge_vest_90_medic_flk","gm_ge_vest_90_demolition_flk","gm_ge_vest_90_officer_flk","gm_ge_vest_90_crew_flk"])},
		  {},
		  []
		] call ace_interact_menu_fnc_createAction;

	  ["CAManBase", 1 , ["ACE_SelfActions", "ACE_Equipment"], _koppel_sem_anheften, true] call ace_interact_menu_fnc_addActionToClass;

	  // SEM dettachen
	  _koppel_sem_entfernen = ["SEM","SEM 52 entfernen","\idi\acre\addons\sys_sem52sl\data\ui\sem52sl_icon.paa",{
	      params ["_t","_p","_actionparams"];
	      private _loadout = getUnitLoadout _p;
	      _loadout params ["_primary", "_tertiary", "_secondary", "_uniform","_vest"];
	      _vest params ["_vestclass", "_stuff"];
	      _vest set [0, "gm_ge_vest_90_rifleman_flk"];
	      _loadout set [4, _vest];
	      _p setUnitLoadout [_loadout, false];
	      [_p, ""] call BIS_fnc_setUnitInsignia;
	      _p call gm_core_characters_fnc_updateUniformDetails;
	    },
	    {(Vest _player == "gm_ge_vest_90_leader_flk") && ([_player, "ACRE_SEM52SL"] call acre_api_fnc_hasKindOfRadio)},
	    {},
	    []
	  ] call ace_interact_menu_fnc_createAction;

	  ["CAManBase", 1 , ["ACE_SelfActions", "ACE_Equipment"], _koppel_sem_entfernen, true] call ace_interact_menu_fnc_addActionToClass;

	  // SpliSchu
	  // SEM attachen
	  _splischu_sem_anheften = ["SEM","SEM 52 Anheften","\idi\acre\addons\sys_sem52sl\data\ui\sem52sl_icon.paa",{
			  params ["_t","_p","_actionparams"];
	      private _loadout = getUnitLoadout _p;
	      _loadout params ["_primary", "_tertiary", "_secondary", "_uniform","_vest"];
	      _vest params ["_vestclass", "_stuff"];
	      _vest set [0, "gm_ge_vest_armor_90_leader_flk"];
	      _loadout set [4, _vest];
	      _p setUnitLoadout [_loadout, false];
	      [_p, ""] call BIS_fnc_setUnitInsignia;
	      _p call gm_core_characters_fnc_updateUniformDetails;
		  },
		  {(Vest _player != "gm_ge_vest_armor_90_leader_flk") && ([_player, "ACRE_SEM52SL"] call acre_api_fnc_hasKindOfRadio) && (Vest _player IN ["gm_ge_vest_armor_90_rifleman_flk","gm_ge_vest_armor_90_machinegunner_flk","gm_ge_vest_armor_90_medic_flk","gm_ge_vest_armor_90_demolition_flk","gm_ge_vest_armor_90_officer_flk","gm_ge_vest_armor_90_crew_flk"])},
		  {},
		  []
		] call ace_interact_menu_fnc_createAction;

	  ["CAManBase", 1 , ["ACE_SelfActions", "ACE_Equipment"], _splischu_sem_anheften, true] call ace_interact_menu_fnc_addActionToClass;

	  // SEM dettachen
	  _splischu_sem_entfernen = ["SEM","SEM 52 entfernen","\idi\acre\addons\sys_sem52sl\data\ui\sem52sl_icon.paa",{
	      params ["_t","_p","_actionparams"];
	      private _loadout = getUnitLoadout _p;
	      _loadout params ["_primary", "_tertiary", "_secondary", "_uniform","_vest"];
	      _vest params ["_vestclass", "_stuff"];
	      _vest set [0, "gm_ge_vest_armor_90_rifleman_flk"];
	      _loadout set [4, _vest];
	      _p setUnitLoadout [_loadout, false];
	      [_p, ""] call BIS_fnc_setUnitInsignia;
	      _p call gm_core_characters_fnc_updateUniformDetails;
	    },
	    {(Vest _player == "gm_ge_vest_armor_90_leader_flk") && ([_player, "ACRE_SEM52SL"] call acre_api_fnc_hasKindOfRadio)},
	    {},
	    []
	  ] call ace_interact_menu_fnc_createAction;

	  ["CAManBase", 1 , ["ACE_SelfActions", "ACE_Equipment"], _splischu_sem_entfernen, true] call ace_interact_menu_fnc_addActionToClass;

	  // Kopfbedeckungen
	  _insertChildren = {
	    params ["_target", "_player", "_params"];
	    // Add children to this action
	    private _actions = [];
	    {
	        private _childStatement = {
	          params ["_target", "_player", "_params"];
	          _params params ["_headgear"];
	          _oldheadgear = headgear _player;
	          removeHeadgear _player;
	          [_player, _headgear] call CBA_fnc_removeItem;
	          _player linkItem _headgear;
	          if (_oldheadgear != "") then {
	            [_player, _oldheadgear, true] call CBA_fnc_addItem;
	          };
	        };
	        private _action = [format ["%1 tragen", [configFile >> "cfgWeapons" >> _x  >> "displayName", "String", "Ohne"] call CBA_fnc_getConfigEntry], _x, "", _childStatement, {true}, {}, [_x],"",4,[false, false, false, false, false], {
	          params ["_target", "_player", "_params", "_actionData"];
	          _params params ["_headgear"];
	          // Modify the action - index 1 is the display name, 2 is the icon...
	          _actionData set [1, [configFile >> "cfgWeapons" >> _headgear >> "displayName", "String", "Ohne"] call CBA_fnc_getConfigEntry];
	          _actionData set [2, [configFile >> "cfgWeapons" >> _headgear >> "Picture", "String", "\A3\Ui_f\data\IGUI\Cfg\Actions\ico_OFF_ca.paa"] call CBA_fnc_getConfigEntry];
	        }
	      ] call ace_interact_menu_fnc_createAction;
	        _actions pushBack [_action, [], _target]; // New action, it's children, and the action's target
	    } forEach (
	        ([
	          "gm_ge_headgear_beret_bdx",
	          "gm_ge_headgear_beret_red",
	          "gm_ge_headgear_beret_grn",
	          "gm_ge_headgear_beret_bdx_armyaviation",
	          "gm_ge_headgear_beret_bdx_lrrp",
	          "gm_ge_headgear_beret_bdx_paratrooper",
	          "gm_ge_headgear_beret_bdx_specop",
	          "gm_ge_headgear_beret_blk_antitank",
	          "gm_ge_headgear_beret_blk_armor",
	          "gm_ge_headgear_beret_blk_armorrecon",
	          "gm_ge_headgear_beret_blk_recon",
	          "gm_ge_headgear_beret_blu_medical",
	          "gm_ge_headgear_beret_crew_bdx_paratrooper",
	          "gm_ge_headgear_beret_crew_blk_antitank",
	          "gm_ge_headgear_beret_crew_blk_armor",
	          "gm_ge_headgear_beret_crew_blk_armorrecon",
	          "gm_ge_headgear_beret_crew_blk_recon",
	          "gm_ge_headgear_beret_crew_grn_mechinf",
	          "gm_ge_headgear_beret_crew_red_antiair",
	          "gm_ge_headgear_beret_crew_red_artillery",
	          "gm_ge_headgear_beret_crew_red_engineer",
	          "gm_ge_headgear_beret_crew_red_maintenance",
	          "gm_ge_headgear_beret_crew_red_militarypolice",
	          "gm_ge_headgear_beret_crew_red_nbc",
	          "gm_ge_headgear_beret_crew_red_opcom",
	          "gm_ge_headgear_beret_crew_red_signals",
	          "gm_ge_headgear_beret_crew_red_supply",
	          "gm_ge_headgear_beret_grn_guardbtl",
	          "gm_ge_headgear_beret_grn_infantry",
	          "gm_ge_headgear_beret_grn_mechinf",
	          "gm_ge_headgear_beret_grn_music",
	          "gm_ge_headgear_beret_mrb",
	          "gm_ge_headgear_beret_red_antiair",
	          "gm_ge_headgear_beret_red_artillery",
	          "gm_ge_headgear_beret_red_engineer",
	          "gm_ge_headgear_beret_red_geoinfo",
	          "gm_ge_headgear_beret_red_maintenance",
	          "gm_ge_headgear_beret_red_militarypolice",
	          "gm_ge_headgear_beret_red_nbc",
	          "gm_ge_headgear_beret_red_opcom",
	          "gm_ge_headgear_beret_red_signals",
	          "gm_ge_headgear_beret_red_supply",
	          "gm_ge_headgear_beret_un",
	          "gm_ge_headgear_headset_crew_oli",
	          "gm_ge_headgear_hat_90_flk",
	          "gm_ge_headgear_hat_90_trp",
	          "gm_ge_headgear_hat_90_flk_m92",
	          "gm_ge_headgear_hat_90_trp_m92",
	          "gm_ge_headgear_hat_90_m92_flk",
	          "gm_ge_headgear_hat_90_m92_trp",
	          "gm_ge_headgear_hat_boonie_flk",
	          "gm_ge_headgear_hat_boonie_trp",
	          "gm_ge_headgear_m92_cover_win",
	          "gm_ge_headgear_m92_flk",
	          "gm_ge_headgear_m92_trp",
	          "gm_ge_headgear_m92_cover_glasses_win",
	          "gm_ge_headgear_m92_glasses_flk",
	          "gm_ge_headgear_m92_glasses_trp"
	        ] select {(_x in (Items _player)) && (_x != (headgear _player))}) + (([""]) select {(_x != (headgear _player))})
	    );
	    _actions
	  };

	  //SEM dettachen
	  _kopfbedeckung = ["Kopfbedeckung","Kopfbedeckung","\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_headgear_hat_90_flk_ca.paa",
	    {},
	    {true},
	    _insertChildren,
	    []
	  ] call ace_interact_menu_fnc_createAction;

	  ["CAManBase", 1 , ["ACE_SelfActions", "ACE_Equipment"], _kopfbedeckung, true] call ace_interact_menu_fnc_addActionToClass;

	  // Feldbluse
	  _insertChildren = {
	    params ["_target", "_player", "_params"];
	    _params params ["_mash"];
	    // Add children to this action
	    private _actions = [];
	    {
	        private _childStatement = {
	          params ["_target", "_player", "_params"];
	          _params params ["_bluse"];
	          private _loadout = getUnitLoadout _player;
	          _loadout params ["_primary", "_tertiary", "_secondary", "_uniform","_vest"];
	          _uniform params ["_uniformclass", "_stuff"];
	          _uniform set [0, _bluse];
	          _loadout set [3, _uniform];
	          _player setUnitLoadout [_loadout, false];
	          [_player, ""] call BIS_fnc_setUnitInsignia;
	          _player call gm_core_characters_fnc_updateUniformDetails;
	        };
	        private _action = [format ["%1 tragen", [configFile >> "cfgWeapons" >> _x  >> "displayName", "String", "Ohne"] call CBA_fnc_getConfigEntry], _x, "", _childStatement, {true}, {}, [_x],"",4,[false, false, false, false, false], {
	          params ["_target", "_player", "_params", "_actionData"];
	          _params params ["_bluse"];
	          // Modify the action - index 1 is the display name, 2 is the icon...
	          _actionData set [1, [configFile >> "cfgWeapons" >> _bluse >> "displayName", "String", "Ohne"] call CBA_fnc_getConfigEntry];
	          _actionData set [2, [configFile >> "cfgWeapons" >> _bluse >> "Picture", "String", "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_uniform_soldier_90_flk_ca.paa"] call CBA_fnc_getConfigEntry];
	        }
	      ] call ace_interact_menu_fnc_createAction;
	        _actions pushBack [_action, [], _target]; // New action, it's children, and the action's target
	    } forEach (
	        ([
	          "gm_ge_uniform_soldier_90_flk",
	          "gm_ge_uniform_soldier_rolled_90_flk",
	          "gm_ge_uniform_soldier_tshirt_90_flk"
	        ] select {(_x != (uniform _player))})
	    );
	    _actions
	  };

	  _bluse = ["Feldbluse","Feldbluse","\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_uniform_soldier_90_flk_ca.paa",
	    {},
	    {(uniform _player) IN ["gm_ge_uniform_soldier_90_flk","gm_ge_uniform_soldier_rolled_90_flk","gm_ge_uniform_soldier_tshirt_90_flk"]},
	    _insertChildren,
	    []
	  ] call ace_interact_menu_fnc_createAction;

	  ["CAManBase", 1 , ["ACE_SelfActions", "ACE_Equipment"], _bluse, true] call ace_interact_menu_fnc_addActionToClass;

};



if (isServer) then {

		// If a player has a flag attached, it will be transfered to the vehicle he enters in as a driver, if available

	  [
		 "Car",
		 "GetIn",
		 {
			params ["_vehicle", "_role", "_unit", "_turret"];
	    if (!isPlayer _unit) exitWith {};
	    if (_role == "Driver") then {
		    _vehicle forceFlagTexture (getForcedFlagTexture _unit);
	    };
		 },
		 true,
		 []
		] call CBA_fnc_addClassEventHandler;


	  [
		 "Tank",
		 "GetIn",
		 {
			params ["_vehicle", "_role", "_unit", "_turret"];
	    if (!isPlayer _unit) exitWith {};
	    if (_role == "Driver") then {
		    _vehicle forceFlagTexture (getForcedFlagTexture _unit);
	    };
		 },
		 true,
		 []
		] call CBA_fnc_addClassEventHandler;

};

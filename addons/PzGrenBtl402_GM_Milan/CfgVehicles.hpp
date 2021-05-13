class CfgVehicles
{
	class StaticWeapon;

	class gm_staticWeapon_base: StaticWeapon
	{
		class Turrets
		{
			class MainTurret;
		};
	};

	class gm_staticATGM_base: gm_staticWeapon_base {};

	class gm_milan_launcher_tripod_base: gm_staticATGM_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {}; //Waffe ohne Patrone
			};
		};

		delete assembleInfo;  //Disassembly Action komplett entfernen, da über den WeaponDisassembled EH nicht der Munitionsstand der Waffe abgerufen werden kann

		class UserActions
		{
			class Disassemble
			{
				displayName = "Milan aufnehmen";
				priority = 3;
				position = "actionPoint";
				radius = 5;
				onlyforplayer = 1;
				showWindow = 0;
				condition = "alive this and count magazines this isEqualTo 0 and count crew this isEqualTo 0";
				statement = "deleteVehicle this; player addBackpackGlobal 'gm_milan_launcher_weaponBag';";
			};
		};
/*
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				condition = "true";
				selection = "";

				class PzGrenBtl_Action_LoadMilan  //Manuelle Nachladeaktion (ACE) hinzufügen
				{
					displayName = "Milan laden";
					condition = "'Redd_Milan_Static_Barrel' isEqualTo backpack _player and count magazines _target isEqualTo 0";
					//statement = "_target addMagazineGlobal 'Redd_Milan_Mag'; [_target] remoteExec ['reload']; removeBackpackGlobal _player;";
					statement = "[20, [], {_this addMagazineGlobal 'Redd_Milan_Mag'; removeBackpackGlobal player; [_this] remoteExec ['reload'];}, {}, 'Milan laden'] call ace_common_fnc_progressBar";
					icon = "\A3\ui_f\data\igui\cfg\actions\reammo_ca.paa";
					selection = "";
				};

				class PzGrenBtl_Action_UnloadMilan  //Manuelle Entladeaktion (ACE) hinzufügen
				{
					displayName = "Milan entladen";
					condition = "!(count magazines _target isEqualTo 0)";
					statement = "[10, [], {[_target, 'Redd_Milan_Mag'] remoteExec ['removeMagazine']; player addBackpackGlobal 'Redd_Milan_Static_Barrel'; _target animateSource ['ReloadMagazine', 1, true];}, {}, 'Milan entladen'] call ace_common_fnc_progressBar";
					icon = "\A3\ui_f\data\igui\cfg\actions\reammo_ca.paa";
					selection = "";
				};
			};
		};
*/
	};
};

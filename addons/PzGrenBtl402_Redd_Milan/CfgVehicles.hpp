class CfgVehicles
{
	class LandVehicle;

	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class EventHandlers;
		class ACE_Actions
		{
			class ACE_MainActions;
		};
	};

	class StaticATWeapon: StaticWeapon {};

	class Redd_Milan_Static_Base: StaticATWeapon
	{
		getInAction = "PlayerProne";
		getOutAction = "PlayerProne";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerGetInAction = "PlayerProne";
				gunnerGetOutAction = "PlayerProne";
				magazines[] = {}; //Waffe ohne Patrone
				turretInfoType = "PzGrenBtl402_RSC_Milan";

				class OpticsIn
				{
					class Day1
					{
						visionMode[] = {"Normal"};
					};

					class Day2
					{
						visionMode[] = {"Normal"};
					};
				};
			};
		};

		class AnimationSources
		{
			class ReloadMagazine
			{
				source = "user";  //Hide-Animation auf User-Kontrolle umschreiben, um sie über Eventhandler kontrollieren zu können
				AnimPeriod = 0;
			};
		};

		class EventHandlers: EventHandlers
		{
			init = "_this select 0 animateSource ['ReloadMagazine', 1, true]; _this call redd_fnc_milan_init"; // Patrone verstecken, wenn Waffe aufgebaut wird
			fired = "_this select 0 animateSource ['ReloadMagazine', 1, true]; _this call redd_fnc_milan_fired"; //Patrone an der Waffe selbst verstecken, gleichzeitig RnT Funktion weiterhin aufrufen
			reloaded = "_this select 0 animateSource ['ReloadMagazine', 0, true]"; //Patrone wieder anzeigen, sobald nachgeladen wird
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
				statement = "deleteVehicle this; player addBackpackGlobal 'Redd_Milan_Static_Tripod';";
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

	class Bag_Base;

	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo{};
	};

	class Redd_Milan_Static_Barrel: Weapon_Bag_Base
	{
		mass = 265; //Realistisches Gewicht Patrone
		delete assembleInfo;
	};

	class Redd_Milan_Static_Tripod: Weapon_Bag_Base
	{
		mass = 671; //Realistisches Gewicht Waffe mit MIRA WBG

		class assembleInfo: assembleInfo
		{
			displayName = "$STR_Redd_Milan";
			assembleTo = "Redd_Milan_Static";
			base = "";
			primary = 1;
		};
	};
};

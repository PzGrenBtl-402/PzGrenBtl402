class CfgPatches
{
	class PzGrenBtl402_GM_Marder
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cba_main", "gm_vehicles_land_tracked_marder1"};
	};
};

#include "CfgFunctions.hpp"

class CfgVehicles
{
	class gm_tracked_APC_base;
	class gm_marder1_base: gm_tracked_APC_base
	{
		maximumLoad = 10000;

		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Bordverstaendigung";
				shortName = "BV";
				allowedPositions[] = {"driver", "gunner", "commander", {"turret", {0,1}}};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}, {"turret", {1}}};
				numLimitedPositions = 1;
				masterPositions[] = {};
				connectedByDefault = 1;
			};
		};

		acre_hasInfantryPhone = 1;
		acre_infantryPhoneDisableRinging = 1;
		acre_infantryPhoneCustomRinging[] = {};
		acre_infantryPhoneIntercom[] = {"all"};
		acre_infantryPhoneControlActions[] = {"all"};
		acre_eventInfantryPhone = QFUNC(noApiFunction);
		acre_infantryPhonePosition[] = {-1.175, -3.45, -1.1};

		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Funkkreis A";
				shortName = "Krs A";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {"gunner"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"all"};
			};

			class Rack_2
			{
				displayName = "Funkkreis B";
				shortName = "Krs B";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {"gunner"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"all"};
			};
		};

		class UserActions
		{
			class heckklappe_auf
			{
				displayName = "Heckklappe öffnen";
				position = "actionPoint";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				condition = "(player in [driver this, gunner this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' == 0) && (alive this)";
				statement = "this call PzGrenBtl402_fnc_marderGMOpenRamp";
			};

			class heckklappe_zu
			{
				displayName = "Heckklappe schließen";
				position = "actionPoint";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				condition = "(player in [driver this, gunner this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' == 1) && (alive this)";
				statement = "this call PzGrenBtl402_fnc_marderGMCloseRamp";
			};
		};
	};
};

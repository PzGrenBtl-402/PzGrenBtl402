class CfgPatches
{
	class PzGrenBtl402_GM_M113
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"gm_vehicles_land_tracked_m113"};
	};
};

class CfgVehicles
{
	class gm_tracked_APC_base;
	class gm_m113_base: gm_tracked_APC_base
	{
		maximumLoad = 10000;

		class AcreIntercoms {
			class Intercom_1 {
				displayName = "Bordverstaendigung";
				shortName = "BV";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
				numLimitedPositions = 2;
				masterPositions[] = {};
				connectedByDefault = 1;
			};
		};

		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		acre_infantryPhoneCustomRinging[] = {};
		acre_infantryPhoneIntercom[] = {"all"};
		acre_infantryPhoneControlActions[] = {"all"};
		acre_eventInfantryPhone = QFUNC(noApiFunction);
		acre_infantryPhonePosition[] = {};

		class AcreRacks {
			class Rack_1 {
				displayName = "Funkkreis A";
				shortName = "Krs A";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"all"};
			};

			class Rack_2 {
				displayName = "Funkkreis B";
				shortName = "Krs B";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"all"};
			};
		};
	};
};

class CfgPatches
{
	class BwMod_402_Leopard
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"bwa3_leopard2"};
	};
};

class CfgVehicles
{
	class All;
	class AllVehicles: All {};
	class Land: AllVehicles {};
	class LandVehicle: Land {};
	class Tank: LandVehicle {};
	class Tank_F: Tank {};
	class BWA3_Leopard_base: Tank_F
	{
		maximumLoad = 10000;

		class AcreIntercoms {
			class Intercom_1 {
				displayName = "Bordverstaendigung";
				shortName = "BV";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				limitedPositions[] = {};
				numLimitedPositions = 0;
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
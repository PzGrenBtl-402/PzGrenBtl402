class CfgPatches
{
	class Redd_Tank_LKW_leicht_gl_402
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"redd_tank_lkw_leicht_gl"};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle {};
	class Car_F: Car {};
	class Redd_Tank_LKW_leicht_gl_Wolf_Base: Car_F
	{
		maximumLoad = 10000;

		delete AcreIntercoms;
		delete acre_hasInfantryPhone;
		delete acre_infantryPhoneDisableRinging;
		delete acre_infantryPhoneCustomRinging;
		delete acre_infantryPhoneIntercom;
		delete acre_infantryPhoneControlActions;
		delete acre_eventInfantryPhone;
		delete acre_infantryPhonePosition;

		class AcreRacks {
			class Rack_1 {
				displayName = "Funkkreis A";
				shortName = "Krs A";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {"crew", {"cargo", "all"}, "external"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_2 {
				displayName = "Funkkreis B";
				shortName = "Krs B";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {"crew", {"cargo", "all"}, "external"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
		};

	};

};

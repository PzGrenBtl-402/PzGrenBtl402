class CfgPatches
{
	class PzGrenBtl402_GM_Iltis
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"gm_vehicles_land_wheeled_iltis"};
	};
};

class CfgVehicles
{
	class gm_iltis_base;
	class gm_iltis_cargo_base: gm_iltis_base
	{
		maximumLoad = 10000;

		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Funkkreis A";
				shortName = "Krs A";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}, "external"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};

			class Rack_2
			{
				displayName = "Funkkreis B";
				shortName = "Krs B";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}, "external"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
		};
	};
};

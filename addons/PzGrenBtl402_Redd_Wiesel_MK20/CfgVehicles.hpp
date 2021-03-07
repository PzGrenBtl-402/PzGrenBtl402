class CfgSoundEffects
{
	class AttenuationsEffects
	{
		class TankAttenuation;
		class TankAttenuation_402_Wiesel_MK20: TankAttenuation
		{
			acreAttenuation = 1;
		};
	};
};

class CfgVehicles
{
	class LandVehicle;

	class Tank: LandVehicle
	{
		class NewTurret;
		class CommanderOptics;
	};

	class Tank_F: Tank
	{
		class Components;
		class ViewOptics;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class Redd_Tank_Wiesel_1A4_MK20_base: Tank_F
	{
		maximumLoad = 10000;
		driverWeaponsInfoType = "PzGrenBtl402_RSC_Driver";
		attenuationEffectType = "TankAttenuation_402_Wiesel_MK20";

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
				allowedPositions[] = {"gunner"};
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
				allowedPositions[] = {"gunner"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"all"};
			};
		};

		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				left = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};

					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
					};
				};
			};

			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				right = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};

					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
					};
				};
			};
		};

		class TransportBackpacks {delete _xx_B_AssaultPack_rgr;};
		class TransportItems {delete _xx_Toolkit;};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistanceInitIndex = 6;
				lockWhenDriverOut = 0;
				soundAttenuationTurret = "TankAttenuation_402_Wiesel_MK20";

				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};

							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};

					class VehicleSystemsDisplayManagerComponentRight
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};

							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};
				};

				class ViewOptics: ViewOptics
				{
					visionMode[] = {"Normal", "TI"};
				};

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

			class wieselMk20_Bino_Turret_Com: NewTurret
			{
				stabilizedInAxes = 0;

				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
						};
					};

					class VehicleSystemsDisplayManagerComponentRight
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
						};
					};
				};
			};
		};
	};
};

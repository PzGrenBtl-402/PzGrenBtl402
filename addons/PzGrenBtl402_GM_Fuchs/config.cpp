class CfgPatches
{
	class PzGrenBtl402_GM_Fuchs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"gm_vehicles_land_wheeled_fuchs"};
	};
};

class CfgVehicles
{
	class gm_fuchs_base;
	class gm_fuchsa0_base: gm_fuchs_base
	{
		maximumLoad = 10000;

		class UserActions
		{
			class hecktueren_auf
			{
				displayName = "Türen öffnen";
				position = "hatch_1_1_axis";
				radius = 2;
				onlyforplayer = 1;
				showWindow = 0;
				condition = "(this doorPhase 'door_2_1_source' == 0) && (alive this)";
				statement = "this animateDoor ['door_2_2_source', 1, false]; this animateDoor ['door_2_1_source', 1, false];";
			};

			class hecktueren_zu
			{
				displayName = "Türen schließen";
				position = "hatch_1_1_axis";
				radius = 2;
				onlyforplayer = 1;
				showWindow = 0;
				condition = "(this doorPhase 'door_2_1_source' == 1) && (alive this)";
				statement = "this animateDoor ['door_2_1_source', 0, false]; this animateDoor ['door_2_2_source', 0, false];";
			};

			class hecktueren_auf_2
			{
				displayName = "Türen öffnen";
				position = "actionPoint";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				condition = "(player in this) && (this doorPhase 'door_2_1_source' == 0) && (alive this)";
				statement = "this animateDoor ['door_2_2_source', 1, false]; this animateDoor ['door_2_1_source', 1, false];";
			};

			class hecktueren_zu_2
			{
				displayName = "Türen schließen";
				position = "actionPoint";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				condition = "(player in this) && (this doorPhase 'door_2_1_source' == 1) && (alive this)";
				statement = "this animateDoor ['door_2_1_source', 0, false]; this animateDoor ['door_2_2_source', 0, false];";
			};
		};
	};

	class gm_fuchsa0_engineer_base: gm_fuchsa0_base
	{
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Bordverstaendigung";
				shortName = "BV";
				allowedPositions[] = {"driver", "commander", {"turret", {2}}};
				disabledPositions[] = {};
				limitedPositions[] = {"gunner", {"cargo", "all"}, {"turret", {3}, {4}, {5}}};
				numLimitedPositions = 2;
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
		acre_infantryPhonePosition[] = {-1.025, -3.4, -0.75};

		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Funkkreis A";
				shortName = "Krs A";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {{"turret", {4}}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"all"};
			};
		};
	};

	class gm_fuchsa0_reconnaissance_base: gm_fuchsa0_base
	{
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Bordverstaendigung";
				shortName = "BV";
				allowedPositions[] = {"driver", "commander", {"turret", {4}}};
				disabledPositions[] = {};
				limitedPositions[] = {"gunner", {"cargo", "all"}, {"turret", {2}, {3}, {5}}};
				numLimitedPositions = 2;
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
		acre_infantryPhonePosition[] = {-1.025, -3.4, -0.75};

		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Funkkreis A";
				shortName = "Krs A";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {{"turret", {3}}};
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
				allowedPositions[] = {{"turret", {3}}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"all"};
			};
		};
	};

	class gm_fuchsa0_command_base: gm_fuchsa0_base
	{
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Bordverstaendigung";
				shortName = "BV";
				allowedPositions[] = {"driver", "commander", {"turret", {1}}};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo", "all"}, {"turret", {2}}, {"turret", {3}}};
				numLimitedPositions = 2;
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
		acre_infantryPhonePosition[] = {-1.025, -3.4, -0.75};

		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Funkkreis A";
				shortName = "Krs A";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {{"turret", {3}}};
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
				allowedPositions[] = {{"turret", {3}}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"all"};
			};

			class Rack_3
			{
				displayName = "Funkkreis C";
				shortName = "Krs C";
				componentName = "ACRE_SEM90";
				allowedPositions[] = {{"turret", {3}}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_SEM70";
				isRadioRemovable = 0;
				intercom[] = {"all"};
			};
		};
	};
};

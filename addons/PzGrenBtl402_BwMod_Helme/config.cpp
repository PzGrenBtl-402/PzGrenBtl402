class CfgPatches
{
	class BwMod_402_Helme
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"bwa3_headgear"};
	};
};

class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;

	class BWA3_OpsCore: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {701,801,901};
			mass = 1;
		};
	};

	class BWA3_CrewmanKSK: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {701,801,901};
			mass = 1;
		};
	};

	class BWA3_Knighthelm: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {701,801,901};
			mass = 1;
		};
	};

	class BWA3_M92_Fleck: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {701,801,901};
			mass = 1;
		};
	};

	class BWA3_Beret_PzGren: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {701,801,901};
			mass = 1;
		};
	};
};

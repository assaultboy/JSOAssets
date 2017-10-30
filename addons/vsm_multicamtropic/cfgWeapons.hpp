class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class VSM_MulticamTropic_Crye_Camo: Uniform_Base
	{
		scope=2;
		displayName="[JSO] Combat Uniform (Mulitcam)";
		author="VanSchmoozin";
		picture="\VSM_MulticamTropic\Data\Icons\icon_uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="VSM_MulticamTropic_Crye_Uniform";
			containerClass="Supply70";
			mass=35;
		};
	};
	class VSM_MulticamTropic_Boonie: ItemCore
	{
		displayName="[JSO] Booniehat (Multicam)";
		scope=2;
		weaponPoolAvailable=1;
		author="VanSchmoozin";
		picture="\VSM_MulticamTropic\Data\Icons\icon_boonie.paa";
		model="A3\Characters_F\Common\booniehat";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\VSM_MulticamTropic\Data\VSM_MulticamTropic_boonie.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=15;
			allowedSlots[]={901,605};
			uniformModel="A3\Characters_F\Common\booniehat";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
			passThrough=0.60000002;
		};
	};
	class VSM_MulticamTropic_Cap: ItemCore
	{
		displayName="[JSO] Military Cap (Multicam)";
		scope=2;
		weaponPoolAvailable=1;
		author="VanSchmoozin";
		picture="\VSM_MulticamTropic\Data\Icons\icon_cap.paa";
		model="A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\VSM_MulticamTropic\Data\VSM_MulticamTropic_cap.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=3;
			allowedSlots[]={901,605};
			uniformModel="A3\Characters_F\Common\cappatrol.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
			passThrough=0.60000002;
		};
	};
};
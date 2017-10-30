class CfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_03_f;
	class B_Soldier_base_F;
	class VSM_MulticamTropic_Crye_Uniform: B_Soldier_F
	{
		author="VanSchmoozin";
		_generalMacro="B_soldier_F";
		scope=1;
		displayName="MulticamTropic (Crye)";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		faction="VSM_GP";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="VSM_MulticamTropic_Crye_Camo";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]={"VSM_MulticamTropic\Data\VSM_ARD_MulticamTropic_1.paa"};
		hiddenSelectionsMaterials[]={"VSM_MulticamTropic\Data\VSM_ARD.RVMAT"};
		
		weapons[]={"Throw","Put"};
		respawnWeapons[]={"Throw","Put"};
		
		magazines[]={"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[]={"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	
	class B_AssaultPack_Base;
	class VSM_MulticamTropic_Backpack_Compact: B_AssaultPack_Base
	{
		scope=2;
		displayName="[JSO] Assaultpack (Multicam)";
		author="VanSchmoozin";
		picture="\VSM_MulticamTropic\Data\Icons\icon_compact.paa";
		hiddenSelectionsTextures[]=
		{
			"VSM_MulticamTropic\Data\VSM_MulticamTropic_compact.paa"
		};
	};
	class B_kitbag_Base;
	class VSM_MulticamTropic_Backpack_Kitbag: B_kitbag_Base
	{
		scope=2;
		displayName="[JSO] Kitbag (Mulitcam)";
		author="VanSchmoozin";
		model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture="\VSM_MulticamTropic\Data\Icons\icon_kitbag.paa";
		hiddenSelectionsTextures[]=
		{
			"VSM_MulticamTropic\Data\VSM_MulticamTropic_kitbag.paa"
		};
	};
	class B_Carryall_Base;
	class VSM_MulticamTropic_carryall: B_Carryall_Base
	{
		scope=2;
		displayName="[JSO] Carryall Backpack (Mulitcam)";
		author="VanSchmoozin";
		picture="\VSM_MulticamTropic\Data\Icons\icon_bag.paa";
		hiddenSelectionsTextures[]=
		{
			"VSM_MulticamTropic\Data\VSM_MulticamTropic_carryall.paa"
		};
	};
};
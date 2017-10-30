class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class VSM_MulticamTropic_OPS_2: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		author="VanSchmoozin";
		displayName="[JSO] Fast Helmet (Mulitcam)";
		picture="\VSM_Helmets\Icons\helmet.paa";
		model="\VSM_Helmets\Models\VSM_ops_2";
		hiddenSelections[]=
		{
			"_helmBase",
			"_helmStrobe",
			"_nvgBattery",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"VSM_Helmets\Textures\VSM_ops_MulticamTropic.paa",
			"vsm_helmets\Textures\helmet_1_co.paa",
			"vsm_helmets\Textures\vsm_ech_2_projecthonor.paa",
			"vsm_helmets\Textures\rr_ops\tex\headset_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=15;
			allowedSlots[]={901,605};
			uniformModel="\VSM_Helmets\Models\VSM_ops_2";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"_helmBase",
				"_helmStrobe",
				"_nvgBattery",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
};
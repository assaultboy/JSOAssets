class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class VSM_FAPC_Operator_MulticamTropic: ItemCore
	{
		scope=2;
		displayName="[JSO] Plate Carrier (Multicam)";
		author="VanSchmoozin - Ardvarkdb";
		picture="\VSM_Vests\Icons\icon_vest.paa";
		model="VSM_Vests\data\VSM_FAPC_Operator";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa",
			"vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa",
			"vsm_vests\lbt6094\textures\vsm_dropholster.paa",
			"vsm_vests\spectergear_rav\data\serpa.paa",
			"vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa",
			"vsm_vests\spectergear_rav\data\radio_pouch_green.paa",
			"vsm_vests\vsm_fapc\textures\vsm_fapc.paa",
			"vsm_vests\spectergear_rav\data\vsm_pouches_multicamtropic.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\data\VSM_FAPC_Operator";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
};
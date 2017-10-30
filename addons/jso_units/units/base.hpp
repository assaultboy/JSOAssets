class JSO_base_alpha: B_Soldier_base_F
{
	side = 1;
	faction = "JSO_faction";
	editorSubcategory = "EdSubcat_Personnel_Camo_Alpha";
	_generalMacro = "JSO_base_alpha";
	
	editorPreview = "\jso_units\editorPreviews\JSO_base_alpha.jpg";
	
	author = "Joint Security Organisation";
	displayName = "Unarmed Member";
	
	scope = 2;
	scopeCurator = 2;
	
	weapons[] = {"Throw","Put"}; 
	respawnWeapons[] = {"Throw","Put"};
	
	magazines[] = {STANDARDTHROWABLES};
	respawnMagazines[] = {STANDARDTHROWABLES};
	
	Items[] = {STANDARDITEMS};
	RespawnItems[] = {STANDARDITEMS};
	
	linkedItems[] = {STANDARDLINKED, "H_HelmetSpecB_blk"};
	respawnLinkedItems[] = {STANDARDLINKED, "H_HelmetSpecB_blk"};
	
	backpack = "B_ViperLightHarness_blk_F";
	
	uniformClass = "U_B_CTRG_1";
};

class JSO_base_bravo: JSO_base_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Bravo";
	_generalMacro = "JSO_base_bravo";
	uniformClass = "U_B_CTRG_Soldier_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_base_bravo.jpg";
	
	linkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
	respawnLinkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
};

class JSO_base_charlie: JSO_base_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Charlie";
	_generalMacro = "JSO_base_charlie";
	uniformClass = "VSM_MulticamTropic_Crye_Camo";
	
	editorPreview = "\jso_units\editorPreviews\JSO_base_charlie.jpg";
	
	Items[] = {STANDARDITEMS};
	RespawnItems[] = {STANDARDITEMS};
	
	linkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	respawnLinkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	
	backpack = "VSM_MulticamTropic_Backpack_Compact";
};

class JSO_base_zulu: JSO_base_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Zulu";
	_generalMacro = "JSO_base_zulu";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_base_zulu.jpg";
};

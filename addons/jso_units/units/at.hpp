class JSO_at_alpha: JSO_base_alpha
{
	_generalMacro = "JSO_at_alpha";
	
	editorPreview = "\jso_units\editorPreviews\JSO_at_alpha.jpg";
	
	displayName = "Anti Tank";
	icon = "iconManAT";
	
	weapons[] = {"JSO_weapon_carbine","launch_NLAW_F","Throw","Put"}; 
	respawnWeapons[] = {"JSO_weapon_carbine","launch_NLAW_F","Throw","Put"}; 
	
	magazines[] = {STANDARDTHROWABLES, STANDARDMAGS6};
	respawnMagazines[] = {STANDARDTHROWABLES, STANDARDMAGS6};
};

class JSO_at_bravo: JSO_at_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Bravo";
	_generalMacro = "JSO_at_bravo";
	uniformClass = "U_B_CTRG_Soldier_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_at_bravo.jpg";
	
	linkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
	respawnLinkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
};

class JSO_at_charlie: JSO_at_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Charlie";
	_generalMacro = "JSO_at_charlie";
	uniformClass = "VSM_MulticamTropic_Crye_Camo";
	
	editorPreview = "\jso_units\editorPreviews\JSO_at_charlie.jpg";
	
	linkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	respawnLinkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	
	backpack = "VSM_MulticamTropic_Backpack_Compact";
};

class JSO_at_zulu: JSO_at_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Zulu";
	_generalMacro = "JSO_at_zulu";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_at_zulu.jpg";
};

class JSO_rifleman_alpha: JSO_base_alpha
{
	_generalMacro = "JSO_rifleman_alpha";
	
	editorPreview = "\jso_units\editorPreviews\JSO_rifleman_alpha.jpg";
	
	displayName = "Rifleman";
	
	weapons[] = {"JSO_weapon_rifle","Throw","Put"}; 
	respawnWeapons[] = {"JSO_weapon_rifle","Throw","Put"};
	
	magazines[] = {STANDARDTHROWABLES, STANDARDMAGS8};
	respawnMagazines[] = {STANDARDTHROWABLES, STANDARDMAGS8};
};

class JSO_rifleman_bravo: JSO_rifleman_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Bravo";
	_generalMacro = "JSO_rifleman_bravo";
	uniformClass = "U_B_CTRG_Soldier_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_rifleman_bravo.jpg";
	
	linkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
	respawnLinkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
};

class JSO_rifleman_charlie: JSO_rifleman_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Charlie";
	_generalMacro = "JSO_rifleman_charlie";
	uniformClass = "VSM_MulticamTropic_Crye_Camo";
	
	editorPreview = "\jso_units\editorPreviews\JSO_rifleman_charlie.jpg";
	
	linkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	respawnLinkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	
	backpack = "VSM_MulticamTropic_Backpack_Compact";
};

class JSO_rifleman_zulu: JSO_rifleman_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Zulu";
	_generalMacro = "JSO_rifleman_zulu";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_rifleman_zulu.jpg";
};

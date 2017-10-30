class JSO_medic_alpha: JSO_base_alpha
{
	_generalMacro = "JSO_medic_alpha";
	
	editorPreview = "\jso_units\editorPreviews\JSO_medic_alpha.jpg";
	
	displayName = "Medic";
	icon = "iconManMedic";
	
	weapons[] = {"JSO_weapon_rifle","Throw","Put"}; 
	respawnWeapons[] = {"JSO_weapon_rifle","Throw","Put"}; 
	
	magazines[] = {STANDARDTHROWABLES, STANDARDMAGS8};
	respawnMagazines[] = {STANDARDTHROWABLES, STANDARDMAGS8};
	
	backpack = "JSO_backpack_medic";
};

class JSO_medic_bravo: JSO_medic_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Bravo";
	_generalMacro = "JSO_medic_bravo";
	uniformClass = "U_B_CTRG_Soldier_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_medic_bravo.jpg";
	
	linkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
	respawnLinkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
};

class JSO_medic_charlie: JSO_medic_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Charlie";
	_generalMacro = "JSO_medic_charlie";
	uniformClass = "VSM_MulticamTropic_Crye_Camo";
	
	editorPreview = "\jso_units\editorPreviews\JSO_medic_charlie.jpg";
	
	linkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	respawnLinkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	
	backpack = "JSO_backpack_medic_charlie";
};

class JSO_medic_zulu: JSO_medic_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Zulu";
	_generalMacro = "JSO_medic_zulu";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_medic_zulu.jpg";
};

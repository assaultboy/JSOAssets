class JSO_marksman_alpha: JSO_base_alpha
{
	_generalMacro = "JSO_marksman_alpha";
	
	editorPreview = "\jso_units\editorPreviews\JSO_marksman_alpha.jpg";
	
	displayName = "Marksman";
	
	weapons[] = {"JSO_weapon_dmr","Throw","Put"}; 
	respawnWeapons[] = {"JSO_weapon_dmr","Throw","Put"}; 
	
	magazines[] = {STANDARDTHROWABLES, STANDARDMAGS8};
	respawnMagazines[] = {STANDARDTHROWABLES, STANDARDMAGS8};
};

class JSO_marksman_bravo: JSO_marksman_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Bravo";
	_generalMacro = "JSO_marksman_bravo";
	uniformClass = "U_B_CTRG_Soldier_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_marksman_bravo.jpg";
	
	linkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
	respawnLinkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
};

class JSO_marksman_charlie: JSO_marksman_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Charlie";
	_generalMacro = "JSO_marksman_charlie";
	uniformClass = "VSM_MulticamTropic_Crye_Camo";
	
	editorPreview = "\jso_units\editorPreviews\JSO_marksman_charlie.jpg";
	
	linkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	respawnLinkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	
	backpack = "VSM_MulticamTropic_Backpack_Compact";
};

class JSO_marksman_zulu: JSO_marksman_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Zulu";
	_generalMacro = "JSO_marksman_zulu";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_marksman_zulu.jpg";
};

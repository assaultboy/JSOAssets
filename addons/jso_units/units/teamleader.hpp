class JSO_teamleader_alpha: JSO_base_alpha
{
	_generalMacro = "JSO_teamleader_alpha";
	
	editorPreview = "\jso_units\editorPreviews\JSO_teamleader_alpha.jpg";
	
	displayName = "Teamleader";
	icon = "iconManLeader";
	
	weapons[] = {"JSO_weapon_rifle","Laserdesignator","Throw","Put"}; 
	respawnWeapons[] = {"JSO_weapon_rifle","Laserdesignator","Throw","Put"};
	
	magazines[] = {STANDARDTHROWABLES, STANDARDMAGS6, "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer"};
	respawnMagazines[] = {STANDARDTHROWABLES, STANDARDMAGS6, "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer"};
	
	Items[] = {STANDARDITEMS, "ACRE_PRC148"};
	RespawnItems[] = {STANDARDITEMS, "ACRE_PRC148"};
};

class JSO_teamleader_bravo: JSO_teamleader_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Bravo";
	_generalMacro = "JSO_teamleader_bravo";
	uniformClass = "U_B_CTRG_Soldier_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_teamleader_bravo.jpg";
	
	linkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
	respawnLinkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
};

class JSO_teamleader_charlie: JSO_teamleader_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Charlie";
	_generalMacro = "JSO_teamleader_charlie";
	uniformClass = "VSM_MulticamTropic_Crye_Camo";
	
	editorPreview = "\jso_units\editorPreviews\JSO_teamleader_charlie.jpg";
	
	linkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	respawnLinkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	
	backpack = "VSM_MulticamTropic_Backpack_Compact";
};

class JSO_teamleader_zulu: JSO_teamleader_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Zulu";
	_generalMacro = "JSO_teamleader_zulu";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_teamleader_zulu.jpg";
};

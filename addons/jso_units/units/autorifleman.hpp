class JSO_autorifleman_alpha: JSO_base_alpha
{
	_generalMacro = "JSO_autorifleman_alpha";
	
	editorPreview = "\jso_units\editorPreviews\JSO_autorifleman_alpha.jpg";
	
	displayName = "Autorifleman";
	icon = "iconManMG";
	
	weapons[] = {"JSO_weapon_autorifle","Throw","Put"}; 
	respawnWeapons[] = {"JSO_weapon_autorifle","Throw","Put"}; 
	
	magazines[] = {STANDARDTHROWABLES, "100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag"};
	respawnMagazines[] = {STANDARDTHROWABLES, "100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag"};
};

class JSO_autorifleman_bravo: JSO_autorifleman_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Bravo";
	_generalMacro = "JSO_autorifleman_bravo";
	uniformClass = "U_B_CTRG_Soldier_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_autorifleman_bravo.jpg";
	
	linkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
	respawnLinkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
};

class JSO_autorifleman_charlie: JSO_autorifleman_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Charlie";
	_generalMacro = "JSO_autorifleman_charlie";
	uniformClass = "VSM_MulticamTropic_Crye_Camo";
	
	editorPreview = "\jso_units\editorPreviews\JSO_autorifleman_charlie.jpg";
	
	linkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	respawnLinkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	
	backpack = "VSM_MulticamTropic_Backpack_Compact";
};

class JSO_autorifleman_zulu: JSO_autorifleman_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Zulu";
	_generalMacro = "JSO_autorifleman_zulu";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_autorifleman_zulu.jpg";
};

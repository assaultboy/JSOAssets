class JSO_grenadier_alpha: JSO_base_alpha
{
	_generalMacro = "JSO_grenadier_alpha";
	
	editorPreview = "\jso_units\editorPreviews\JSO_grenadier_alpha.jpg";
	
	displayName = "Grenadier";
	
	weapons[] = {"JSO_weapon_gl","Throw","Put"}; 
	respawnWeapons[] = {"JSO_weapon_gl","Throw","Put"};
	
	magazines[] = {STANDARDTHROWABLES, STANDARDMAGS8,"3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell"};
	respawnMagazines[] = {STANDARDTHROWABLES, STANDARDMAGS8,"3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell"};
};

class JSO_grenadier_bravo: JSO_grenadier_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Bravo";
	_generalMacro = "JSO_grenadier_bravo";
	uniformClass = "U_B_CTRG_Soldier_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_grenadier_bravo.jpg";
	
	linkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
	respawnLinkedItems[] = {STANDARDLINKED, "H_HelmetSpecB"};
};

class JSO_grenadier_charlie: JSO_grenadier_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Charlie";
	_generalMacro = "JSO_grenadier_charlie";
	uniformClass = "VSM_MulticamTropic_Crye_Camo";
	
	editorPreview = "\jso_units\editorPreviews\JSO_grenadier_charlie.jpg";
	
	linkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	respawnLinkedItems[] = {CHARLIELINKED, "VSM_MulticamTropic_OPS_2"};
	
	backpack = "VSM_MulticamTropic_Backpack_Compact";
};

class JSO_grenadier_zulu: JSO_grenadier_alpha
{
	editorSubcategory = "EdSubcat_Personnel_Camo_Zulu";
	_generalMacro = "JSO_grenadier_zulu";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	
	editorPreview = "\jso_units\editorPreviews\JSO_grenadier_zulu.jpg";
};

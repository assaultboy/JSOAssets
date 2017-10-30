class CfgPatches
{
	class JSO_units
	{
		units[] = {
			"JSO_at_alpha", "JSO_at_bravo", "JSO_at_charlie", "JSO_at_zulu",
			"JSO_marksman_alpha", "JSO_marksman_bravo", "JSO_marksman_charlie", "JSO_marksman_zulu",
			"JSO_grenadier_alpha", "JSO_grenadier_bravo", "JSO_grenadier_charlie", "JSO_grenadier_zulu",
			"JSO_base_alpha", "JSO_base_bravo", "JSO_base_charlie", "JSO_base_zulu",
			"JSO_teamleader_alpha", "JSO_teamleader_bravo", "JSO_teamleader_charlie", "JSO_teamleader_zulu",
			"JSO_squadleader_alpha", "JSO_squadleader_bravo", "JSO_squadleader_charlie", "JSO_squadleader_zulu",
			"JSO_autorifleman_alpha", "JSO_autorifleman_bravo", "JSO_autorifleman_charlie", "JSO_autorifleman_zulu",
			"JSO_medic_alpha", "JSO_medic_bravo", "JSO_medic_charlie", "JSO_medic_zulu",
			"JSO_rifleman_alpha", "JSO_rifleman_bravo", "JSO_rifleman_charlie", "JSO_rifleman_zulu"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F", "A3_Weapons_F_NATO"};
	};
};

#include "cfgVehicles.hpp"
#include "cfgWeapons.hpp"
#include "cfgGroups.hpp"
#include "cfgEditorSubcategories.hpp"
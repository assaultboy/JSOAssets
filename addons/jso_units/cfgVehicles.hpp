#define STANDARDTHROWABLES "SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","MiniGrenade","MiniGrenade"
#define STANDARDLINKED "V_PlateCarrier2_blk","ItemMap","ItemCompass","ItemWatch","NVGoggles_OPFOR"
#define CHARLIELINKED "VSM_FAPC_Operator_MulticamTropic","ItemMap","ItemCompass","ItemWatch","NVGoggles_OPFOR"
#define STANDARDITEMS "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_EntrenchingTool","ACE_Flashlight_MX991","ACRE_PRC343", "ACE_MapTools"
#define STANDARDMAGS8 "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"
#define STANDARDMAGS6 "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"

class cfgFactionClasses
{
	class JSO_faction
	{
		displayName = "Joint Security Organisation";
		side = 1;
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	
	#include "units\base.hpp"
	#include "units\rifleman.hpp"
	#include "units\teamleader.hpp"
	#include "units\autorifleman.hpp"
	#include "units\marksman.hpp"
	#include "units\grenadier.hpp"
	#include "units\at.hpp"
	#include "units\medic.hpp"
	#include "units\squadleader.hpp"
	
	
	//Define our medic backpack here because it needs to be a vehicle
	class B_ViperLightHarness_blk_F;

	class JSO_backpack_medic: B_ViperLightHarness_blk_F
	{
		scope = 2;
		scopeArsenal = 0;

		class TransportItems
		{
			class _10_Morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class _15_Bandage
			{
				name = "ACE_fieldDressing";
				count = 15;
			};
			class _5_Epinephrine
			{
				name = "ACE_epinephrine";
				count = 5;
			};
			class _2_BloodBag
			{
				name = "ACE_bloodIV_500";
				count = 2;
			};
		};
	};
	
	class VSM_MulticamTropic_Backpack_Kitbag;
	class JSO_backpack_medic_charlie: VSM_MulticamTropic_Backpack_Kitbag
	{
		scope = 2;
		scopeArsenal = 0;

		class TransportItems
		{
			class _10_Morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class _15_Bandage
			{
				name = "ACE_fieldDressing";
				count = 15;
			};
			class _5_Epinephrine
			{
				name = "ACE_epinephrine";
				count = 5;
			};
			class _2_BloodBag
			{
				name = "ACE_bloodIV_500";
				count = 2;
			};
		};
	};
};
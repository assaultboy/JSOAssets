class CfgPatches
{
	class VSM_MulticamTropic_Config
	{
		units[] = {"VSM_MulticamTropic_Mod"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

#include "cfgFactionClasses.hpp"
#include "cfgVehicles.hpp"
#include "cfgWeapons.hpp"

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
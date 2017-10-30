/*
	Author: J.Romano

	Description:
	Defines custom rank icons through ACE
	
	Remark(s):
	This function is called automatically, and as such should not be called by the mission maker

	Parameter(s):
		None

	Example:
	[] call JSO_fnc_setRankIcons;

	Returns:
	None
*/

["JSO_faction", ["\jso_units\ranks\private.paa",
	"\jso_units\ranks\corporal.paa",
	"\jso_units\ranks\sergeant.paa",
	"\jso_units\ranks\lieutenant.paa",
	"\jso_units\ranks\captain.paa",
	"\jso_units\ranks\major.paa",
	"\jso_units\ranks\colonel.paa"
]] call ace_nametags_fnc_setFactionRankIcons;
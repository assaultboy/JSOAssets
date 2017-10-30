/*
	Author: J.Romano

	Description:
	Forces the local player out of spectator mode.
	
	Remark(s):
	This function must be called on a client with an interface.

	Parameter(s):
		None

	Example:
	[] call JSO_fnc_exitSpectator;

	Returns:
	None
*/

//Only execute on CLients
if (!hasInterface) exitWith {systemChat "JSO_fnc_exitSpectator: Function must be called on a client with an interface"};

//This will force the player out of spectator mode
[false] call ace_spectator_fnc_setSpectator;
[player, false] call ace_spectator_fnc_stageSpectator;

//Set our spectating variable
player setVariable ["JSO_isSpectator", false, true];
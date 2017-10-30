/*
	Author: J.Romano

	Description:
	Forces the local player into spectator mode.
	
	Remark(s):
	This function must be called on a client with an interface.

	Parameter(s):
		None

	Example:
	[] call JSO_fnc_enterSpectator;

	Returns:
	None
*/

//Only execute on CLients
if (!hasInterface) exitWith {systemChat "JSO_fnc_enterSpectator: Function must be called on a client with an interface"};

//This will force the player into spectator mode
[true] call ace_spectator_fnc_setSpectator;
[player, true] call ace_spectator_fnc_stageSpectator;

//Set our spectating variable
player setVariable ["JSO_isSpectator", true, true];

//If our death point was not set, then set it to the players current position
if (isNil "JSO_var_deathPoint") then {JSO_var_spectatorDeathPoint = getPosATL player};

//Move the camera to our death position
[0, objNull, -2, getPosATL player] call ace_spectator_fnc_setCameraAttributes
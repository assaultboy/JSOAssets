class CfgVehicles
{
	class Land;
	class Man: Land
	{
		class EventHandlers
		{
			class JSO
			{
				respawn = "_this call JSO_fnc_handleRespawn";
			};
		};
	};
};
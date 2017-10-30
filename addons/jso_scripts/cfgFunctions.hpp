class CfgFunctions
{
	class JSO
	{
		class misc
		{
			file = "jso_scripts\misc";
			
			class dummyFunction {};
		};
		
		class spectator
		{
			file = "jso_scripts\spectator";
			
			class enterSpectator {};
			class exitSpectator {};
		};
		
		class units
		{
			file = "jso_scripts\units";
			
			class setRankIcons {postInit = 1};
		};
	};
};
class CfgVehicles
{
	class Flag_White_F;
	
	class Flag_JSO_F: Flag_White_F {
		displayName = "Flag (JSO)";
		editorPreview = "\jso_objects\editorPreviews\Flag_JSO_F.jpg";
		
		scope = 2;
		scopeCurator = 2;
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\jso_objects\textures\jso_flag.paa'";
		};
	};
};
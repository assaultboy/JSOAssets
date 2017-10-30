class JSO_fireteam_charlie
{
	name = "Fireteam";
	faction = "JSO_faction";
	icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
	side = 1;

	class Unit0
	{
		side = 1;
		vehicle = "JSO_teamleader_charlie";
		rank = "CORPORAL";
		position[] = { 0, 0, 0 };
	};
	class Unit1
	{
		side = 1;
		vehicle = "JSO_at_charlie";
		rank = "PRIVATE";
		position[] = {5, -5, 0};
	};
	class Unit2
	{
		side = 1;
		vehicle = "JSO_grenadier_charlie";
		rank = "PRIVATE";
		position[] = {-5, -5, 0};
	};
	class Unit3
	{
		side = 1;
		vehicle = "JSO_medic_charlie";
		rank = "PRIVATE";
		position[] = {10, -10, 0};
	};
};
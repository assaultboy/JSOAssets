class JSO_weaponteam_alpha
{
	name = "Weapons Team";
	faction = "JSO_faction";
	icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
	side = 1;

	class Unit0
	{
		side = 1;
		vehicle = "JSO_teamleader_alpha";
		rank = "CORPORAL";
		position[] = { 0, 0, 0 };
	};
	class Unit1
	{
		side = 1;
		vehicle = "JSO_autorifleman_alpha";
		rank = "PRIVATE";
		position[] = {5, -5, 0};
	};
	class Unit2
	{
		side = 1;
		vehicle = "JSO_marksman_alpha";
		rank = "PRIVATE";
		position[] = {-5, -5, 0};
	};
	class Unit3
	{
		side = 1;
		vehicle = "JSO_at_alpha";
		rank = "PRIVATE";
		position[] = {10, -10, 0};
	};
};
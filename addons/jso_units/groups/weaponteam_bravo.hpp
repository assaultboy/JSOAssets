class JSO_weaponteam_bravo
{
	name = "Weapons Team";
	faction = "JSO_faction";
	icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
	side = 1;

	class Unit0
	{
		side = 1;
		vehicle = "JSO_teamleader_bravo";
		rank = "CORPORAL";
		position[] = { 0, 0, 0 };
	};
	class Unit1
	{
		side = 1;
		vehicle = "JSO_autorifleman_bravo";
		rank = "PRIVATE";
		position[] = {5, -5, 0};
	};
	class Unit2
	{
		side = 1;
		vehicle = "JSO_marksman_bravo";
		rank = "PRIVATE";
		position[] = {-5, -5, 0};
	};
	class Unit3
	{
		side = 1;
		vehicle = "JSO_at_bravo";
		rank = "PRIVATE";
		position[] = {10, -10, 0};
	};
};
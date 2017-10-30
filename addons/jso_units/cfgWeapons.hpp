class cfgWeapons
{
	class arifle_MX_Black_F;
	class arifle_MX_SW_Black_F;
	class arifle_MXM_Black_F;
	class arifle_MX_GL_Black_F;
	class arifle_MXC_Black_F;
	
	class JSO_weapon_rifle: arifle_MX_Black_F
	{
		scope = 2;
		scopeArsenal = 0;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	
	class JSO_weapon_autorifle: arifle_MX_SW_Black_F
	{
		scope = 2;
		scopeArsenal = 0;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};
	
	class JSO_weapon_dmr: arifle_MXM_Black_F
	{
		scope = 2;
		scopeArsenal = 0;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};
	
	class JSO_weapon_gl: arifle_MX_GL_Black_F
	{
		scope = 2;
		scopeArsenal = 0;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	
	class JSO_weapon_carbine: arifle_MXC_Black_F
	{
		scope = 2;
		scopeArsenal = 0;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
};
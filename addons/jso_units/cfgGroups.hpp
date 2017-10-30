class CfgGroups
{
	class WEST
	{

		class JSO
		{
			name = "Joint Security Organisation";


			class Infantry_Alpha
			{
				name = "Infantry (Alpha Dress)";
				
				#include "groups\fireteam_alpha.hpp"
				#include "groups\weaponteam_alpha.hpp"
				#include "groups\sentry_alpha.hpp"
				#include "groups\squad_alpha.hpp"
			};
			
			class Infantry_Bravo
			{
				name = "Infantry (Bravo Dress)";
				
				#include "groups\fireteam_bravo.hpp"
				#include "groups\weaponteam_bravo.hpp"
				#include "groups\sentry_bravo.hpp"
				#include "groups\squad_bravo.hpp"
			};
			
			class Infantry_Charlie
			{
				name = "Infantry (Charlie Dress)";
				
				#include "groups\fireteam_charlie.hpp"
				#include "groups\weaponteam_charlie.hpp"
				#include "groups\sentry_charlie.hpp"
				#include "groups\squad_charlie.hpp"
			};
			
			class Infantry_Zulu
			{
				name = "Infantry (Zulu Dress)";
				
				#include "groups\fireteam_zulu.hpp"
				#include "groups\weaponteam_bravo.hpp"
				#include "groups\sentry_bravo.hpp"
				#include "groups\squad_bravo.hpp"
			};
		};
	};
};
class CfgPatches
{
   class Uni_SOF {
       units[] = {"Uni_Sof_BW"};
       weapons[] = {};
       requiredVersion = 0.1;
       requiredAddons[] = {"A3_Characters_F"};
   };
};

class CfgFactionClasses {
	class Uni_Sof_BW {
		DisplayName = "Officier BW SOF";
		priority = 3;
		side = TWest;
		icon = "-";
	};
};

class cfgVehicles {
	class I_Uniform_ParadeUniform_01_AAF_F;				//Non-decorated
	class I_Uniform_ParadeUniform_01_AAF_decorated_F;		//Decorated
	class O_Uniform_ParadeUniform_01_CSAT_F;
	class O_Uniform_ParadeUniform_01_CSAT_decorated_F;
	
	class B_BW_SOF_Unioffi: I_Uniform_ParadeUniform_01_AAF_F
	{
		modelSides[] = {6};									// Technically not needed but this will allow any faction's unit to wear it
		uniformClass = "BW_SOF_Unioffi";		// Replace this with your uniform class in CfgWeapons
		hiddenSelectionsTextures[] =
		{
			"uni_sof\ofiBW.paa",									// This is your retexture's .paa
			"",																				// Leave this blank
			"uni_sof\BoucleBW.paa",		// Decorations for the buttons, etc.
		};
	};

	// NOTE: For the decorated versions, hiddenSelectionsTextures uses four array elements instead of three.
	// The repeated custom texture is NOT a duplicate and is needed for the uniform to appear properly.
	class B_BW_SOF_Unioffi_decorated: I_Uniform_ParadeUniform_01_AAF_decorated_F
	{
		modelSides[] = {6};
		uniformClass = "BW_SOF_Unioffi_Decorated";
		hiddenSelectionsTextures[] =
		{
			"uni_sof\ofiBW.paa",		// #1
			"uni_sof\ofiBW.paa",		// #2 (yes, this is needed)
			"uni_sof\BoucleBW.paa",
			"a3\characters_f_aow\uniforms\data\Ribbon_01_CSAT_CO.paa"
		};
	};
	class B_US_SOF_Unioffi: O_Uniform_ParadeUniform_01_CSAT_F
	{
		modelSides[] = {6};									// Technically not needed but this will allow any faction's unit to wear it
		uniformClass = "US_SOF_Unioffi";		// Replace this with your uniform class in CfgWeapons
		hiddenSelectionsTextures[] =
		{
			"uni_sof\ofiUS.paa",									// This is your retexture's .paa
			"",																				// Leave this blank
			"uni_sof\BoucleUS.paa",		// Decorations for the buttons, etc.
		};
	};

	// NOTE: For the decorated versions, hiddenSelectionsTextures uses four array elements instead of three.
	// The repeated custom texture is NOT a duplicate and is needed for the uniform to appear properly.
	class B_US_SOF_Unioffi_decorated: O_Uniform_ParadeUniform_01_CSAT_decorated_F
	{
		modelSides[] = {6};
		uniformClass = "US_SOF_Unioffi_Decorated";
		hiddenSelectionsTextures[] =
		{
			"uni_sof\ofiUS.paa",		// #1
			"uni_sof\ofiUS.paa",		// #2 (yes, this is needed)
			"uni_sof\BoucleUS.paa",
			"a3\characters_f_aow\uniforms\data\Ribbon_01_US_CO.paa"
		};
	};
};


class cfgWeapons {
	// External class references
	class UniformItem;
	class Uniform_Base;
	
	// Inherit from vanilla. You don't have to do this but it saves you the trouble of having to redefine most tokens.
	class U_I_ParadeUniform_01_AAF_F: Uniform_Base
	{
		class ItemInfo;
	};
	
	class U_O_ParadeUniform_01_CSAT_F: Uniform_Base
	{
		class ItemInfo;
	};
	
	/*class U_O_ParadeUniform_01_CSAT_F: Uniform_Base
	{
		class ItemInfo;
	};*/
	
	class BW_SOF_Unioffi: U_I_ParadeUniform_01_AAF_F
	{
		author = "Raz0rLegend";
		displayName = "Parade Uniform, BundesWehr";
		picture = "";	// Your icon for the uniform
		class ItemInfo: ItemInfo
		{
			uniformClass = "B_BW_SOF_Unioffi";	// Your custom class in CfgVehicles
		};
	};
	class BW_SOF_Unioffi_decorated: U_I_ParadeUniform_01_AAF_F
	{
		author = "Raz0rLegend";
		displayName = "Parade Uniform, BundesWehr";
		picture = "";	// Your icon for the uniform
		class ItemInfo: ItemInfo
		{
			uniformClass = "B_BW_SOF_Unioffi_decorated";	// Your custom class in CfgVehicles
		};
	};
	class US_SOF_Unioffi: U_O_ParadeUniform_01_CSAT_F
	{
		author = "Raz0rLegend";
		displayName = "Parade Uniform, Airborne";
		picture = "";	// Your icon for the uniform
		class ItemInfo: ItemInfo
		{
			uniformClass = "B_US_SOF_Unioffi";	// Your custom class in CfgVehicles
		};
	};
	class US_SOF_Unioffi_decorated: U_O_ParadeUniform_01_CSAT_F
	{
		author = "Raz0rLegend";
		displayName = "Parade Uniform, Airborne";
		picture = "";	// Your icon for the uniform
		class ItemInfo: ItemInfo
		{
			uniformClass = "B_US_SOF_Unioffi_decorated";	// Your custom class in CfgVehicles
		};
	};
	
	class H_ParadeDressCap_01_US_F;
	
		class Para_cap_us : H_ParadeDressCap_01_US_F {
		author = "Raz0rLegend";
		allowedFacewear[] = {};
		displayName = "Casquette Parade Airborne";
		picture = "";
		hiddenSelectionsTextures[] = {"uni_sof\capus.paa"};
	};
};
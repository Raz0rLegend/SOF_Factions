class Mode_SemiAuto;

class CfgPatches {

	class Edit_BW_SOF {
		units[] = 
		{
			"BWA3_Leopard2AX_Fleck",
			"BWA3_Leopard2AX_Tropen",
			"BWA3_Leopard2_KWS3_Fleck",
			"BWA3_Leopard2_KWS3_Tropen"
		};
		weapons[] = {};
		requiredVersion = 1.820000;
		version = 1.000;
		requiredAddons[] = 
		{
			"bwa3_common",
			"bwa3_weapons",
			"bwa3_units",
			"bwa3_puma",
			"bwa3_leopard2",
			"bwa3_dingo2",
			"bwa3_eagle"
		};
		author = "Raz0rLegend";
		name = "BWmod Tweaks";
		dlc = "Edit_BW_SOF";
		fileName = "Edit_BW_SOF.pbo";
	};

};

class CfgMods{
	class Mod_Base;
	class Edit_BW_SOF {
		author = "Raz0rLegend";
		dlcColor[] = {0, 0, 0, 1};
		tooltip = "";
		tooltipOwned = "";
		name = "";
		overview = "";
		dir = "Edit_BW_SOF";
	};
};

class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;

/*class CfgWeapons 
{
	class CannonCore;
	class autocannon_Base_F;
	
	class SmokeLauncher;
	class HMG_127;
	class HMG_127_MBT;
	class HMG_127_APC;
	class cannon_120mm;
	class cannon_120mm_long;
	class cannon_125mm;	
	class mortar_155mm_AMOS;
	class LMG_coax;
	class Laserdesignator_mounted;
	class missile_titan;
	class GMG_40mm;
	class BWA3_MG3_vehicle;
	class missiles_titan;
	
	class MMG_02_coax : LMG_coax
	{
		displayName = "SPMG";
		//magazineWell[] = {"UAS_BASE_338NM_MG"};
	};
		
	class BWA3_MG3_loader : BWA3_MG3_vehicle 
	{
		//magazineWell[] = {"UAS_762x51_MG"};
	};
	
	class BWA3_L55 : cannon_120mm_long
	{
		modes[] = {"player"};
		displayName = "L55";
		/*magazines[] = 
		{
			"UAS_120mm_M827_1Rnd",
			"UAS_120mm_M829_1Rnd",
			"UAS_120mm_M829A1_1Rnd",
			"UAS_120mm_M829A2_1Rnd",
			"UAS_120mm_M829A3_1Rnd",
			"UAS_120mm_M829A4_1Rnd",
			"UAS_120mm_M829A5_1Rnd",				
			"UAS_120mm_M1028_1Rnd",
			"UAS_120mm_DM13_1Rnd",
			"UAS_120mm_DM23_1Rnd",
			"UAS_120mm_DM33_1Rnd",
			"UAS_120mm_DM33_PELE_1Rnd",
			"UAS_120mm_DM43_1Rnd", 
			"UAS_120mm_DM43A1_1Rnd",
			"UAS_120mm_DM53_1Rnd",
			"UAS_120mm_DM53A1_1Rnd",
			"UAS_120mm_DM63_1Rnd",
			"UAS_120mm_DM63A1_1Rnd",
			"UAS_120mm_DM63_Plus_1Rnd",
			"UAS_120mm_DM73_1Rnd",
			"UAS_120mm_GD120_1Rnd",				
			"UAS_120mm_K276_1Rnd",
			"UAS_120mm_KEW_A2_1Rnd",				
			"UAS_120mm_XM1111_MRM_KE_1Rnd",				
			"UAS_120mm_XM1007_TERM_KE_1Rnd",
			"UAS_120mm_XROD_KE_1Rnd",	
			"UAS_120mm_JM33_1Rnd",
			"UAS_120mm_Type10_1Rnd",
			"UAS_120mm_F1B_1Rnd",
			"UAS_120mm_F1B_Plus_1Rnd",
			"UAS_120mm_SHARD_1Rnd",					
			"UAS_120mm_M827_5Rnd",
			"UAS_120mm_M829_5Rnd",
			"UAS_120mm_M829A1_5Rnd",
			"UAS_120mm_M829A2_5Rnd",
			"UAS_120mm_M829A3_5Rnd",
			"UAS_120mm_M829A4_5Rnd",
			"UAS_120mm_M829A5_5Rnd",				
			"UAS_120mm_M1028_5Rnd",
			"UAS_120mm_DM13_5Rnd",
			"UAS_120mm_DM23_5Rnd",
			"UAS_120mm_DM33_5Rnd",
			"UAS_120mm_DM33_PELE_5Rnd",
			"UAS_120mm_DM43_5Rnd",
			"UAS_120mm_DM43A1_5Rnd",
			"UAS_120mm_DM53_5Rnd",
			"UAS_120mm_DM53A1_5Rnd",
			"UAS_120mm_DM63_5Rnd",
			"UAS_120mm_DM63A1_5Rnd",
			"UAS_120mm_DM63_Plus_5Rnd",
			"UAS_120mm_DM73_5Rnd",
			"UAS_120mm_GD120_5Rnd",				
			"UAS_120mm_K276_5Rnd",
			"UAS_120mm_KEW_A2_5Rnd",				
			"UAS_120mm_XM1111_MRM_KE_5Rnd",				
			"UAS_120mm_XM1007_TERM_KE_5Rnd",
			"UAS_120mm_XROD_KE_5Rnd",				
			"UAS_120mm_JM33_5Rnd",
			"UAS_120mm_Type10_5Rnd",
			"UAS_120mm_F1B_5Rnd",
			"UAS_120mm_F1B_Plus_5Rnd",
			"UAS_120mm_SHARD_5Rnd",					
			"UAS_120mm_M827_10Rnd",
			"UAS_120mm_M829_10Rnd",
			"UAS_120mm_M829A1_10Rnd",
			"UAS_120mm_M829A2_10Rnd",
			"UAS_120mm_M829A3_10Rnd", 
			"UAS_120mm_M829A4_10Rnd",
			"UAS_120mm_M829A5_10Rnd",				
			"UAS_120mm_M1028_10Rnd",
			"UAS_120mm_DM13_10Rnd",
			"UAS_120mm_DM23_10Rnd",
			"UAS_120mm_DM33_10Rnd",
			"UAS_120mm_DM33_PELE_10Rnd",
			"UAS_120mm_DM43_10Rnd",
			"UAS_120mm_DM43A1_10Rnd",
			"UAS_120mm_DM53_10Rnd",
			"UAS_120mm_DM53A1_10Rnd",
			"UAS_120mm_DM63_10Rnd",
			"UAS_120mm_DM63A1_10Rnd",
			"UAS_120mm_DM63_Plus_10Rnd",
			"UAS_120mm_DM73_10Rnd",
			"UAS_120mm_GD120_10Rnd",				
			"UAS_120mm_K276_10Rnd",
			"UAS_120mm_KEW_A2_10Rnd",				
			"UAS_120mm_XM1111_MRM_KE_10Rnd",				
			"UAS_120mm_XM1007_TERM_KE_10Rnd",
			"UAS_120mm_XROD_KE_10Rnd",				
			"UAS_120mm_JM33_10Rnd",
			"UAS_120mm_Type10_10Rnd",
			"UAS_120mm_F1B_10Rnd",
			"UAS_120mm_F1B_Plus_10Rnd",
			"UAS_120mm_SHARD_10Rnd"
		};
		//magazineWell[] = {"Veh_120mm_Smmoth_Cannon"};
		reloadTime = 6;
		dispersion = 0.00015;
		maxRange = 5500;
		maxRangeProbab = 1;
		midRange = 3000;
		midRangeProbab = 1;
		minRange = 1;
		minRangeProbab = 0.8;
		multiplier = 1;
		aiDispersionCoefX = 3;
		aiDispersionCoefY = 3;
		magazineReloadTime = 6;
		initSpeed=__EVAL(-(1750/1650));
		
		class player : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			magazineReloadTime = 6;
			maxRange = 5500;
			maxRangeProbab = 1;
			midRange = 3000;
			midRangeProbab = 1;
			minRange = 1;
			minRangeProbab = 0.8;
			multiplier = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 0;
			autoReload = 1;
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;		
			displayName = "Semi";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			reloadTime = 6;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {};
			soundLoop[] = {};
			textureType = "semi";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";
			initSpeed=__EVAL(-(1750/1650));
		
			class StandardSound {
				soundBegin[] = {"begin1",1};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",3.16228,1,1500};
			};
		};
	};
	
	class BWA3_Rh130 : BWA3_L55
	{
		modes[] = {"player"};
		reloadTime = 7;
		magazines[] = 
		{
			"UAS_130mm_DM33_10Rnd",
			"UAS_130mm_DM23_10Rnd",
			"UAS_130mm_DM13_10Rnd",
			"UAS_130mm_DM33_1Rnd",
			"UAS_130mm_DM23_1Rnd",
			"UAS_130mm_DM13_1Rnd"
		};
		//magazineWell[] = {"Veh_130mm_Smmoth_Cannon"};
		displayName = "Rh130 130mm";
		maxRange = 6000;
		maxRangeProbab = 1;
		midRange = 5000;
		midRangeProbab = 1;
		minRange = 1;
		minRangeProbab = 0.8;
		multiplier = 1;
		aiDispersionCoefX = 3;
		aiDispersionCoefY = 3;
		magazineReloadTime = 7;
		dispersion = 0.0002;
		initSpeed = -1;
		
		class player : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			magazineReloadTime = 7;
			maxRange = 6000;
			maxRangeProbab = 1;
			midRange = 5000;
			midRangeProbab = 1;
			minRange = 1;
			minRangeProbab = 0.8;
			multiplier = 1;
			aiRateOfFire = 7;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 0;
			autoReload = 1;
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;		
			displayName = "Semi";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			reloadTime = 7;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {};
			soundLoop[] = {};
			textureType = "semi";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";
			initSpeed = -1;
		
			class StandardSound {
				soundBegin[] = {"begin1",1};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",3.16228,1,1500};
			};
		};
	};
	
	class BWA3_cannon_140mm : BWA3_L55
	{
		modes[] = {"player"};
		reloadTime = 7.5;
		magazines[] = 
		{
			"UAS_140mm_DM13_10Rnd",
			"UAS_140mm_XM964_10Rnd",
			"UAS_140mm_DM13_1Rnd",
			"UAS_140mm_XM964_1Rnd"
		};
		displayName = "Cannon 140mm";
		//magazineWell[] = {"Veh_140mm_Smmoth_Cannon"};
		maxRange = 7000;
		maxRangeProbab = 1;
		midRange = 6000;
		midRangeProbab = 1;
		minRange = 1;
		minRangeProbab = 0.8;
		multiplier = 1;
		aiDispersionCoefX = 3;
		aiDispersionCoefY = 3;
		dispersion = 0.00013;
		magazineReloadTime = 7.5;
		initSpeed = -1;
		
		class player : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			magazineReloadTime = 7.5;
			maxRange = 7000;
			maxRangeProbab = 1;
			midRange = 6000;
			midRangeProbab = 1;
			minRange = 1;
			minRangeProbab = 0.8;
			multiplier = 1;
			aiRateOfFire = 7.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 0;
			autoReload = 1;
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;		
			displayName = "Semi";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			reloadTime = 7.5;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {};
			soundLoop[] = {};
			textureType = "semi";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";
			initSpeed = -1;
		
			class StandardSound {
				soundBegin[] = {"begin1",1};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",3.16228,1,1500};
			};
		};
	};
	
	class BWA3_HMG_Coax : BWA3_MG3_vehicle 
	{
		initSpeed = -1;
		//magazineWell[] = {"UAS_127x99_MG"};
	};
	
	class BWA3_Spike_LR : missiles_titan
	{
		initSpeed = -1;
		//magazineWell[] = {"Titan_Long_Veh"};
	};
	
	class BWA3_MK30 : autocannon_Base_F
	{
		initSpeed = -1;
		magazineWell[] = {"Veh_30x173_Autocannon"};
		muzzles[] = {"HE","AP"};
		class HE : autocannon_Base_F 
		{
			displayName = "Mk30";
			initSpeed = -1;
			/*magazines[] = 
			{
				"UAS_Base_30x173_Mk310_160Rnd",
				"UAS_Base_30x173_Mk238_160Rnd",
				"UAS_Base_30x173_Mk266_160Rnd",
				"UAS_Base_30x173_PGU13_160Rnd",
				"UAS_Base_30x173_XM1171_160Rnd",
				"UAS_Base_30x173_EDNKH_160Rnd"
			};
			magazineWell[] = {"Veh_30x173_Autocannon"};
		};
		
		class AP : autocannon_Base_F 
		{
			displayName = "Mk30";
			initSpeed = -1;
			/*magazines[] = 
			{
				"UAS_Base_30x173_M928_160Rnd",				
				"UAS_Base_30x173_Mk258_Mod0_160Rnd",
				"UAS_Base_30x173_Mk258_Mod1_160Rnd",
				"UAS_Base_30x173_Mk264_160Rnd",								
				"UAS_Base_30x173_PGU14_160Rnd",
				"UAS_Base_30x173_PGU46B_160Rnd",
				"UAS_Base_30x173_PMC287_160Rnd",
				"UAS_Base_30x173_RD_FAPDS_160Rnd",
				"UAS_Base_30x173_RD_FAP_160Rnd",
				"UAS_Base_30x173_XM1170_160Rnd",				
				"UAS_Base_30x173_Glasser_160Rnd",				
			};
			magazineWell[] = {"Veh_30x173_Autocannon"};
		};
	}; 
};*/

class HitPoints;
class Turrets;
class MainTurret;
class CommanderOptics;
class NewTurret;

class CfgVehicleClasses
{
	class Tanks
	{
		displayName="Tanks";
	};
	class Tank_destroyer
	{
		displayName="Tank_destroyer";
	};
	class APC
	{
		displayName="APCs";
	};
	class IFV
	{
		displayName="IFVs";
	};
	class Amphibious
	{
		displayName="Amphibious";
	};
	class Cars
	{
		displayName="Cars";
	};
	class MRAP
	{
		displayName="MRAP";
	};
	class Trucks
	{
		displayName="Trucks";
	};
	class Artillery
	{
		displayName="Artillery";
	};
};
class CfgEditorSubcategories
{
	class Tanks
	{
		displayName="Tanks";
	};
	class Tank_destroyer
	{
		displayName="Tank destroyer";
	};
	class APC
	{
		displayName="APCs";
	};
	class IFV
	{
		displayName="IFVs";
	};
	class Amphibious
	{
		displayName="Amphibious";
	};
	class Cars
	{
		displayName="Cars";
	};
	class MRAP
	{
		displayName="MRAP";
	};
	class Trucks
	{
		displayName="Trucks";
	};
	class Artillery
	{
		displayName="Artillery";
	};
};
class BWA3_Attribute_LicensePlate_Base;
class BWA3_Attribute_Company_Base;
class BWA3_Attribute_Battalion_Base;
class BWA3_Attribute_CamoNet_Base;
class BWA3_Attribute_CamoNet_Turret_Base;
class BWA3_Attribute_CamoNet_Gun_Base;
class BWA3_Attribute_CamoNet_MELLS_Base;
class BWA3_Attribute_HazardLights_Base;
class CfgVehicles 
{
	class LandVehicle;	// External class reference
	
	class Helicopter_Base_H;
	class Helicopter_Base_F;
	class Plane_Base_F;
	class Ejection_Seat_Plane_CAS_01_base_F;
	
	class Tank : LandVehicle {
		class NewTurret;	// External class reference
		class Sounds;	// External class reference
		class HitPoints;	// External class reference
	};
	
	class Tank_F : Tank {
		class Turrets {
			class MainTurret : NewTurret {
				class Turrets {
					class CommanderOptics;	// External class reference
					class LoaderTurret;
				};
			};
		};
		class Components;
		class AnimationSources;	// External class reference
		class ViewPilot;	// External class reference
		class ViewOptics;	// External class reference
		class ViewCargo;	// External class reference
		class HeadLimits;	// External class reference
		
		class HitPoints : HitPoints {
			class HitHull;	// External class reference
			class HitEngine;	// External class reference
			class HitLTrack;	// External class reference
			class HitRTrack;	// External class reference
			class HitFuel;	// External class reference
		};
		
		class Sounds : Sounds {
			class Engine;	// External class reference
			class Movement;	// External class reference
		};
	};
	
	class BWA3_Puma_base: Tank_F
	{
		armor=677; //Default = 320
		armorStructural=9.5; //Default = 6
		editorSubcategory="IFV";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=2;
				material=-1;
				name="hull";
				visual="mat_wanne";
				passThrough=1;
				minimalHit=0.23999999;
				explosionShielding=0.80000001;
				radius=0.15000001;
			};
			class HitEngine: HitEngine
			{
				armor=1;
				material=-1;
				name="engine";
				visual="engine";
				passThrough=0;
				minimalHit=0.23999999;
				explosionShielding=0.80000001;
				radius=0.25;
			};
			class HitLTrack: HitLTrack
			{
				armor=-800;
				material=-1;
				name="ltrack";
				visual="ltrack";
				passThrough=0;
				minimalHit=0.2;
				explosionShielding=0.80000001;
				radius=0.1;
			};
			class HitRTrack: HitRTrack
			{
				armor=-800;
				material=-1;
				name="rtrack";
				visual="rtrack";
				passThrough=0;
				minimalHit=0.2;
				explosionShielding=0.80000001;
				radius=0.1;
			};
			class HitFuel: HitFuel
			{
				armor=1.1;
				material=-1;
				name="HitFuel";
				visual="HitFuel";
				passThrough=0;
				minimalHit=0.30000001;
				explosionShielding=0.80000001;
				radius=0.2;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				weapons[]=
				{
					"BWA3_MK30",
					"BWA3_MG5_vehicle",
					"BWA3_Spike_LR"
				};
				magazines[]=
				{
					"BWA3_1200Rnd_762x51",
					"BWA3_1200Rnd_762x51",
					"BWA3_240Rnd_APFSDS_shells",
					"BWA3_240Rnd_APFSDS_shells",
					"BWA3_160Rnd_ABM_shells",
					"BWA3_160Rnd_ABM_shells",
					"BWA3_2rnd_Spike_LR"
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.60000002;
						material=-1;
						name="turret";
						visual="mat_turm";
						passThrough=0.2;
						minimalHit=0.4;
						explosionShielding=0.30000001;
						radius=0.30000001;
						isTurret=1;
					};
					class HitGun
					{
						armor=1.2;
						material=-1;
						name="gun";
						visual="mat_kanone";
						passThrough=0;
						minimalHit=0.3;
						explosionShielding=0.30000001;
						radius=0.15000001;
						isGun=1;
					};
				};
			};
		};
	};
	
	class BWA3_Leopard_base: Tank_F
	{
		armor=1141;
		armorStructural=14.8190;
		enginePower = 1103;
		peakTorque = 4700;
		maxFordingDepth = 1.6;
		clutchStrength=48; //Default=40
		fuelCapacity=1885;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=800000;
		normalSpeedForwardCoef=0.77999997;
		minOmega = __EVAL((1400 * 2 * PI) / 60);
		maxOmega = __EVAL((3300 * 2 * PI) / 60);
		redRpm=3300;
		idleRpm=1400;
		engineLosses=20; //Default=25
		transmissionLosses=12; //Default=15
		
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1; //Default = 1
				material=-1; //Default = -1
				name="hull";
				visual="mat_wanne";
				passThrough=0.7; //Default = 1
				minimalHit=0.2; //Default = 0.14
				explosionShielding=0.30000001; //Default = 0.30000001
				radius=0.2; //Default = 0.2
			};
			class HitEngine: HitEngine
			{
				armor=1; //Default = 1
				material=-1; //Default = -1
				name="engine";
				visual="engine";
				passThrough=0; //Default = 0
				minimalHit=0.4; //Default = 0.23999999
				explosionShielding=0.2; //Default = 0.2
				radius=0.25; //Default = 0.25
			};
			class HitLTrack: HitLTrack
			{
				armor=1; //Default = 1
				material=-1; //Default = -1
				name="ltrack";
				visual="ltrack";
				passThrough=0; //Default = 0
				minimalHit=0.2; //Default = 0.2
				explosionShielding=1.2; //Default = 1.2
				radius=0.2; //Default = 0.2
			};
			class HitRTrack: HitRTrack
			{
				armor=1; //Default = 1
				material=-1; //Default = -1
				name="rtrack";
				visual="rtrack";
				passThrough=0; //Default = 0
				minimalHit=0.2; //Default = 0.2
				explosionShielding=1.2; //Default = 1.2
				radius=0.2; //Default = 0.2
			};
			class HitFuel: HitFuel
			{
				armor=1.1; //Default = 1.1
				material=-1; //Default = -1
				name="HitFuel";
				visual="HitFuel";
				passThrough=0;
				minimalHit=0.30000001; //Default = 0.30000001
				explosionShielding=2; //Default = 2
				radius=0.2; //Default = 0.2
			};
		};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"BWA3_SmokeLauncher"
						};
						magazines[]=
						{
							"BWA3_SmokeLauncherMag"
						};
					};
					class LoaderTurret: NewTurret
					{
						gunnerName="$STR_BWA3_Loader";
						gunBeg="usti hlavne3";
						gunEnd="konec hlavne3";
						primaryGunner=0;
						primaryObserver=0;
						body="loaderTurret";
						gun="loaderGun";
						animationSourceBody="loaderTurret";
						animationSourceGun="loaderGun";
						animationSourceHatch="hatchLoader";
						commanding=-1;
						primary=0;
						proxyIndex=2;
						memoryPointGunnerOptics="loaderview";
						memoryPointGunnerOutOptics="loaderoptics";
						memoryPointsGetInGunner="pos loader";
						memoryPointsGetInGunnerDir="pos loader dir";
						minElev=-15;
						maxElev=30;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"BWA3_MG3_loader"
						};
						magazines[]=
						{
							"BWA3_120Rnd_762x51",
							"BWA3_120Rnd_762x51",
							"BWA3_120Rnd_762x51",
							"BWA3_120Rnd_762x51",
							"BWA3_120Rnd_762x51"
						};
						hideWeaponsGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=0;
						gunnerAction="BWA3_Leopard2_Loader_out";
						gunnerInAction="mbt1c_slot2_in";
						gunnerGetInAction="GetInLow";
						gunnerGetOutAction="GetOutLow";
						gunnerLeftHandAnimName="handle_L";
						gunnerRightHandAnimName="handle_R";
						gunnerFireAlsoInInternalCamera=0;
						gunnerOpticsModel="\bwa3_leopard2\bwa3_leopard2_optics_loader.p3d";
						gunnerOutOpticsModel="\bwa3_leopard2\bwa3_leopard2_optics_loader_out.p3d";
						gunnerOpticsEffect[]={};
						gunnerForceOptics=1;
						turretInfoType="BWA3_RscOptics_Leopard_loader";
						startEngine=0;
						gunnerHasFlares=1;
						stabilizedInAxes=0;
						maxHorizontalRotSpeed=1.6;
						viewGunnerInExternal=1;
						class ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.5;
							minFov=0.5;
							maxFov=0.5;
							minMoveX=0;
							maxMoveX=0;
							minMoveY=0;
							maxMoveY=0;
							minMoveZ=0;
							maxMoveZ=0;
							visionMode[]={};
						};
						class HitPoints
						{
							class HitLoaderTurret
							{
								armor=0.5;
								material=-1;
								name="loader_turret_hit";
								visual="loader_turret_hit";
								passThrough=0;
								minimalHit=0.049999999;
								explosionShielding=0.40000001;
								radius=0.1;
								isTurret=1;
							};
							class HitLoaderGun
							{
								armor=0.5;
								material=-1;
								name="loader_gun_hit";
								visual="loader_gun_hit";
								passThrough=0;
								minimalHit=0.049999999;
								explosionShielding=0.40000001;
								radius=0.1;
								isGun=1;
							};
						};
					};
				};
				weapons[] = {"BWA3_L55","BWA3_MG3_vehicle"};
				magazines[]=
				{
					"BWA3_1Rnd_KE_Shells",
					"BWA3_1Rnd_MZ_Shells",
					"BWA3_1200Rnd_762x51",
					"BWA3_1200Rnd_762x51"
				};
			};
		};
	};
	
	class BWA3_Leopard2_Fleck : BWA3_Leopard_base
	{};
	
	class BWA3_Leopard2_Tropen : BWA3_Leopard_base
	{};
	
	
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class EventHandlers;
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
	};
	
	class BWA3_Dingo2_base : Car_F
	{
		editorSubcategory="MRAP";
	};
	
	class BWA3_Dingo2_flw200_m2_base: BWA3_Dingo2_base
	{
		armor=225; //Default=150
		armorStructural=6; //Default=4
		class Turrets: Turrets
		{
			class MainTurret_M2: MainTurret
			{
				weapons[]=
				{
					"BWA3_M2_vehicle_flw200",
					"BWA3_Dingo_SmokeLauncher"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"BWA3_Dingo_SmokeLauncherMag"
				};
			};
		};
	};
	
	class BWA3_Dingo2_flw200_gmw_base: BWA3_Dingo2_base
	{
		armor=225; //Default=150
		armorStructural=6; //Default=4
		class Turrets: Turrets
		{
			class MainTurret_GMW: MainTurret
			{
				weapons[]=
				{
					"BWA3_GMW_vehicle_flw200",
					"BWA3_Dingo_SmokeLauncher"
				};
				magazines[]=
				{
					"200Rnd_40mm_G_belt",
					"200Rnd_40mm_G_belt",
					"200Rnd_40mm_G_belt",
					"BWA3_Dingo_SmokeLauncherMag"
				};
			};
		};
	};
	
	class BWA3_Dingo2_flw100_mg3_base: BWA3_Dingo2_base
	{
		armor=225; //Default=150
		armorStructural=6; //Default=4
		class Turrets: Turrets
		{
			class MainTurret_MG3: MainTurret
			{
				weapons[]=
				{
					"BWA3_MG3_vehicle_flw100"
				};
				magazines[]=
				{
					"BWA3_120Rnd_762x51_Tracer_soft",
					"BWA3_120Rnd_762x51_Tracer_soft",
					"BWA3_120Rnd_762x51_Tracer_soft",
					"BWA3_120Rnd_762x51_Tracer_soft",
					"BWA3_120Rnd_762x51_Tracer_soft",
					"BWA3_120Rnd_762x51_Tracer_soft",
					"BWA3_120Rnd_762x51_Tracer_soft"
				};
			};
		};
	};
	
	class BWA3_Eagle_base;
	
	class BWA3_Eagle_hatch_base: BWA3_Eagle_base
	{
		armor=225; //Default=150
		armorStructural=6; //Default=4
	};
	
	class BWA3_Eagle_flw100_base: BWA3_Eagle_base
	{
		armor=225; //Default=150
		armorStructural=6; //Default=4
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BWA3_MG3_vehicle_flw100"
				};
				/*magazines[]=
				{
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd"
				};*/
			};
		};
	};
	
	class BWA3_Eagle_FLW100_Fleck: BWA3_Eagle_flw100_base
	{
		armor=225; //Default=150
		armorStructural=6; //Default=4
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BWA3_MG3_vehicle_flw100"
				};
				/*magazines[]=
				{
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd"
				};*/
			};
		};
	};
	
	class BWA3_Eagle_FLW100_Tropen: BWA3_Eagle_flw100_base
	{
		armor=225; //Default=150
		armorStructural=6; //Default=4
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BWA3_MG3_vehicle_flw100"
				};
				/*magazines[]=
				{
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd",
					"UAS_BASE_762N_DM151_200Rnd"
				};*/
			};
		};
	};
};
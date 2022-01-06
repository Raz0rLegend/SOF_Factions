class Mode_SemiAuto;

class CfgPatches 
{
	class Edit_RD_SOF 
	{
		units[] = 
		{
			
		};
		weapons[] = {};
		requiredVersion = 1.820000;
		requiredAddons[] =
		{
			"A3_Data_F",
			"A3Data",
			"A3_Weapons_F",
			"A3_Armor_F",
			"A3_Armor_F_Beta",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Armor_F_Gamma_MBT_02",
			"A3_Armor_F_EPB_MBT_03",
			"A3_Armor_F_Tank_MBT_04",
			"Redd_Marder_1A5",
			"Redd_Tank_Fuchs_1A4",
			"Redd_Tank_Gepard_1A2",
			"Redd_Tank_Wiesel_1A2_TOW",
			"Redd_Tank_Wiesel_1A4_MK20",
			"rnt_sppz_2a2_luchs"
			
			
			
		};
		version = 1.000;
		author = "Raz0rLegend";
		name = "Edit_RD_SOF";
		dlc = "Edit_RD_SOF";
		fileName = "Edit_RD_SOF.pbo";
	};
};

class CfgMods
{
	class Mod_Base;
	class Edit_RD_SOF 
	{
		author = "Raz0rLegend";
		dlcColor[] = {0, 0, 0, 1};
		tooltip = "";
		tooltipOwned = "";
		name = "";
		overview = "";
		dir = "Edit_RD_SOF";
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
	class autocannon_Base_F;
	class cannon_20mm : autocannon_Base_F
	{
		initSpeed = -1;
		displayName = "Rh-202";
		magazineWell[] = {"Veh_20x139_Autocannon"};
		
		muzzles[] = {"HE","AP"};
		
		class HE : autocannon_Base_F 
		{
			displayName = "Rh-202";
			initSpeed = -1;
			magazines[] = 
			{
				"UAS_Base_20x139_DM101A1_120Rnd",
				"UAS_Base_20x139_DM91_120Rnd",
				"UAS_Base_20x139_DM101A1_200Rnd",
				"UAS_Base_20x139_DM91_200Rnd"
			};
			magazineWell[] = {"Veh_20x139_Autocannon"};
			magazineReloadTime = 30;
		};
		
		class AP : autocannon_Base_F 
		{
			displayName = "Rh-202";
			initSpeed = -1;
			magazines[] = 
			{
				"UAS_Base_20x139_DM43_120Rnd",
				"UAS_Base_20x139_DM63_120Rnd",
				"UAS_Base_20x139_DM43_200Rnd",
				"UAS_Base_20x139_DM63_200Rnd"
			};
			magazineWell[] = {"Veh_20x139_Autocannon"};
			magazineReloadTime = 30;
		};
	};
	class autocannon_35mm;
	class Redd_35mm : autocannon_35mm 
	{
		initSpeed = -1;
		magazineWell[] = {"Veh_35x228_Autocannon"};
		muzzles[] = {"HE","AP"};
		
		class HE : autocannon_Base_F 
		{
			displayName = "Oerlikon GDF";
			initSpeed = -1;
			magazines[] = 
			{
				"Veh_35x228_AHEAD_40Rnd",
				"Veh_35x228_PMD375_40Rnd",
				"Veh_35x228_HEI_40Rnd", 
				"Veh_35x228_KETF_40Rnd",														
				"Veh_35x228_AHEAD_640Rnd",				
				"Veh_35x228_HEI_640Rnd",
				"Veh_35x228_KETF_640Rnd",	
				"Veh_35x228_PMD375_640Rnd"
			};
			magazineWell[] = {"Veh_35x228_Autocannon"};
		};
		
		class AP : autocannon_Base_F 
		{
			displayName = "Oerlikon GDF";
			initSpeed = -1;
			magazines[] = 
			{
				"Veh_35x228_DM23_40Rnd",
				"Veh_35x228_Oerlikon_40Rnd",
				"Veh_35x228_PMD049_40Rnd",
				"Veh_35x228_DM23_640Rnd",
				"Veh_35x228_Oerlikon_640Rnd",
				"Veh_35x228_PMD049_640Rnd"
			};
			magazineWell[] = {"Veh_35x228_Autocannon"};
		};
	};
	class Redd_MK20 : autocannon_Base_F 
	{
		initSpeed = -1;
		magazineWell[] = {"Veh_20x139_Autocannon"};
		muzzles[] = {"HE","AP"};
		
		class HE : autocannon_Base_F 
		{
			displayName = "Mk20";
			initSpeed = -1;
			magazines[] = 
			{
				"UAS_Base_20x139_DM101A1_120Rnd",
				"UAS_Base_20x139_DM91_120Rnd",
				"UAS_Base_20x139_DM101A1_200Rnd",
				"UAS_Base_20x139_DM91_200Rnd"
			};
			magazineWell[] = {"Veh_20x139_Autocannon"};
			magazineReloadTime = 30;
		};
		
		class AP : autocannon_Base_F 
		{
			displayName = "Mk20";
			initSpeed = -1;
			magazines[] = 
			{
				"UAS_Base_20x139_DM43_120Rnd",
				"UAS_Base_20x139_DM63_120Rnd",
				"UAS_Base_20x139_DM43_200Rnd",
				"UAS_Base_20x139_DM63_200Rnd"
			};
			magazineWell[] = {"Veh_20x139_Autocannon"};
			magazineReloadTime = 30;
		};
	};
	class missiles_titan;
	class Redd_Milan : missiles_titan 
	{
		magazineWell[] = {"UAS_MILAN_Launcher"};
	};
	class LMG_coax;
	class Redd_MG3 : LMG_coax 
	{
		initSpeed = -1;
		displayName= "MG3";
		magazineWell[] = {"UAS_762x51_MG"};
	};
};*/
	
class HitPoints;
class Turrets;
class MainTurret;
class CommanderOptics;
class NewTurret;

class CfgVehicles 
{
	class LandVehicle;	// External class reference
	
	class Helicopter_Base_H;
	class Plane_Base_F;
	class Ejection_Seat_Plane_CAS_01_base_F;
	
	class Tank : LandVehicle 
	{
		class NewTurret;	// External class reference
		class Sounds;	// External class reference
		class HitPoints;	// External class reference
	};
	
	class Tank_F : Tank 
	{
		class Turrets 
		{
			class MainTurret : NewTurret 
			{
				class Turrets 
				{
					class CommanderOptics;	// External class reference
					class LoaderTurret;
				};
			};
		};
		class EventHandlers;
		class Components;
		class AnimationSources;	// External class reference
		class ViewPilot;	// External class reference
		class ViewOptics;	// External class reference
		class ViewCargo;	// External class reference
		class HeadLimits;	// External class reference
		class CargoTurret;
		class HitPoints : HitPoints 
		{
			class HitHull;	// External class reference
			class HitEngine;	// External class reference
			class HitLTrack;	// External class reference
			class HitRTrack;	// External class reference
			class HitFuel;	// External class reference
		};
		
		class Sounds : Sounds 
		{
			class Engine;	// External class reference
			class Movement;	// External class reference
		};
	};
	
	//IFV
	class Redd_Marder_1A5_base: Tank_F
	{
		enginePower=447;
		peakTorque=2350;
		maxSpeed=65;
		armor=512; //Default=300
		armorStructural=8; //Default=6
		transportSoldier = 6;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"Redd_Gesichert",
					"Redd_MK20",
					"Redd_MG3"
				};
				/*magazines[]=
				{
					"UAS_Base_20x139_DM91_200Rnd",
					"UAS_Base_20x139_DM63_200Rnd",
					"UAS_Base_20x139_DM91_200Rnd",
					"UAS_Base_20x139_DM63_200Rnd",
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
			class Redd_Milan: NewTurret
			{
				body="Milan_Rot_X";
				gun="Milan_Rot_Y";
				animationSourceBody="Milan_Rot_X";
				animationSourceGun="Milan_Rot_Y";
				proxyindex=3;
				gunnerName="Fake_Milan";
				primaryGunner=0;
				primaryObserver=1;
				weapons[]=
				{
					"Redd_Milan"
				};
				/*magazines[]=
				{
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x"
				};*/
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-15;
				maxTurn=15;
				initTurn=0;
				stabilizedInAxes=3;
				gunnerGetOutAction="GetOutHigh";
				turretInfoType="Redd_RSC_Milan";
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment4";
				lodTurnedOut=1000;
				startEngine=0;
				gunnerRightHandAnimName="Milan_Turret";
				gunnerLeftHandAnimName="Milan_Gun";
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerAction="Redd_Marder_Commander_Milan";
				memoryPointGunnerOutOptics="Milan_View";
				memoryPointsGetInGunner="pos commander";
				memoryPointsGetInGunnerDir="pos commander dir";
				ace_fcs_Enabled=0;
				outGunnerMayFire=1;
				gunnerOutOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_T1";
				class OpticsOut
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.75;
						maxFov=1.25;
						minFov=0.25;
						visionMode[]={};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_T1";
						gunnerOpticsEffect[]={};
					};
				};
				class OpticsIn
				{
					class Day1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.15000001;
						maxFov=0.15000001;
						minFov=0.15000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_T1";
						gunnerOpticsEffect[]={};
					};
					class Day2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.037;
						maxFov=0.037;
						minFov=0.037;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_T1";
						gunnerOpticsEffect[]={};
					};
					class WBG1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.15000001;
						maxFov=0.15000001;
						minFov=0.15000001;
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_W1";
						gunnerOpticsEffect[]={};
					};
					class WBG2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.037;
						maxFov=0.037;
						minFov=0.037;
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_W1";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class Luchs_Bino_Turret_Com: NewTurret
			{
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				animationSourceHatch="";
				animationSourceCamElev="";
				proxyindex=1;
				proxyType="CPGunner";
				gunnerName="Bino_Com";
				primaryGunner=0;
				primaryObserver=1;
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-80;
				maxTurn=80;
				initTurn=0;
				gunnerGetOutAction="GetOutHigh";
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment5";
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				startEngine=0;
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerInAction="rnt_marder_com_out_high";
				memoryPointGunnerOptics="";
				isPersonTurret=1;
				personTurretAction="rnt_marder_com_out_ffv";
				memoryPointsGetInGunner="pos commander";
				memoryPointsGetInGunnerDir="pos commander dir";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-80},
						{15,80}
					};
					limitsArrayBottom[]=
					{
						{-15,-80},
						{-15,80}
					};
				};
			};
		};
	};
	
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
	};
	class Redd_Tank_Fuchs_1A4_Base: Wheeled_APC_F
	{
		enginePower=358;
		peakTorque=1700;
		maxSpeed=96;
		armor=512; //Default=200
		armorStructural=7; //Default=5
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class commander_hatch: NewTurret
					{
						body="";
						gun="";
						animationSourceBody="";
						animationSourceGun="";
						animationSourceHatch="commander_hatch_source";
						enabledByAnimationSource="commander_hatch_1";
						proxyType="CPGunner";
						proxyIndex=1;
						gunnerName="$STR_Kommandantenplatz";
						primaryGunner=0;
						primaryObserver=1;
						gunnerGetInAction="GetInMedium";
						gunnerGetOutAction="GetOutMedium";
						gunnerForceOptics=0;
						inGunnerMayFire=0;
						viewGunnerInExternal=1;
						gunnerCompartments="Compartment2";
						LODTurnedIn=1200;
						LODTurnedOut=1000;
						startEngine=0;
						dontCreateAi=1;
						gunnerInAction="Redd_Tank_Fuchs_Passenger_1";
						gunnerAction="Redd_Tank_Fuchs_Milan_2";
						memoryPointGunnerOptics="";
						memoryPointsGetInGunner="pos cargo";
						memoryPointsGetInGunnerDir="pos cargo dir";
						soundAttenuationTurret="TankAttenuation";
						disableSoundAttenuation=0;
						hideWeaponsGunner=1;
						class TurnIn
						{
							limitsArrayTop[]=
							{
								{45,-120},
								{45,120}
							};
							limitsArrayBottom[]=
							{
								{-45,-120},
								{-45,120}
							};
						};
					};
					class ffv_hatch_R: commander_hatch
					{
						gunnerInAction="Redd_Tank_Fuchs_Passenger_1_2";
						gunnerName="$STR_Rechte_Luke";
						animationSourceHatch="ffv_hatch_R_source";
						enabledByAnimationSource="ffv_hatch_R";
						proxyIndex=3;
						primaryObserver=0;
						commanding=0;
						isPersonTurret=1;
						gunnerAction="vehicle_turnout_2";
						hideWeaponsGunner=0;
						class TurnIn
						{
							limitsArrayTop[]=
							{
								{45,-120},
								{45,120}
							};
							limitsArrayBottom[]=
							{
								{-45,-120},
								{-45,120}
							};
						};
						class TurnOut: TurnIn
						{
							limitsArrayTop[]=
							{
								{30,-90},
								{30,90}
							};
							limitsArrayBottom[]=
							{
								{-16,-90},
								{-15,-60},
								{-25,0},
								{-7,85},
								{-7,86},
								{-7,90}
							};
						};
					};
					class ffv_hatch_L: commander_hatch
					{
						gunnerInAction="Redd_Tank_Fuchs_Passenger_1_1";
						gunnerName="$STR_Linke_Luke";
						animationSourceHatch="ffv_hatch_L_source";
						enabledByAnimationSource="ffv_hatch_L";
						proxyIndex=4;
						primaryObserver=0;
						commanding=0;
						isPersonTurret=1;
						gunnerAction="vehicle_turnout_2";
						hideWeaponsGunner=0;
						class TurnIn
						{
							limitsArrayTop[]=
							{
								{45,-120},
								{45,120}
							};
							limitsArrayBottom[]=
							{
								{-45,-120},
								{-45,120}
							};
						};
						class TurnOut: TurnIn
						{
							limitsArrayTop[]=
							{
								{30,-90},
								{30,90}
							};
							limitsArrayBottom[]=
							{
								{-5.5,-90},
								{-5.5,-80},
								{-25,90}
							};
						};
					};
					class fake_gunner_turret: commander_hatch
					{
						gunnerInAction="Redd_Tank_Fuchs_Co_Driver_TurnedIn";
						gunnerAction="Redd_Tank_Fuchs_Co_Driver_TurnedOut_2";
						animationSourceHatch="maingunner_hatch_source";
						enabledByAnimationSource="maingunner_hatch";
						gunnerName="$STR_Beifahrer";
						memoryPointsGetInGunner="pos gunner";
						memoryPointsGetInGunnerDir="pos gunner dir";
						proxyIndex=5;
						primaryObserver=0;
						commanding=0;
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_D";
						LODTurnedIn=1100;
						LODTurnedOut=1000;
						gunnerCompartments="Compartment1";
						memoryPointGunnerOptics="gunnerview";
						hideWeaponsGunner=1;
						turretInfoType="Redd_RCS_Driver_APC";
						class ViewOptics: ViewOptics
						{
							initFov=0.75;
							maxFov=0.75;
							minFov=0.75;
							visionMode[]=
							{
								"Normal",
								"Ti",
								"NVG"
							};
							thermalMode[]={4,5};
						};
						class TurnIn
						{
							limitsArrayTop[]=
							{
								{45,-120},
								{45,120}
							};
							limitsArrayBottom[]=
							{
								{-45,-120},
								{-45,120}
							};
						};
						class TurnOut: TurnIn
						{
							limitsArrayTop[]=
							{
								{45,-120},
								{45,120}
							};
							limitsArrayBottom[]=
							{
								{-45,-120},
								{-45,120}
							};
						};
					};
				};
				weapons[]=
				{
					"Redd_MG3"
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
			class Fuchs_Bino_Turret_Com: NewTurret
			{
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				animationSourceHatch="";
				animationSourceCamElev="";
				proxyindex=1;
				proxyType="CPGunner";
				gunnerName="Bino_Com";
				primaryGunner=0;
				primaryObserver=1;
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-80;
				maxTurn=80;
				initTurn=0;
				gunnerGetOutAction="GetOutMedium";
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment4";
				LODTurnedIn=1200;
				LODTurnedOut=1000;
				startEngine=0;
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerInAction="rnt_fuchs_com_out_high";
				memoryPointGunnerOptics="";
				isPersonTurret=1;
				personTurretAction="rnt_fuchs_com_out_ffv";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-80},
						{15,80}
					};
					limitsArrayBottom[]=
					{
						{-15,-80},
						{-15,80}
					};
				};
			};
			class Fuchs_Milan_Turret: NewTurret
			{
				body="Milan_Rot_X";
				gun="Milan_Rot_Y";
				animationSourceBody="Milan_Rot_X_source";
				animationSourceGun="Milan_Rot_Y_source";
				proxyindex=6;
				gunnerName="Fake_Milan";
				primaryGunner=0;
				primaryObserver=1;
				weapons[]=
				{
					"Redd_Milan"
				};
				/*magazines[]=
				{
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x",
					"UAS_L_MILAN_3ER_1x"
				};*/
				minElev=-15;
				maxElev=10;
				initElev=0;
				minTurn=-25;
				maxTurn=35;
				initTurn=0;
				stabilizedInAxes=3;
				gunnerGetOutAction="GetOutMedium";
				turretInfoType="Redd_RSC_Milan";
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment4";
				lodTurnedOut=1000;
				startEngine=0;
				gunnerRightHandAnimName="Milan_Handle";
				gunnerLeftHandAnimName="Milan_Gun";
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerAction="Redd_Tank_Fuchs_Milan";
				memoryPointGunnerOutOptics="Milan_View";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				ace_fcs_Enabled=0;
				outGunnerMayFire=1;
				gunnerOutOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_T1";
				class OpticsOut
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.75;
						maxFov=1.25;
						minFov=0.25;
						visionMode[]={};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_T1";
						gunnerOpticsEffect[]={};
					};
				};
				class OpticsIn
				{
					class Day1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.15000001;
						maxFov=0.15000001;
						minFov=0.15000001;
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_T1";
						gunnerOpticsEffect[]={};
					};
					class Day2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.037;
						maxFov=0.037;
						minFov=0.037;
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_T1";
						gunnerOpticsEffect[]={};
					};
					class WBG1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.15000001;
						maxFov=0.15000001;
						minFov=0.15000001;
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_W1";
						gunnerOpticsEffect[]={};
					};
					class WBG2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.037;
						maxFov=0.037;
						minFov=0.037;
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Milan_W1";
						gunnerOpticsEffect[]={};
					};
				};
			};
		};
	};
	
	//SPAAG
	class Redd_Tank_Gepard_1A2_base: Tank_F
	{
		enginePower=619;
		peakTorque=2860;
		maxSpeed=50;
		armor=734; //Default=400
		armorStructural=4.3668; //Default=8
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerForceOptics=0;
						gunnerAction="Redd_Gepard_Commander_Out";
						gunnerInAction="Redd_Gepard_Commander";
						initElev=0;
						minElev=-10;
						maxElev=90;
						initTurn=0;
						minTurn=-360;
						maxTurn=360;
						viewGunnerInExternal=1;
						hideProxyInCombat=1;
						startEngine=0;
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						turretInfoType="Redd_RCS_Turret";
						stabilizedInAxes=3;
						lodTurnedIn=1000;
						lodTurnedOut=1000;
						soundAttenuationTurret="TankAttenuation";
						gunnerCompartments="Compartment2";
						weapons[]=
						{
							"Redd_SmokeLauncher"
						};
						magazines[]=
						{
							"Redd_SmokeLauncherMag"
						};
						animationSourceHatch="";
						ace_fcs_Enabled=0;
						gunnerOutOpticsModel="";
						outGunnerMayFire=0;
						soundServo[]={};
						soundServoVertical[]={};
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerRightHandAnimName="com_turret_control";
						class ViewOptics: ViewOptics
						{
							visionMode[]=
							{
								"Normal",
								"NVG",
								"TI"
							};
							thermalMode[]={2,3};
							initFov=0.40000001;
							minFov=0.079999998;
							maxFov=0.029999999;
						};
						class OpticsIn
						{
							class Day1
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.27000001;
								maxFov=0.27000001;
								minFov=0.27000001;
								visionMode[]=
								{
									"Normal",
									"NVG",
									"Ti"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Gepard";
								gunnerOpticsEffect[]={};
							};
							class Day2
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.059999999;
								maxFov=0.059999999;
								minFov=0.059999999;
								visionMode[]=
								{
									"Normal",
									"NVG",
									"Ti"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_Gepard";
								gunnerOpticsEffect[]={};
							};
						};
						class HitPoints
						{
							class HitTurret
							{
								armor=1;
								material=-1;
								name="vezVelitele";
								visual="DamageVisual";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.090000004;
								armorComponent="";
								isTurret=1;
							};
							class HitGun
							{
								armor=1;
								material=-1;
								name="zbranVelitele";
								visual="DamageVisual";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.090000004;
								armorComponent="";
								isGun=1;
							};
						};
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={16000,8000,4000};
										resource="RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay="SensorDisplay";
								class Components: components
								{
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={16000,8000,4000};
										resource="RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};
				weapons[]=
				{
					"Redd_Gesichert",
					"Redd_35mm"
				};
				magazines[]=
				{
					"Redd_35mm_HE_Mag",
					"Redd_35mm_HE_Mag",
					"Redd_35mm_AP_Mag",
					"Redd_35mm_AP_Mag"
				};
			};
			class Gepard_Bino_Turret_Com: NewTurret
			{
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				animationSourceHatch="";
				animationSourceCamElev="";
				proxyindex=1;
				proxyType="CPCommander";
				gunnerName="Bino_Com";
				primaryGunner=0;
				primaryObserver=1;
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-80;
				maxTurn=80;
				initTurn=0;
				gunnerGetOutAction="GetOutMedium";
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment3";
				LODTurnedIn=1202;
				LODTurnedOut=1202;
				startEngine=0;
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerInAction="Redd_Gepard_Commander_Out_high";
				memoryPointGunnerOptics="";
				isPersonTurret=1;
				personTurretAction="Redd_Gepard_Commander_out_ffv";
				memoryPointsGetInGunner="pos commander";
				memoryPointsGetInGunnerDir="pos commander dir";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-80},
						{15,80}
					};
					limitsArrayBottom[]=
					{
						{-15,-80},
						{-15,80}
					};
				};
			};
		};
	};
	class Redd_Tank_Wiesel_1A2_TOW_base: Tank_F
	{
		armor=326; //Default = 150
		armorStructural=6; //Default = 6
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptic: CommanderOptics
					{
						gunnerName="$STR_Kommandant";
						gunnerForceOptics=0;
						gunnerAction="Redd_Tank_Wiesel_1A2_TOW_Commander_Out";
						gunnerInAction="Redd_Tank_Wiesel_1A2_TOW_Commander";
						body="";
						gun="";
						animationSourceBody="";
						animationSourceGun="";
						animationSourceHatch="Hatch_L_Rear_Source";
						proxyIndex=1;
						proxyType="CPGunner";
						viewGunnerInExternal=1;
						hideProxyInCombat=1;
						gunnerGetInAction="GetInMedium";
						gunnerGetOutAction="GetOutMedium";
						lodTurnedIn=1000;
						lodTurnedOut=1000;
						soundAttenuationTurret="TankAttenuation";
						gunnerCompartments="Compartment2";
						memoryPointGunnerOptics="commanderview";
						gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_F";
						memoryPointsGetInGunner="pos commander";
						memoryPointsGetInGunnerDir="pos commander dir";
						turretInfoType="";
						weapons[]={};
						magazines[]={};
						gunnerOutOpticsModel="";
						soundServo[]={};
						soundServoVertical[]={};
						startEngine=0;
						class ViewOptics: ViewOptics
						{
							initFov=1;
							maxFov=1;
							minFov=1;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={2,3};
						};
					};
					class LoaderOptic: CommanderOptic
					{
						gunnerName="$STR_Ladeschuetze";
						gunnerAction="Redd_Tank_Wiesel_1A2_TOW_Loader_Out";
						gunnerInAction="Redd_Tank_Wiesel_1A2_TOW_Loader";
						animationSourceHatch="Hatch_R_Rear_Source";
						proxyIndex=2;
						memoryPointGunnerOptics="loaderview";
						memoryPointsGetInGunner="pos loader";
						memoryPointsGetInGunnerDir="pos loader dir";
						primaryObserver=0;
						commanding=0;
						class ViewOptics: ViewOptics
						{
							initFov=1;
							maxFov=1;
							minFov=1;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={2,3};
						};
					};
				};
				weapons[]=
				{
					"Redd_TOW"
				};
				/*magazines[]=
				{
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW",
					"UAS_L_BGM71E2_TOW"
				};*/
				class OpticsOut
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.75;
						maxFov=1.25;
						minFov=0.25;
						visionMode[]={};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_TOW_T2";
						gunnerOpticsEffect[]={};
					};
				};
				class OpticsIn
				{
					class Day1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.175;
						maxFov=0.175;
						minFov=0.175;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_TOW_T2";
						gunnerOpticsEffect[]={};
					};
					class Day2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.02;
						maxFov=0.02;
						minFov=0.02;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_TOW_T2";
						gunnerOpticsEffect[]={};
					};
					class WBG1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.125;
						maxFov=0.125;
						minFov=0.125;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_TOW_T2";
						gunnerOpticsEffect[]={};
					};
					class WBG2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.02;
						maxFov=0.02;
						minFov=0.02;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_TOW_T2";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class Loader_MG3: NewTurret
			{
				body="MG_Turret";
				gun="MG_Gun";
				animationSourceBody="MG_Turret_Source";
				animationSourceGun="MG_Gun_Source";
				weapons[]=
				{
					"Redd_MG3"
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
					"UAS_BASE_762N_DM151_200Rnd"
				};*/
				gunnerName="$STR_MG3";
				proxyIndex=2;
				gunnerAction="Redd_Tank_Wiesel_1A2_TOW_Loader_MG";
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				hideProxyInCombat=1;
				gunnerGetOutAction="GetOutMedium";
				commanding=0;
				primaryGunner=0;
				dontCreateAi=1;
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				memoryPointGunnerOutOptics="gunnerview2";
				turretInfoType="Redd_RSC_MG3";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=4;
				gunnerRightHandAnimName="MG_Recoil";
				gunnerLeftHandAnimName="MG_Gun";
				memoryPointsGetInGunner="pos loader";
				memoryPointsGetInGunnerDir="dir loader dir";
				forceHideGunner=1;
				gunnerCompartments="Compartment4";
				lodTurnedOut=1000;
				initElev=0;
				minElev=-7;
				maxElev=50;
				initTurn=0;
				minTurn=-45;
				maxTurn=38;
				disableSoundAttenuation=1;
				canHideGunner=0;
				outGunnerMayFire=1;
				startEngine=0;
				lockWhenDriverOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{50,-45},
						{50,38}
					};
					limitsArrayBottom[]=
					{
						{-15,-45},
						{-15,-10},
						{-7,0},
						{-7,38}
					};
				};
				class ViewOptics: ViewOptics
				{
					initFov=0.40000001;
					maxFov=0.5;
					minFov=0.1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={2,3};
				};
				class OpticsOut
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.75;
						maxFov=1.25;
						minFov=0.25;
						visionMode[]={};
						gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.40000001;
						maxFov=0.40000001;
						minFov=0.40000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
					class Narrow
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.2;
						maxFov=0.2;
						minFov=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class Bino_Turret_Com: NewTurret
			{
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				animationSourceHatch="";
				animationSourceCamElev="";
				proxyindex=1;
				proxyType="CPGunner";
				gunnerName="Bino_Com";
				primaryGunner=0;
				primaryObserver=1;
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-80;
				maxTurn=80;
				initTurn=0;
				gunnerGetOutAction="GetOutMedium";
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment5";
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				startEngine=0;
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerInAction="rnt_wieselTOW_com_out_high";
				memoryPointGunnerOptics="";
				isPersonTurret=1;
				personTurretAction="rnt_wieselTOW_com_out_ffv";
				memoryPointsGetInGunner="pos commander";
				memoryPointsGetInGunnerDir="pos commander dir";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-80},
						{15,80}
					};
					limitsArrayBottom[]=
					{
						{-15,-80},
						{-15,80}
					};
				};
			};
			class Bino_Turret_Loader: NewTurret
			{
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				animationSourceHatch="";
				animationSourceCamElev="";
				proxyindex=2;
				proxyType="CPGunner";
				gunnerName="Bino_Loader";
				primaryGunner=0;
				primaryObserver=1;
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-80;
				maxTurn=80;
				initTurn=0;
				gunnerGetOutAction="GetOutMedium";
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment6";
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				startEngine=0;
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerInAction="rnt_wieselTOW_loader_out_high";
				memoryPointGunnerOptics="";
				isPersonTurret=1;
				personTurretAction="rnt_wieselTOW_loader_out_ffv";
				memoryPointsGetInGunner="pos loader";
				memoryPointsGetInGunnerDir="pos loader dir";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-80},
						{15,80}
					};
					limitsArrayBottom[]=
					{
						{-15,-80},
						{-15,80}
					};
				};
			};
		};
	};
	class Redd_Tank_Wiesel_1A4_MK20_base: Tank_F
	{
		armor=326; //Default = 150
		armorStructural=6; //Default = 6
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				weapons[]=
				{
					"Redd_Gesichert",
					"Redd_MK20FL"
				};
				magazines[]=
				{
					"Redd_MK20_AP_Mag120",
					"Redd_MK20_AP_Mag120",
					"Redd_MK20_HE_Mag200",
					"Redd_MK20_HE_Mag200"
				};
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={2,3};
					initFov=0.40000001;
					minFov=0.079999998;
					maxFov=0.029999999;
				};
				class OpticsIn
				{
					class Day1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.23;
						maxFov=0.23;
						minFov=0.23;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_T1";
						gunnerOpticsEffect[]={};
					};
					class Day2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.059999999;
						maxFov=0.059999999;
						minFov=0.059999999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_T2";
						gunnerOpticsEffect[]={};
					};
					class WBG1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.23;
						maxFov=0.23;
						minFov=0.23;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_W1";
						gunnerOpticsEffect[]={};
					};
					class WBG2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.023;
						maxFov=0.023;
						minFov=0.023;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_W2";
						gunnerOpticsEffect[]={};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="vez";
						visual="DamageVisual";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.094999999;
						armorComponent="";
						isTurret=1;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="zbran";
						visual="DamageVisual";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.090000004;
						armorComponent="";
						isGun=1;
					};
				};
			};
			class wieselMk20_Bino_Turret_Com: NewTurret
			{
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				animationSourceHatch="";
				animationSourceCamElev="";
				proxyindex=1;
				proxyType="CPGunner";
				gunnerName="Bino_Com";
				primaryGunner=0;
				primaryObserver=1;
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-80;
				maxTurn=80;
				initTurn=0;
				gunnerGetOutAction="GetOutMedium";
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment3";
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				startEngine=0;
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerInAction="rnt_wieselMK20_com_out_high";
				memoryPointGunnerOptics="";
				isPersonTurret=1;
				personTurretAction="rnt_wieselMK20_com_out_ffv";
				memoryPointsGetInGunner="pos_commander";
				memoryPointsGetInGunnerDir="pos_commander_dir";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-80},
						{15,80}
					};
					limitsArrayBottom[]=
					{
						{-15,-80},
						{-15,80}
					};
				};
			};
		};
	};
	class rnt_sppz_2a2_luchs_Base: Wheeled_APC_F
	{
		enginePower=358;
		peakTorque=1700;
		maxSpeed=96;
		armor=512; //Default=200
		armorStructural=7; //Default=5
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerForceOptics=0;
						gunnerAction="rnt_luchs_com_out";
						gunnerInAction="rnt_luchs_com";
						proxyIndex=1;
						initElev=0;
						minElev=-15;
						maxElev=15;
						initTurn=0;
						minTurn=-80;
						maxTurn=80;
						viewGunnerInExternal=1;
						hideProxyInCombat=1;
						proxyType="CPCommander";
						startEngine=0;
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						turretInfoType="Redd_RCS_Turret";
						stabilizedInAxes=3;
						lodTurnedIn=1000;
						lodTurnedOut=1202;
						soundAttenuationTurret="TankAttenuation";
						gunnerCompartments="Compartment1";
						weapons[]=
						{
							"Redd_SmokeLauncher"
						};
						magazines[]=
						{
							"Redd_SmokeLauncherMag"
						};
						ace_fcs_Enabled=0;
						gunnerOutOpticsModel="";
						outGunnerMayFire=0;
						soundServo[]={};
						soundServoVertical[]={};
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerLeftHandAnimName="com_turret_control";
						gunnerRightHandAnimName="com_turret_control";
						memoryPointsGetInGunner="pos gunner";
						memoryPointsGetInGunnerDir="pos gunner dir";
						class ViewOptics: ViewOptics
						{
							visionMode[]=
							{
								"Normal",
								"NVG",
								"TI"
							};
							thermalMode[]={2,3};
							initFov=0.40000001;
							minFov=0.079999998;
							maxFov=0.029999999;
						};
						class TurnIn
						{
							limitsArrayTop[]=
							{
								{11,-43},
								{11,43}
							};
							limitsArrayBottom[]=
							{
								{-11,-43},
								{-11,43}
							};
						};
						class TurnOut
						{
							limitsArrayTop[]=
							{
								{15,-90},
								{15,90}
							};
							limitsArrayBottom[]=
							{
								{-15,-90},
								{-15,90}
							};
						};
						class OpticsIn
						{
							class Day1
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.23;
								maxFov=0.23;
								minFov=0.23;
								visionMode[]=
								{
									"Normal",
									"NVG",
									"TI"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_T1";
								gunnerOpticsEffect[]={};
							};
							class Day2
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.059999999;
								maxFov=0.059999999;
								minFov=0.059999999;
								visionMode[]=
								{
									"Normal",
									"NVG",
									"TI"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_T2";
								gunnerOpticsEffect[]={};
							};
							class WBG1
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.23;
								maxFov=0.23;
								minFov=0.23;
								visionMode[]=
								{
									"Normal",
									"NVG",
									"TI"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_W1";
								gunnerOpticsEffect[]={};
							};
							class WBG2
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.023;
								maxFov=0.023;
								minFov=0.023;
								visionMode[]=
								{
									"Normal",
									"NVG",
									"TI"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_W2";
								gunnerOpticsEffect[]={};
							};
						};
						class HitPoints
						{
							class HitTurret
							{
								armor=1;
								material=-1;
								name="";
								visual="Camo1";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.079999998;
								armorComponent="";
								isTurret=1;
							};
							class HitGun
							{
								armor=1;
								material=-1;
								name="";
								visual="Camo1";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.079999998;
								armorComponent="";
								isGun=1;
							};
						};
					};
				};
				weapons[]=
				{
					"Redd_Gesichert",
					"Redd_MK20"
				};
				magazines[]=
				{
					"Redd_MK20_AP_Mag",
					"Redd_MK20_AP_Mag",
					"Redd_MK20_HE_Mag",
					"Redd_MK20_HE_Mag"
				};
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={2,3};
					initFov=0.40000001;
					minFov=0.079999998;
					maxFov=0.029999999;
				};
				class OpticsIn
				{
					class Day1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.23;
						maxFov=0.23;
						minFov=0.23;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_T1";
						gunnerOpticsEffect[]={};
					};
					class Day2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.059999999;
						maxFov=0.059999999;
						minFov=0.059999999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_T2";
						gunnerOpticsEffect[]={};
					};
					class WBG1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.23;
						maxFov=0.23;
						minFov=0.23;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_W1";
						gunnerOpticsEffect[]={};
					};
					class WBG2
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.023;
						maxFov=0.023;
						minFov=0.023;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_MK20_W2";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class Luchs_Reardriver_Turret: NewTurret
			{
				body="driver_2_turret";
				gun="driver_2_gun";
				animationSourceBody="driver_2_turret_source";
				animationSourceGun="driver_2_gun_source";
				animationSourceHatch="hatchDriver_2";
				enabledByAnimationSource="driver_hatch_2";
				proxyindex=2;
				gunnerName="$STR_R_Driver";
				primaryGunner=0;
				primaryObserver=0;
				weapons[]={};
				magazines[]={};
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=180;
				stabilizedInAxes=3;
				gunnerGetOutAction="GetOutMedium";
				turretInfoType="Redd_RCS_Driver_APC";
				gunnerForceOptics=0;
				forceHideGunner=0;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment1";
				LODTurnedIn=1100;
				LODTurnedOut=1203;
				startEngine=0;
				gunnerInAction="rnt_luchs_driver_2";
				gunnerAction="rnt_luchs_driver_2_out";
				memoryPointGunnerOptics="driverview_2";
				memoryPointsGetInGunner="pos driver_2";
				memoryPointsGetInGunnerDir="pos driver dir_2";
				class OpticsIn
				{
					class Day1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.75;
						maxFov=0.75;
						minFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\Redd_Vehicles_Main\data\Redd_optik_D";
						gunnerOpticsEffect[]={};
					};
				};
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{0,-180}
					};
					limitsArrayBottom[]=
					{
						{0,-180}
					};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-80},
						{15,80}
					};
					limitsArrayBottom[]=
					{
						{-15,-80},
						{-15,80}
					};
				};
			};
			class Luchs_MG3_Turret: NewTurret
			{
				body="MainTurret_mg";
				gun="mainGun_mg";
				animationSourceBody="MainTurret_mg";
				animationSourceGun="mainGun_mg";
				proxyindex=3;
				gunnerName="MG3";
				primaryGunner=0;
				primaryObserver=1;
				weapons[]=
				{
					"Redd_MG3"
				};
				magazines[]=
				{
					"Redd_Mg3_Mag_120",
					"Redd_Mg3_Mag_120",
					"Redd_Mg3_Mag_120",
					"Redd_Mg3_Mag_120",
					"Redd_Mg3_Mag_120",
					"Redd_Mg3_Mag_120",
					"Redd_Mg3_Mag_120",
					"Redd_Mg3_Mag_120",
					"Redd_Mg3_Mag_120",
					"Redd_Mg3_Mag_120"
				};
				initElev=0;
				minElev=-20;
				maxElev=50;
				initTurn=0;
				minTurn=-360;
				maxTurn=360;
				stabilizedInAxes=3;
				gunnerGetOutAction="GetOutMedium";
				turretInfoType="Redd_RSC_MG3";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=4;
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment2";
				lodTurnedOut=1202;
				startEngine=0;
				gunnerRightHandAnimName="RecoilHlaven_mg";
				gunnerLeftHandAnimName="mainGun_mg";
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerAction="rnt_luchs_com_out_mg";
				memoryPointGunnerOutOptics="gunnerview2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				ace_fcs_Enabled=0;
				outGunnerMayFire=1;
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				class OpticsOut
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.75;
						maxFov=1.25;
						minFov=0.25;
						visionMode[]={};
						gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.40000001;
						maxFov=0.40000001;
						minFov=0.40000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
					class Narrow
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.2;
						maxFov=0.2;
						minFov=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
				};
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{50,-180},
						{50,180}
					};
					limitsArrayBottom[]=
					{
						{-15,-180},
						{-8,-30},
						{-8,0},
						{-8,30},
						{-15,180}
					};
				};
			};
			class Luchs_Bino_Turret_Com: NewTurret
			{
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				animationSourceHatch="";
				animationSourceCamElev="";
				proxyindex=1;
				proxyType="CPCommander";
				gunnerName="Bino_Com";
				primaryGunner=0;
				primaryObserver=1;
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-80;
				maxTurn=80;
				initTurn=0;
				gunnerGetOutAction="GetOutMedium";
				gunnerForceOptics=0;
				canHideGunner=0;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunnerCompartments="Compartment3";
				LODTurnedIn=1202;
				LODTurnedOut=1202;
				startEngine=0;
				dontCreateAi=1;
				disableSoundAttenuation=1;
				gunnerInAction="rnt_luchs_com_out_high";
				memoryPointGunnerOptics="";
				isPersonTurret=1;
				personTurretAction="rnt_luchs_com_out_ffv";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-80},
						{15,80}
					};
					limitsArrayBottom[]=
					{
						{-15,-80},
						{-15,80}
					};
				};
			};
		};
	};
};
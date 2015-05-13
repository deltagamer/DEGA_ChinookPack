	class DEGA_BAF_CH47F_M134_M240: Helicopter_Base_H
	{
		author = "Deltagamer";
		model = "\chinookpack\Chinook_BAF\BAF_CH_47F_HC2_M240.p3d";
		picture = "\chinookpack\data\UI\Picture_ch47f_CA.paa";
		icon = "\chinookpack\data\UI\Icon_ch47f_CA.paa";
		mapSize = 24;		
		
		driveOnComponent[] = {"Wheels"};
		
		class pilotCamera				/// camera for pilot to observe sling loading
        {
            class OpticsIn				/// what is seen if player switches to optics
            {		
                class Wide
                {
                    opticsDisplayName 	= "W";	/// used in case the UI has place to display optics mode
                    initAngleX			= 0;	/// X-axis rotation and its limits
					minAngleX			= -0; 	/// X-axis rotation and its limits
					maxAngleX			= +0;	/// X-axis rotation and its limits
                    initAngleY			= 0; 	/// Y-axis rotation and its limits
					minAngleY			= -0;  	/// Y-axis rotation and its limits
					maxAngleY			= +0; 	/// Y-axis rotation and its limits
                    initFov				= 0.5;	/// Field of view size settings
					minFov				= 0.5;	/// Field of view size settings
					maxFov				= 0.5;	/// Field of view size settings
                    visionMode[] 		= {"Normal","NVG", "TI"};	/// what vision modes are available
                    thermalMode[] 		= {0,1};			/// not necessary as there is no TI mode defined, but just in case
                    gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; /// some optics model
				};
				showMiniMapInOptics				= true;	/// allows showing GPS mini map in optics
				showUAVViewpInOptics			= true;	/// allows showing UAV feed in this optics
				showSlingLoadManagerInOptics 	= true;		/// allows displaying of Sling Loading Assistant
            };
            minTurn                 = 0; 		//turn
            maxTurn                 = 0; 		//turn
            initTurn                = 0; 		//turn
            minElev                 = 80; 		//turn
            maxElev                 = 80; 		//turn
            initElev                = 80; 		//turn
            maxXRotSpeed            = 0.5; 		// movement speed
            maxYRotSpeed            = 0.5; 		// movement speed
            pilotOpticsShowCursor   = 1; 		//to show aimCursor (is useful to see plane direction)
            controllable            = false; 	// set false to have static camera, true to have moving like a turret
        };
        memoryPointDriverOptics = "slingCamera";	/// what memory point is the origin of the camera	
		
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";		
		
        AGM_FastRoping = 1;
        AGM_FastRoping_Positions[] = {{-0.6, -7.7, -1}, {0.6, -7.7, -1}};				
		scope=2;
		maxSpeed = 295;
		maxFordingDepth = 1;
		expansion = 1;
		displayName = "RAF CH-47F HC2 (M240)";
		side = 1;
		faction= BLU_F;
		vehicleClass = "CH47_CH_47F";
		accuracy=0.5;
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.0;
		armor=30;
		damageResistance = 0.00100;
		destrType=DestructWreck;
		simulation = "HelicopterX";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;

		/*
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties 
		{
			RTDconfig = "A3\Air_F_Beta\Heli_Transport_02\RTD_Heli_Transport_02.xml";
			autoHoverCorrection[] = {4.7, 3.8, 0};
			defaultCollective = 0.665;
			retreatBladeStallWarningSpeed = 92.583;
			maxTorque = 4014;
			stressDamagePerSec = 0.00333333;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 185000;
			maxTailRotorStress = 30000;
		};
		*/

		liftForceCoef = 2.5;
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1; // 1 = true, 0 = false
		tf_isolatedAmount_api = 0.2;
		
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_helicrew_F", "B_helicrew_F", "B_helicrew_F", "B_helicrew_F"};
		driverAction = "CH47_Pilot_EP1";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";
		
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};

		cargoAction[] = {
		"CH47_Cargo03_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1",
		"CH47_Cargo03_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1",
		"CH47_Cargo03_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1",
		"passenger_flatground_crosslegs","passenger_flatground_crosslegs","passenger_flatground_crosslegs","passenger_flatground_generic04","passenger_flatground_generic04","passenger_flatground_generic02","passenger_flatground_generic04","passenger_flatground_generic02",
		"passenger_flatground_generic02","passenger_flatground_crosslegs"
		};	
     	cargoIsCoDriver[] = {"true", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false"};
		
		transportSoldier = 34;
		transportMaxBackpacks = 30;

		weapons[] = {CMFlareLauncher};
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine};
		LockDetectionSystem = 2 + 8 + 4;
		IncommingMisslieDetectionSystem = 16;

		radarType = 4;
		enableManualFire = 0;

		//threat[] VSoft, VArmor, VAir
		threat[] = {0.8, 1, 0.6};

		class RenderTargets /// class for all Picture-in-Picture
		{
			class camera
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition		= "FLIR_begin"; 	/// memory point of PiP origin
					pointDirection		= "FLIR_end"; 	/// memory point of PiP direction
					renderQuality 		= 4;			/// what quality should the PiP be
					renderVisionMode 	= 2;			/// zero means standard vision
					fov 				= 0.466;			/// what is the angle of the PiP field of view
				}; 	
			};
		};			
		class MFD{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 10;
			};			
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 5;
			};				
		};	
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret //Left Doorgun
			{
				isCopilot = 0;
				CanEject = 1;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -50; maxElev = +30; initElev = -30;
				minTurn = -3; maxTurn = 173; initTurn = 0;
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = StabilizedInAxesNone;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"M134_minigun_1"};
				magazines[] = {"5000Rnd_762x51_Belt"};
				gunnerName = "Left Door Gunner";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "CH47_Gunner_EP1";
				gunnerInAction = "CH47_Gunner_EP1";
				commanding = -1;
				primaryGunner = 0;
//				proxyIndex = 2;
				class ViewOptics
				{
					initAngleX = 0; minAngleX = -30; maxAngleX = +30;
					initAngleY = 0; minAngleY = -100; maxAngleY = +100;
					initFov = 0.7; minFov = 0.25; maxFov = 1.1;
				};
				gunnerCompartments = Compartment1;
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
			};		
			class CopilotTurret: CopilotTurret
			{
				body="FLIR_turret";
				gun="FLIR_gun";
				animationSourceBody="FLIR_turret";
				animationSourceGun="FLIR_gun";
                memoryPointGunnerOptics= "FLIR_end";								
				gunBeg="FLIR_end"; //gunBeg=endpoint of the gun
				gunEnd="FLIR_begin"; //gunEnd=chamber of the gun	
				memoryPointGun = "FLIR_end";
			    stabilizedInAxes = 3;
                inGunnerMayFire = true;	
				gunnerOpticsEffect[] = {};
				gunnerOpticsModel = "";						
				isCopilot = 1;
				turretInfoType = "RscOptics_UAV_gunner";
				weapons[] = {"Laserdesignator_mounted"};						
				magazines[] = {Laserbatteries};
				proxyType = CPGunner;	
				minElev=-40; maxElev=+20; initElev=0;
				minTurn=-120; maxTurn=120; initTurn=0;							
				gunnerForceOptics = false;				
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "CH47_Pilot_EP1";
				gunnerInAction = "CH47_Pilot_EP1"; 					
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Co-Pilot";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 30;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment1";
				commanding = -3;
				primaryGunner = 1;				
                class OpticsIn 
                {
	                class WideNGS
	                {
		                opticsDisplayName = "W";
		                initAngleX = 0;
		                minAngleX = -35;
		                maxAngleX = 10;
		                initAngleY = 0;
		                minAngleY = -100;
		                maxAngleY = 100;
		                initFov = 0.466;
		                minFov = 0.466;
		                maxFov = 0.466;
		                visionMode[] = {"Normal","NVG", "Ti"};
		                thermalMode[] = {0, 1};
		                gunnerOpticsColor[]= {0.15000001,1,0.15000001,1};
		                gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
		                directionStabilized=0;
		                opticsPPEffects[]={"OpticsCHAbera2","OpticsBlur2"};
	               };
	               class Wide 
	               {
		                opticsDisplayName = "W";
		                initAngleX = 0;
		                minAngleX = -35;
		                maxAngleX = 10;
		                initAngleY = 0;
		                minAngleY = -100;
		                maxAngleY = 100;
		                initFov = 0.466;
		                minFov = 0.466;
		                maxFov = 0.466;
		                visionMode[] = {"Normal","NVG", "Ti"};
		                thermalMode[] = {0, 1};
		                gunnerOpticsColor[]= {0.15000001,1,0.15000001,1};
		                gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
		                //gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
		                directionStabilized=1;
		                opticsPPEffects[]={"OpticsCHAbera2","OpticsBlur2"};
		                gunnerOpticsEffect[]={"TankCommanderOptics1"};
	               };
	               class WideL: Wide 
	               {
		                opticsDisplayName = "WL";
		                initFov = 0.2;
		                minFov = 0.2;
		                maxFov = 0.2;
		                //gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
		                //gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
		                gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
		                gunnerOpticsColor[]= {0,0,0,1};
		                directionStabilized=1;	// Camera Stabilizing Boolean
		                opticsPPEffects[]={"OpticsCHAbera2","OpticsBlur2"};
	              };
	              class Medium : Wide 
	              {
		                opticsDisplayName = "M";
		                initFov = 0.1;
		                minFov = 0.1;
		                maxFov = 0.1;
		                directionStabilized=1;	// Camera Stabilizing Boolean
		                gunnerOpticsColor[]= {0,0,0,1};
		                //gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
		                gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
	              };
	              class Narrow : Wide 
	              {
		                opticsDisplayName = "N";
		                gunnerOpticsColor[]= {0,0,0,1};
		                gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
		                //gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
		                directionStabilized=1;	// Camera Stabilizing Boolean
		                initFov = 0.02;
		                minFov = 0.02;
		                maxFov = 0.02;
	              };
	              class Narrower : Wide 
	              {
		                opticsDisplayName = "N";
		                gunnerOpticsColor[]= {0,0,0,1};
		                gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
		                //gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
		                directionStabilized=1;	// Camera Stabilizing Boolean
		                initFov = 0.01;
		                minFov = 0.01;
		                maxFov = 0.01;
	              };
               };		
			   class OpticsOut
			   {
				   class Monocular // 1x-3.5x
				   {
						initAngleX=0; minAngleX=-30; maxAngleX=+30;
						initAngleY=0; minAngleY=-100; maxAngleY=+100;
						initFov=1.1; minFov=0.133; maxFov=1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				gunnerHasFlares = true;						
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				CanEject = 1;
				body = "Turret2";
				gun = "Gun_2";
				
				gunnerCompartments = "Compartment1";				
				
				minElev = -60; maxElev = +30; initElev = -30;
				minTurn = -173; maxTurn = 3; initTurn = 0;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = StabilizedInAxesNone;
				selectionFireAnim = "zasleh_1";
			    proxyIndex = 2;
				gunnerName = "Right Door Gunner";
				commanding = -2;
				weapons[] = {"M134_minigun_2"};
				magazines[] = {"5000Rnd_762x51_Belt"};				
				gunBeg = "muzzle_2"; //gunBeg=endpoint of the gun
				gunEnd = "chamber_2"; //gunEnd=chamber of the gun
				primaryGunner = 0;
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
			};			
			class BackDoorGun: MainTurret
			{
				isCopilot = 0;
				CanEject = 1;
				body = "Turret3";
				gun = "Gun_3";
				minTurn = 90; maxTurn = 270; initTurn = 180;
				minElev = -50; maxElev = +50; initElev = 0;
				animationSourceBody = "Turret_3";
				animationSourceGun = "Gun_3";
				stabilizedInAxes = StabilizedInAxesNone;
				selectionFireAnim = "zasleh_3";
				
				gunnerCompartments = "Compartment1";

				proxyIndex = 3;
				gunnerName = "Rear Gunner";
				gunnerOpticsShowCursor = 0;

				commanding = -1;
				gunnerAction = "CH47_Gunner01_EP1";
				gunnerInAction = "CH47_Gunner01_EP1";

				weapons[] = {"M240_delta_chinook"};
				magazines[] = {"100Rnd_762x51_M240_delta_chinook", "100Rnd_762x51_M240_delta_chinook", "100Rnd_762x51_M240_delta_chinook", "100Rnd_762x51_M240_delta_chinook", "100Rnd_762x51_M240_delta_chinook"};

				gunBeg = "muzzle_3"; //gunBeg=endpoint of the gun
				gunEnd = "chamber_3"; //gunEnd=chamber of the gun

				primaryGunner = 0;
				memoryPointGun = "machinegun_3";
				memoryPointGunnerOptics = "gunnerview_3";
			};	
			class CargoTurret_03: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_4";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment1";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo 2";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo 2 dir";	/// direction of get in action
				gunnerName 					= "Passenger (Crew Chief)";	/// name of the position in the Action menu
				proxyIndex 					= 39;					/// what cargo proxy is used according to index in the model
				maxElev 					= 40;					/// what is the highest possible elevation of the turret
				minElev 					= -5;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 90;					/// what is the left-most possible turn of the turret
				minTurn 					= -90;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=0;
				memoryPointGunnerOptics= "";
			};				
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim{source="reload";weapon="M240_delta_chinook";};
			class ReloadMagazine{source="reloadmagazine";weapon="M240_delta_chinook";};
			class Revolving{source="revolving";weapon="M240_delta_chinook";};
			
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun_1";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
			class CargoDoor
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class CrewDoor
			{
				source = "user";
				animPeriod = 2.5;
				initPhase = 0;
			};
			class LockCargo_Move
			{
				source = "user";
				animPeriod = 2.5;
				initPhase = 0;
			};		
			class Hatch
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};		
			class Pilot_doors
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};	
			class Pilot_doors_stored
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};	
			class Stretchers_deploy
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class Stretchers_Undeploy
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class HidePIPMFDCO
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};	
			class HidePIPMFDPI
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			// Virtual Garage - Animation Source //
			class DoorWinch_hide
			{
				DisplayName= "Hide Winch";			
				source="user";
				animPeriod=0;
				initPhase=1;
				author = "Deltagamer";				
			};			
			class BAF_Equipment_hide
			{
				DisplayName= "Hide Countermeasure Equipment";
				source="user";
				author="Deltagamer";
				animPeriod= 0;
				initPhase=0;
			};	
			class US_Decal_hide
			{
				DisplayName= "Hide US Army Decal";
				source="user";
				author="Deltagamer";
				animPeriod= 0;
				initPhase=1;
			};				
		};	
		hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[]={"\chinookpack\data\ch47_ext_1_baf_co.paa", "\chinookpack\data\ch47_ext_2_baf_co.paa"};			
		animationList[]=
		{
			"DoorWinch_hide", 0,
			"BAF_Equipment_hide", 0,
            "US_Decal_hide", 0			
		};		
		class textureSources
		{
			class BAF_Green_Camo
			{
				displayName="BAF Green Camo (Default)";
				author= "Bohemia Interactive";
				textures[]= 
				{
					"\chinookpack\data\ch47_ext_1_baf_co.paa", "\chinookpack\data\ch47_ext_2_baf_co.paa"
				};
				factions[]= 
				{
					"BLU_F", "BLU_G_F"
				};
			};
			class Universal_OD_Green_Camo
			{
				displayName="Universal OD Green Camo";
				author= "Bohemia Interactive";
				textures[]= 
				{
					"\chinookpack\data\ch47_ext_1_co.paa", "\chinookpack\data\ch47_ext_2_co.paa"
				};
				factions[]= 
				{
					"BLU_F", "BLU_G_F"
				};
			};				
			class Universal_Black_Camo
			{
				displayName="Universal Black Camo"; 
				author= "SyNcRoNiCzZ"; 
				textures[]=
				{
					"\chinookpack\data\Skins\Black\ch47_ext_1_SyNcRoNiCzZ_Black_co.paa", "\chinookpack\data\Skins\Black\ch47_ext_2_SyNcRoNiCzZ_Black_co.paa"
				};
				factions[]=
				{
					"BLU_F", "BLU_G_F"
				};
			};
			class Universal_Grey_Camo
			{
				displayName="Universal Grey Camo";
				author= "SyNcRoNiCzZ";
				textures[]= 
				{
					"\chinookpack\data\Skins\Grey\ch47_ext_1_SyNcRoNiCzZ_Grey_co.paa", "\chinookpack\data\Skins\Grey\ch47_ext_2_SyNcRoNiCzZ_Grey_co.paa"
				};
				factions[]=
				{
					"BLU_F", "BLU_G_F"
				};
			};
			class Universal_Desert_Camo 
			{
				displayName="Universal Desert Camo";
				author= "CptDavo";
				textures[]= 
				{
					"\chinookpack\data\Skins\Desert\ch47_ext_1_CptDavo_Desert_co.paa", "\chinookpack\data\Skins\Desert\ch47_ext_2_CptDavo_Desert_co.paa"
				};
				factions[]= 
				{
					"BLU_F", "BLU_G_F"
				};
			};	
		};		
		class HitPoints : HitPoints
		{
			class HitVRotor {armor = 1; material = 51; name = "mala vrtule"; visual = "mala vrtule staticka"; passThrough = 0.5;};
			class HitHRotor {armor = 1; material = 51; name = "velka vrtule"; visual = "velka vrtule staticka"; passThrough = 0.5;};
		};
		class UserActions 
		{
			class COmfdpip1ON
			{
				displayName= "<t color='#ffff00'>Turn On FLIR MFD</t>"; //Yellow
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""copip"" < 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip"",1];";
				priority=15;
			}; 	
			class COmfdpip1OFF
			{
				displayName= "<t color='#ffff00'>Turn Off FLIR MFD</t>"; //Yellow
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""copip"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip"",0];";
				priority=15;
			}; 
			class Pimfdpip1ON
			{
				displayName= "<t color='#ffff00'>Turn On FLIR MFD</t>"; //Yellow
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""copip1"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",1];";
				priority=15;
			}; 	
			class Pimfdpip1OFF
			{
				displayName= "<t color='#ffff00'>Turn Off FLIR MFD</t>"; //Yellow
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""copip1"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",0];";
				priority=15;
			}; 			
			class Open_Hatch
			{
				displayName= "<t color='#008000'>Open Hatch</t>"; 
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""Hatch"" < 0.5 && ((this getCargoIndex player) isEqualTo 0);";
				statement = "[[this,[[""Hatch"",1]],true,[25,26,27,28,29,30,31,32,33,34,35,36],[]], ""DEGA_fnc_deploySeats"", this] call BIS_fnc_MP;";		
				priority=7;
			}; 	
			class Close_Hatch
			{
				displayName= "<t color='#008000'>Close Hatch</t>"; 
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""Hatch"" > 0.5 && ((this getCargoIndex player) isEqualTo 0);";
				statement = "[[this,[[""Hatch"",0]],false,[25,26,27,28,29,30,31,32,33,34,35,36],[]], ""DEGA_fnc_deploySeats"", this] call BIS_fnc_MP;";
				priority=7;
			};	
			class Remove_PilotDoors
			{
				displayName= "<t color='#008000'>Remove Pilot Doors</t>"; 
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""Pilot_doors"" < 0.5 && ((this getCargoIndex player) isEqualTo 0);";
				statement="this animate [""Pilot_doors"",1]; this animate [""Pilot_doors_stored"",0];";
				priority=7;
			}; 	
			class Add_PilotDoors
			{
				displayName= "<t color='#008000'>Add Pilot Doors</t>"; 
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""Pilot_doors"" > 0.5 && ((this getCargoIndex player) isEqualTo 0);";
				statement="this animate [""Pilot_doors"",0]; this animate [""Pilot_doors_stored"",1];";
				priority=7;
			};				
			class Pilot_Smoke_Grenade
			{
				displayName="<t color='00CC00'>Drop Smoke Grenade Right</t>";
				displayNameDefault="";
				showwindow = 0;
				position="";
				radius=2;
				onlyForPlayer=true;
				condition="(player == (driver this) && (alive this)) AND this animationPhase ""Pilot_doors"" == 1";
				statement="[this,""right_copilotsmoke""] spawn DEGA_fnc_dropSmoke;";
				priority=7;
			};
			class COPilot_Smoke_Grenade
			{
				displayName="<t color='00CC00'>Drop Smoke Grenade Left</t>";
				displayNameDefault="";
				showwindow = 0;
				position="";
				radius=2;
				onlyForPlayer=true;
				condition="(player == (gunner this) && (alive this)) AND this animationPhase ""Pilot_doors"" == 1";
				statement="[this,""left_pilotsmoke""] spawn DEGA_fnc_dropSmoke;";
				priority=7;
			};						
		};		
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"chinookpack\data\sounds\close",0.31622776,1};
		soundGetOut[] = {"chinookpack\data\sounds\open",0.31622776,1,40};
		soundDammage[] = {"chinookpack\data\sounds\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"chinookpack\data\sounds\CH47_start_int",0.1,1.0};
		soundEngineOnExt[] = {"chinookpack\data\sounds\CH47_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"chinookpack\data\sounds\CH47_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"chinookpack\data\sounds\CH47_stop_ext",0.56234133,1.0,800};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2", 0.1, 1};
		rotorDamageInt[] = {"a3\sounds_f\vehicles\air\noises\heli_damage_rotor_int_1", 1.0, 1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1", 1.0, 1.0, 300};
		rotorDamage[] = {"rotorDamageInt", "rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail", 1.0, 1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail", 1.0, 1.0, 300};
		tailDamage[] = {"tailDamageInt", "tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open", 1.0, 1.0, 100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open", 1.0, 1.0, 100};
		landingSoundInt[] = {"landingSoundInt0", 0.5, "landingSoundInt1", 0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1", 1.77828, 1.0, 100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1", 1.77828, 1.0, 100};
		landingSoundOut[] = {"landingSoundOut0", 0.5, "landingSoundOut1", 0.5};
		gearUpExt[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_OUT", 1.0, 1.0, 1000};
		gearUpInt[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_IN", 1.0, 1.0, 100};
		gearUp[] = {"gearUpInt", "gearUpExt"};
		gearDownInt[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_IN", 1.0, 1.0, 100};
		gearDownExt[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_OUT", 1.0, 1.0, 1000};
		gearDown[] = {"gearDownInt", "gearDownExt"};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", 1.0, 1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", 1.0, 1.0, 300};
		slingCargoAttach[] = {"slingCargoAttach0", "slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", 1.0, 1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", 1.0, 1.0, 300};
		slingCargoDetach[] = {"slingCargoDetach0", "slingCargoDetach1"};
		soundWaterCollision1[]={"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1,1,100};
		soundWaterCollision2[]={"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1,1,100};
		soundWaterCrashes[]={"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};		
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		class Sounds
		/* EXTERNAL SOUNDS CH47 */
		{
			class Engine
			{
				sound[] = {"chinookpack\data\sounds\CH47_engine_high_ext", db0, 1.0, 800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"chinookpack\data\sounds\CH47_rotor_ext", db10, 1.0, 1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8, 3.14, 2.0, 0.9};
			};
			class RotorHighOut
			{
				sound[] = {"chinookpack\data\sounds\CH47_rotor_forsage_ext", db10, 1.0, 1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))" ;
				cone[] = {1.8, 3.14, 2.0, 0.9};
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};

		/* INTERNAL SOUNDS CH47 */
  			class EngineIn
			{
				sound[] = {"chinookpack\data\sounds\CH47_engine_high_int", db5, 1.0};
				frequency = "rotorSpeed";
			 	volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"chinookpack\data\sounds\CH47_rotor_int", db5, 1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"chinookpack\data\sounds\CH47_rotor_forsage_int", db5, 1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)" ;
			};
		};
		class Library 
		{
			libTextDesc = "CH-47F";
		};
		class MarkerLights {
			class WhiteStill {
				name = "bily pozicni";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};		
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};			
			class GreenStill {
				name = "zeleny pozicni";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};		
			class RedBlinking {
				name = "bily pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				intensity = 50;
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};		
			class WhiteBlinking {
				name = "cerveny pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				intensity = 50;
				ambient[] = {0.09, 0.015, 0.01};
				blinking = 1;
				blinkingPattern[] = {0.2, 1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};			
			class WhiteStill_1 {
				name = "CollisionLight_White_1_pos";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 0;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};			
			class RedStill_interior_1 {
				name = "Interior_red_light";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 0;
				intensity = 50;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};					
			class WhiteStill_2 {
				name = "PositionLight_White_1_pos";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 0;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};					
			class RedStill_1 {
				name = "PositionLight_Red_1_pos";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};		
			class RedStill_Interior {
				name = "";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;				
			};						
			class GreenStill_1 {
				name = "PositionLight_Green_1_pos";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};		
		};
		class Reflectors
		{
			class Right
			{
				color[] = {7000,7500,10000};	/// defines red, green, blue and alpha components of the light
				ambient[] = {70,75,100};		/// the same definition format for colouring the environment around
				intensity = 50;					/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				size = 1;						/// defines the visible size of light, has not much of an effect now
				innerAngle = 20;				/// angle from light direction vector where the light is at full strength
				outerAngle = 135;				/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;				/// coefficient of fading the light between inner and outer cone angles
				position = "Light_R_pos";		/// name of memory point in model to take the origin of the light
				direction = "Light_R_dir";		/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_R_hitpoint";	/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_R";			/// name of selection in visual lods of the model that are going to be hidden while the light is off
				useFlare = true;				/// boolean switch if the light produces flare or not
				flareSize = 15;					/// how big is the flare, using the same metrics as intensity
				flareMaxDistance = 300;			/// maximum distance where the flare is drawn
				dayLight = false;				/// boolean switch if the light is used during day or not
				class Attenuation
				{
					start = 0;					/// offset of start of the attenuation
					constant = 0;				/// constant attenuation of the light in any distance from source
					linear = 1;					/// coefficient for linear attenuation
					quadratic = 1;				/// coefficient for attenuation with square of distance from source
					hardLimitStart = 100;		/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 200;			/// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Left: Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};		
		};
		aggregateReflectors[] = {{"Left", "Right"}};	/// aggregates both sources into one to increase performance
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust1";
			};
			class Exhaust2
			{
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust2";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"chinookpack\data\ch47_1.rvmat",
				"chinookpack\data\ch47_1_damage.rvmat",
				"chinookpack\data\ch47_1_destruct.rvmat",

				"chinookpack\data\ch47_2.rvmat",
				"chinookpack\data\ch47_2_damage.rvmat",
				"chinookpack\data\ch47_2_destruct.rvmat",

				"chinookpack\data\ch47_1_int.rvmat",
				"chinookpack\data\ch47_1_int.rvmat",
				"chinookpack\data\ch47_1_int_destruct.rvmat",

				"chinookpack\data\ch47_2_int.rvmat",
				"chinookpack\data\ch47_2_int.rvmat",
				"chinookpack\data\ch47_2_int_destruct.rvmat",

				"chinookpack\data\ch47_sklo_in.rvmat",
				"chinookpack\data\ch47_sklo_in_damage.rvmat",
				"chinookpack\data\ch47_sklo_in_damage.rvmat",

				"chinookpack\data\ch47_sklo.rvmat",
				"chinookpack\data\ch47_sklo_damage.rvmat",
				"chinookpack\data\ch47_sklo_damage.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"chinookpack\data\default_destruct.rvmat"
			};
		};
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
	};		
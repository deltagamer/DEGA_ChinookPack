	class DEGA_US_CH47F_Unarmed: Helicopter_Base_H
	{
		author = "Deltagamer";
		model = "\chinookpack\Chinook_USA\US_CH_47F_UNARMED.p3d";
		picture = "\chinookpack\data\UI\Picture_ch47f_CA.paa";
		icon = "\chinookpack\data\UI\Icon_ch47f_CA.paa";
		mapSize = 24;
		scope = 2;
		
		driveOnComponent[] = {"Wheels"};
		
        AGM_FastRoping = 1;
        AGM_FastRoping_Positions[] = {{-0.6, -7.7, -1}, {0.6, -7.7, -1}};	

		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";		
		
		maxSpeed = 295;
		maxFordingDepth = 1;
		expansion = 1;
		nameSound = "veh_helicopter";
		displayName = "US CH-47F (Unarmed)";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "CH47_CH_47F";
		accuracy = 0.5;
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.0;
		armor = 30;
		damageResistance = 0.001;
		destrType = "DestructWreck";
		simulation = "HelicopterX";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;
		
        /*
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties {
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
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		driverAction = "CH47_Pilot_EP1";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";
		
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		
		cargoAction[] = {"CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1"};
		cargoIsCoDriver[] = {"true", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false"};
		
		transportSoldier = 22;
		transportMaxBackpacks = 10;
		
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = "2 + 8 + 4";
		IncomingMissileDetectionSystem = 16;
		
		radarType = 4;
		enableManualFire = 0;
		
		threat[] = {0.8,1,0.6};
		
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		
		helmetMountedDisplay = 0;
		cargoCanEject = 1;
		driverCanEject = 0;		
		
		class MFD{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 28;
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
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				isCopilot = 1;
				weapons[] = {};
				magazines[] = {};
				body = "Turret3";
				animationSourceBody="Turret_3";
				gun = "";
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
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
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment1";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Side)";	/// name of the position in the Action menu
				proxyIndex 					= 24;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 20;					/// what is the left-most possible turn of the turret
				minTurn 					= -80;					/// what is the right-most possible turn of the turret
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
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment1";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Side)";	/// name of the position in the Action menu
				proxyIndex 					= 23;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 80;					/// what is the left-most possible turn of the turret
				minTurn 					= -20;					/// what is the right-most possible turn of the turret
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
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_03: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment1";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Door)";	/// name of the position in the Action menu
				proxyIndex 					= 25;					/// what cargo proxy is used according to index in the model
				maxElev 					= 25;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 40;					/// what is the left-most possible turn of the turret
				minTurn 					= -40;					/// what is the right-most possible turn of the turret
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
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_04: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "Compartment1";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Door)";	/// name of the position in the Action menu
				proxyIndex 					= 26;					/// what cargo proxy is used according to index in the model
				maxElev 					= 40;					/// what is the highest possible elevation of the turret
				minElev 					= -70;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 40;					/// what is the left-most possible turn of the turret
				minTurn 					= -40;					/// what is the right-most possible turn of the turret
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
				disableSoundAttenuation=1;
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
				weapon = "M134_minigun";
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
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName = "<t color='#FF0000'>Open Ramp</t>";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" < 1 and (alive this);";
				statement = "this animate [""Ramp"", 1];";
				onlyforplayer = 1;
				priority=9;				
			};
			class CloseCargoDoor
			{
				displayName = "<t color='#FF0000'>Close Ramp</t>";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" > 0 and (alive this);";
				statement = "this animate [""Ramp"", 0];";
				onlyforplayer = 1;
				priority=9;				
			};
			class LevelCargoDoor {
				displayName = "<t color='#FF0000'>Level Ramp</t>";
				position = "actions";
				radius = 12;
				condition = "((this animationPhase ""Ramp"" < 0.3) || (this animationPhase ""Ramp"" > 0.5)) && ((this animationPhase ""Ramp"" == 0 || this animationPhase ""Ramp"" == 1))";
				statement = "this animate[""Ramp"",0.640]";
				onlyforplayer = 0;
				priority = 8;
				showWindow = 0;
			};			
		};
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 1;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.5;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.5;
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
		{
			class Engine
			{
				sound[] = {"chinookpack\data\sounds\CH47_engine_high_ext",1.0,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"chinookpack\data\sounds\CH47_rotor_ext",3.1622777,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"chinookpack\data\sounds\CH47_rotor_forsage_ext",3.1622777,1.0,1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"chinookpack\data\sounds\CH47_engine_high_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"chinookpack\data\sounds\CH47_rotor_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"chinookpack\data\sounds\CH47_rotor_forsage_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
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
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class WhiteBlinking {
				name = "cerveny pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				intensity = 75;
				ambient[] = {0.09, 0.015, 0.01};
				blinking = 1;
				blinkingPattern[] = {0.2, 1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
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
			mat[] = {"chinookpack\data\ch47_1.rvmat","chinookpack\data\ch47_1_damage.rvmat","chinookpack\data\ch47_1_destruct.rvmat","chinookpack\data\ch47_2.rvmat","chinookpack\data\ch47_2_damage.rvmat","chinookpack\data\ch47_2_destruct.rvmat","chinookpack\data\ch47_1_int.rvmat","chinookpack\data\ch47_1_int.rvmat","chinookpack\data\ch47_1_int_destruct.rvmat","chinookpack\data\ch47_2_int.rvmat","chinookpack\data\ch47_2_int.rvmat","chinookpack\data\ch47_2_int_destruct.rvmat","chinookpack\data\ch47_sklo_in.rvmat","chinookpack\data\ch47_sklo_in_damage.rvmat","chinookpack\data\ch47_sklo_in_damage.rvmat","chinookpack\data\ch47_sklo.rvmat","chinookpack\data\ch47_sklo_damage.rvmat","chinookpack\data\ch47_sklo_damage.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","chinookpack\data\default_destruct.rvmat"};
		};
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
		driverCanSee=31;
		gunnerCanSee=31;
	};	
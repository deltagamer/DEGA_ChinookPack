
	//Parachutes
	class DEGA_T10_Parachute: Helicopter
	{
		scope = 1;
		scopeArsenal = 0;
        side = 1;
        faction = "BLU_F";
 		vehicleClass = "CH47_CH_47F";       		
        crew = "B_Soldier_F";	
	    //extCameraPosition[] = {0,-20,-15};
		mapSize=20;
		camouflage=2;		
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_air_parachute_s"
				};
				speechPlural[]=
				{
					"veh_air_parachute_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_air_parachute_s";
		textPlural="$STR_A3_nameSound_veh_air_parachute_p";
		nameSound="veh_air_parachute_s";
		author="Deltagamer";
		_generalMacro="NonSteerable_Parachute_F";
		radarType = 0;
		openingTime=5;
		class EventHandlers: DefaultEventhandlers
		{
		    init = "_this call DEGA_fnc_parachuteLanding;";		
		};			
		class TransportItems
		{
		};
		//animationOpen = "data\Anim\Para_Medium_Start.rtm";
		//animationDrop = "data\Anim\Para_Medium_Landing.rtm";
		animationOpen="A3\Air_F_Beta\Parachute_01\Data\Anim\para_opening.rtm";
		animationDrop="A3\Air_F_Beta\Parachute_01\Data\Anim\para_landing.rtm";		
		displayName="T10 Parachute";
		getOutAction="GetOutPara";
		driverCanEject = 0;
		audible=0;
		castDriverShadow=1;
		driverAction="chute_pos";		
		model="\data\Static_Parachute\T10.p3d";
		Icon="\data\UI\icomap_Para_CA.paa";
		picture = "\data\UI\Para_CA.paa";
		simulation="parachute";		
/*		soundEnviron[]=
		{
			"A3\sounds_f\dummysound",
			0.31622776,
			1,
			80
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.31622776,
			1,
			20
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.31622776,
			1,
			20
		};
		soundCrash[]=
		{
			"A3\sounds_f\dummysound",
			0.031622775,
			1,
			50
		};
		soundLandCrash[]=
		{
			"A3\sounds_f\dummysound",
			0.031622775,
			1,
			50
		};
		soundWaterCrash[]=
		{
			"A3\sounds_f\dummysound",
			3.1622777,
			1,
			80
		};*/
		damageEffect="";
		class ViewPilot
		{
			initFov=0.69999999;
			minFov=0.25;
			maxFov=1.1;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		class Turrets
		{
		};
		class Reflectors
		{
		};
		enableGPS=0;
		threat[]={0,0,0};		
	};
	class DEGA_T10_Parachute_backpack: B_Parachute
	{
		author="Deltagamer";
		scope=2;
		displayName="T10 Parachute Bag";
		ParachuteClass="DEGA_T10_Parachute";
		maximumLoad=0;
		mass=100;		
	};	
	class Thing;
	class backpack_holder: Thing
	{
		scope=1;
		side=-1;
		model="data\Static_Parachute\backpack_holder.p3d";
		icon="";
		displayName="";
		nameSound="";
		destrType="DestructNo";
		simulation="thingx";
		mapSize=0;
		accuracy=0;
		armor=5;
		weight = 200;
	};	
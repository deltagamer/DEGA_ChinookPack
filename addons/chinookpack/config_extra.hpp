
class CfgPatches
{
	class chinookpack
	{
		units[] = 
		{
		    "DEGA_BAF_CH47F_Unarmed",
		    "DEGA_BAF_CH47F_M134",
		    "DEGA_BAF_CH47F_M134_M240",
		    "DEGA_US_CH47F_Unarmed",
		    "DEGA_US_CH47F_M134",
		    "DEGA_US_CH47F_M134_M240", 
		    "DEGA_T10_Parachute",
		    "DEGA_T10_Parachute_backpack"
		};
		weapons[] = {};
		requiredVersion = 1.7.5;
		requiredAddons[] = 
		{
		    "A3_Air_F", 			
		    "A3_Characters_F",
			"A3_Weapons_F",
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Air_F_Beta"
		};
	};
};
class CfgVehicleClasses
{
	class CH47_CH_47F
	{
		displayName = "Chinook Pack";
	};
};	
class Mode_SemiAuto;
class Mode_Burst;
class DefaultEventhandlers;
class CfgWeapons
{
    class M134_minigun;
    class MGun;
    class M134_minigun_1: M134_minigun
    {
        displayName = "M134 Minigun";
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "machinegun1";
                positionName = "muzzle_1";
                directionName = "chamber_1";
            };
            class effect1
            {
                positionName = "eject_1"; //I added these to the model (just 1 memory point)
                directionName = "eject_1_dir"; //I added this as well
                effectName = "MachineGunCartridge";
            };
        };
        muzzlePos = "chamber_1";
        muzzleEnd = "muzzle_1";
        cartridgePos = "eject_1";
        cartridgeVel = "eject_1_dir";
        selectionFireAnim = "zasleh";
    };
    class M134_minigun_2: M134_minigun
    {
		displayName = "M134 Minigun";	
        class GunParticles
        {
            class SecondEffect
            {
                effectName = "machinegun1";
                positionName = "muzzle_2";
                directionName = "chamber_2";
            };
            class effect2
            {
                positionName = "eject_2";
                directionName = "eject_2_dir";
                effectName = "MachineGunCartridge";
            };
        };
        muzzlePos = "chamber_2";
        muzzleEnd = "muzzle_2";
        cartridgePos = "eject_2";
        cartridgeVel = "eject_2_dir";
        selectionFireAnim = "zasleh_1";		
    };
    class M240_delta_chinook: MGun
    {
        scope=1;
        displayName="M240";
        soundContinuous="false";
        aiDispersionCoefY=21;
        aiDispersionCoefX=21;
        magazines[]=
        {
            "100Rnd_762x51_M240_delta_chinook"
        };
        magazineReloadTime=3;
        canLock=0;
        modes[]=
        {
            "manual",
            "close",
            "short",
            "medium",
            "far"
        };
        class manual: MGun
        {
            displayName="M240";
            autoFire=1;
            reloadTime=0.079999998;
            dispersion=0.002;
            showToPlayer=1;
            burst=1;
            aiRateOfFire=0.5;
            aiRateOfFireDistance=50;
            minRange=1;
            minRangeProbab=0.0099999998;
            midRange=2;
            midRangeProbab=0.0099999998;
            maxRange=3;
            maxRangeProbab=0.0099999998;
            begin1[] = {"chinookpack\data\Sounds\M240_s1",5,1,130};
            begin2[] = {"chinookpack\data\Sounds\M240_s2",5,1,130};
            begin3[] = {"chinookpack\data\Sounds\M240_s3",5,1,130};
            begin4[] = {"chinookpack\data\Sounds\M240_s4",5,1,130};
            soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
        };
        class close: manual
        {
            showToPlayer="false";
            soundBurst="false";
            burst=10;
            aiRateOfFire=0.5;
            aiRateOfFireDistance=50;
            minRange=0;
            minRangeProbab=0.050000001;
            midRange=100;
            midRangeProbab=0.57999998;
            maxRange=200;
            maxRangeProbab=0.039999999;
        };
        class short: close
        {
            burst=8;
            aiRateOfFire=2;
            aiRateOfFireDistance=300;
            minRange=50;
            minRangeProbab=0.050000001;
            midRange=200;
            midRangeProbab=0.57999998;
            maxRange=400;
            maxRangeProbab=0.039999999;
        };
        class medium: close
        {
            burst=4;
            aiRateOfFire=3;
            aiRateOfFireDistance=600;
            minRange=300;
            minRangeProbab=0.050000001;
            midRange=400;
            midRangeProbab=0.57999998;
            maxRange=600;
            maxRangeProbab=0.039999999;
        };
        class far: close
        {
            burst=5;
            aiRateOfFire=5;
            aiRateOfFireDistance=1000;
            minRange=500;
            minRangeProbab=0.050000001;
            midRange=600;
            midRangeProbab=0.40000001;
            maxRange=800;
            maxRangeProbab=0.0099999998;
        };
    };
    class M240_delta_chinook_2: M240_delta_chinook {};
};
class CfgMagazines
{
	class VehicleMagazine;
    class 100Rnd_762x51_M240_delta_chinook: VehicleMagazine
    {
        scope=1;
        displayName="100Rnd 7.62mm M240";
        count=100;
        ammo="B_762x51_Ball";
        initSpeed=900;
        tracersEvery=4;
        lastRoundsTracer=4;
        nameSound="mgun";
        //descriptionShort="7.62mm";
    };
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CH47_Cargo_EP1 = "CH47_Cargo_EP1";
		CH47_Cargo01_EP1 = "CH47_Cargo01_EP1";
		CH47_Cargo02_EP1 = "CH47_Cargo02_EP1";
		CH47_Cargo03_EP1 = "CH47_Cargo03_EP1";
		CH47_Gunner_EP1 = "CH47_Gunner_EP1";
		CH47_Gunner01_EP1 = "CH47_Gunner01_EP1";
		CH47_Pilot_EP1 = "CH47_Pilot_EP1";			
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;	
		class CH47_Cargo_EP1: Crew
		{
			file = "chinookpack\data\anim\CH47_Cargo";
			interpolateTo[] = {"CH47_KIA_Cargo_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\data\anim\CH47_KIA_Cargo";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Cargo01_EP1: Crew
		{
			file = "chinookpack\data\anim\CH47_Cargo01";
			interpolateTo[] = {"CH47_KIA_Cargo01_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\data\anim\CH47_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Cargo02_EP1: Crew
		{
			file = "chinookpack\data\anim\CH47_Cargo02";
			interpolateTo[] = {"CH47_KIA_Cargo02_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\data\anim\CH47_KIA_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Cargo03_EP1: Crew
		{
			file = "chinookpack\data\anim\CH47_Cargo03";
			interpolateTo[] = {"CH47_KIA_Cargo03_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\data\anim\CH47_KIA_Cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Pilot_EP1: Crew
		{
			file = "chinookpack\data\anim\CH47_Pilot";
			connectTo[] = {"CH47_KIA_Pilot_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\data\anim\CH47_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CH47_Gunner_EP1: Crew
		{
			file = "chinookpack\data\anim\CH47_Gunner02";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",	1};
			speed = 1e+010;
		};
		class CH47_KIA_Gunner_EP1: DefaultDie
		{
			actions="DeadActions";
			file="chinookpack\data\anim\CH47_KIA_Gunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class CH47_Gunner01_EP1: Crew
		{
			file = "chinookpack\data\anim\CH47_Gunner";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",	1};
			speed = 1e+010;
		};
		class CH47_KIA_Gunner01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\data\anim\CH47_KIA_Gunner01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};	
	};
};
{config.cpp}
class CfgFunctions {
   class UK3CB_BAF_Chinook {
      class UK3CB_BAF_Chinook {
         file = "\UK3CB_BAF_Vehicles_Chinook\Functions";
         class canDeployStaticLine;
         class deployStaticLine;
      };
   };
class CfgVehicle {
...
       class UserActions: UserActions
       {
          class DeployStaticLine
          {
            displayName = "<t color='#00ff00'>Deploy using static line</t>";
             displayNameDefault = "";
             position = "";
             radius = 5.0;
             onlyForplayer = true;
             statement = "this call UK3CB_BAF_Vehicles_Chinook_fnc_deployStaticLine";
             condition = "this call UK3CB_BAF_Vehicles_Chinook_fnc_canDeployStaticLine";
          };   
        };
};
      
{canDeployStaticLine.sqf}
   // Deploy static line
   private ["_vehicle","_canDeploy","_heightAboveGround"];
   _vehicle = _this;
   
   _canDeploy = false;
   if ((_vehicle alive) AND (player alive) AND (player in _vehicle)) then {
      _heightAboveGround = (getPosATL _vehicle) select 2;
      if (_heightAboveGround > 120) then {
         _canDeploy = true;
      };
   };
   _canDeploy
   
{deployStaticLine.sqf}
_this spawn {  // Only need the spawn if you include the sleep statement
   private ["_vehicle","_pilot","_para"];
   _vehicle = _this;
   _pilot = driver _vehicle;
   
   _vehicle allowDamage false;
   _pilot allowDamage false;  // Are you sure you need this?
   player allowDamage false;

   player action ["eject", _vehicle];
   sleep 0.5; //Suggest a small sleep so player moves free of helicopter
   
   _para = "DEGA_T10_Parachute" createVehicle (position player);
   //_para setPos (getPos player); // I don't think this is required
   player moveInDriver _para;

   _vehicle allowDamage true;
   _pilot allowDamage true;
   player allowDamage true;
};
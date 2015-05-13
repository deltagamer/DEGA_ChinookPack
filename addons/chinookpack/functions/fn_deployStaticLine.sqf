/*
Author: Deltagamer, Alexander (ImperialAlex), Lifetap

Description:
Ejects players out of aircraft and deploys t10 parachute, hanging the backpack below them via rope.

*/
private ["_vehicle","_caller"];
_vehicle = [_this,0,objNull,[objNull]] call bis_fnc_param;
_caller  = [_this,1,objNull,[objNull]] call bis_fnc_param;


private ["_hadBackpack","_class","_magazines","_weapons","_items"];
_hadBackpack = false;
_class = "";
_magazines = [];
_weapons = [];
_items = [];

/* HANDLE CURRENT BACKPACK */
if (!isNull (unitBackpack _caller)) then {
    private ["_pack"];
    _pack      = unitBackpack _caller;
    _class     = typeOf _pack;
    _magazines = getMagazineCargo _pack;
    _weapons   = getWeaponCargo _pack;
    _items     = getItemCargo _pack;
    _hadBackpack = true; 
    removeBackPack _caller;
};

/* PREPARE FOR JUMP */
_caller addBackPack "DEGA_T10_Parachute_backpack";
_caller allowDamage false;  
moveOut _caller;
_caller setdir ((getDir _vehicle) - 180);
_caller attachTo [_vehicle,[0,0,0],"para_eject"];

/* JUMP */
[_caller,_hadBackpack,_class,_weapons,_magazines,_items] spawn {
    private ["_caller","_hadBackpack","_class","_magazines","_weapons","_items"]; 
    _caller = _this select 0;
    _hadBackpack = _this select 1;
    _class = _this select 2;
    _magazines = _this select 3;
    _weapons = _this select 4;
    _items = _this select 5;
     
    /* actual jump */
    detach _caller;

    /* wait 1 sec */
    sleep 1;   

    /* open parachute */
    private ["_pos2","_vUp","_vDir","_vel","_chute"];
    _pos2 = getPosASL _caller;
    _vUp = vectorUp _caller;
    _vDir = vectorDir _caller;
    _vel = velocity _caller;
    _caller action ["OpenParachute",_caller];
    _chute = vehicle _caller;     
    _chute allowDamage false;
    _chute setVectorDirAndUp [_vDir, _vUp];
    _chute setVelocity _vel;
    _caller setVelocity _vel;
    _caller allowDamage true;
    _chute allowDamage true;

    /* wait until parachute is deployed */     
    waitUntil {animationState _caller == "chute_pos"};

    /* create the groundholder for the packpack */
    private ["_packHolder","_lower_line"];
    _packHolder = objNull;
    _lower_line = objNull;    
    if (_hadBackpack) then {
        _packHolder = createVehicle ["groundWeaponHolder", [0,0,0], [], 0, "can_collide"];
        _packHolder addBackpackCargoGlobal [_class, 1];
        _lower_line = "backpack_holder" createVehicle (getpos _caller);
        _lower_line attachTo [vehicle _caller,[0,0,0],"zamerny"];
        _packHolder attachTo [vehicle _caller,[-0.1,0.45,-11.4]]; 
        _packHolder setVectorDirAndUp [[0,0,-1],[0,1,0]];
    };

    /* wait until we're close to the ground */
    waitUntil {(getPosATL _caller select 2) < 1.5};
    _chute allowDamage false;
    _caller allowDamage false;

    if (_hadBackpack) then {
        deleteVehicle _lower_line;
        deleteVehicle _packHolder;

        /* re-add equipment */
        _caller addBackpack _class; 
        clearAllItemsFromBackpack _caller;
        for "_i" from 0 to (count (_magazines select 0) - 1) do {
            (unitBackpack _caller) addMagazineCargoGlobal [(_magazines select 0) select _i,(_magazines select 1) select _i];
        };
        for "_i" from 0 to (count (_weapons select 0) - 1) do {
            (unitBackpack _caller) addWeaponCargoGlobal [(_weapons select 0) select _i,(_weapons select 1) select _i];
        };
        for "_i" from 0 to (count (_items select 0) - 1) do {
            (unitBackpack _caller) addItemCargoGlobal [(_items select 0) select _i,(_items select 1) select _i];
        };
    }; 

    private ["_pos_ground"];
    moveOut _caller;
    _pos_ground = getpos _caller;
    _caller setpos _pos_ground;

    waitUntil {isTouchingGround _caller};
    deletevehicle _chute;
    _caller allowDamage true;

};

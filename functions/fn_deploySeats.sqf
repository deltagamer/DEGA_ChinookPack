/*
	Author: Deltagamer, Alexander (ImperialAlex)

	Description:
	Deploy/undeploy seats/etc with animation + locking 
	
	Parameter(s):
	0: OBJECT - vehicle 
	1: ARRAY of ARRAY  - inputs to animate, e.g. [[selection1,phase1],[selection2,phase2]]
	2: BOOL - lock state (0=unlock,1=lock)
	3: ARRAY of NUMBER - cargo indices to lock/unlock
	4: ARRAY of NUMBER - turret indices to lock/unlock

	Returns:
	NOTHING
*/

private ["_vehicle","_animarray","_lockstate","_seatindices","_turretindices"];
_vehicle = [_this,0,objNull,[objNull]] call bis_fnc_param;
_animarray = [_this,1,[],[[]]] call bis_fnc_param;
_lockstate = [_this,2,true,[true]] call bis_fnc_param;
_cargoindices = [_this,3,[],[[]]] call bis_fnc_param;
_turretindices = [_this,4,[],[[]]] call bis_fnc_param;

{
	_vehicle animate _x;
} forEach _animarray;

{
	_vehicle lockCargo [_x,_lockstate];
} forEach _cargoindices;

{
    _vehicle lockTurret [[_x],_lockstate];
} forEach _turretindices;
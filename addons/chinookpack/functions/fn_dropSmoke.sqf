/*
	Author: Deltagamer, Alexander (ImperialAlex)

	Description:
	Allows pilots/co-pilots to deploy smoke grenades

	Parameter(s):
	0: OBJECT - vehicle
	1: STRING - memorypoint to drop smoke from
	Returns:
	NOTHING
*/

private ["_vehicle","_memorypoint","_smoke"];
_vehicle 	= [_this,0,objNull,[objNull]] call bis_fnc_param;
_memorypoint = [_this,1,"",[""]] call bis_fnc_param;

_smoke = createvehicle ["SmokeShellGreen", [1,1,1], [], 0, ""];
_smoke attachTo [_vehicle, [0,0,0], _memorypoint];
sleep 1;
detach _smoke;

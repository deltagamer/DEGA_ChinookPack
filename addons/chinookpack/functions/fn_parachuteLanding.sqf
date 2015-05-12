/*
	Author: Deltagamer, Alexander (ImperialAlex), Lifetap

	Description:
	Checks if parachute is below a set altitude and deletes the vehicle, allows for smoother dismount.

*/

private ["_Para","_heightAboveGround"];
   
if (((vehicle player) isKindOf "DEGA_T10_Parachute")) then {
   _heightAboveGround = (getPosATL _vehicle) select 2;
   if (_heightAboveGround < 0.725) then {
   _Para = nearestObjects [player, ["DEGA_T10_Parachute"], 2];
   {
       deletevehicle _x;
   } count _Para;
   player switchMove "AmovPercMevaSrasWrflDf_AmovPknlMstpSrasWrflDnon";   
   };
};

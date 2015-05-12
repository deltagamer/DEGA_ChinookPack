_target = _this select 0;
_caller = _this select 1;

_caller allowdamage false;
_caller action ["eject",vehicle _caller];
sleep 1;
_para = "DEGA_T10_Parachute" createVehicle (position _caller);
_para setPos (getPos _caller);
_caller moveindriver _para;
sleep 2;
_caller allowdamage true;
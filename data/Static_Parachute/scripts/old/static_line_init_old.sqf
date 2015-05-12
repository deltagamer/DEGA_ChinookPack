_target = _this select 0;
_caller = _this select 1;

_target addAction ["<t color='#2E9AFE'>Static Line Paradrop</t>", "chinookpack\data\Static_Parachute\scripts\static_line_eject.sqf",[],0,true,true,"","(_target getCargoIndex _this) >= 0 && ((((getPosATL _target) select 2) >150)) && (_target animationPhase 'Ramp' > 0.43)"];
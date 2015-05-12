_target = _this select 0;
_caller = _this select 1;

_target addAction ["<t color='#2E9AFE'>Static Line Paradrop</t>", "_this call DEGA_fnc_deployStaticLine",[],0,true,true,"","_target call DEGA_fnc_canDeployStaticLine"];
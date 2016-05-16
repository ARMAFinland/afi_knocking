

fn_bridge_knockOnTank = {
	_tank = _this select 0;
	[[_tank],"fn_bridge_knockedOn"] call BIS_fnc_MP;
	[_tank, "bridge_kn_knockMetal"] call CBA_fnc_globalSay3d;
	hint "You knock on the vehicle";
};

fn_bridge_knockedOn = {
	_tank = _this select 0;
	if (vehicle player == _tank) then {
		playSound "bridge_kn_knockMetalInside";
		hint "Someone is knocking on the vehicle";
	};
};
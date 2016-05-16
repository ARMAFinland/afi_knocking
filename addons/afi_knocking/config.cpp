class CfgPatches {
	class BRIDGE_ArmEn_Knocking {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_interaction"};
	};
};
class CfgFunctions {
	class BRIDGE_KN_FN {
		class functions {
			file = "\bridge_knocking\functions";
			class init {
				postInit = 1;
			};
		};
	};
};
class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class BRIDGE_ArmEn_Knock {
					displayName = "Knock";
					condition = "vehicle player == player";
					statement = "_this call fn_bridge_knockOnTank";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\bridge_knocking\ui\knock.paa";
				};
			};
		};
	};
	class Car: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class BRIDGE_ArmEn_Knock {
					displayName = "Knock";
					condition = "vehicle player == player";
					statement = "_this call fn_bridge_knockOnTank";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\bridge_knocking\ui\knock.paa";
				};
			};
		};
	};
	class Helicopter: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class BRIDGE_ArmEn_Knock {
					displayName = "Knock";
					condition = "vehicle player == player";
					statement = "_this call fn_bridge_knockOnTank";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\bridge_knocking\ui\knock.paa";
				};
			};
		};
	};
	class Plane: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class BRIDGE_ArmEn_Knock {
					displayName = "Knock";
					condition = "vehicle player == player";
					statement = "_this call fn_bridge_knockOnTank";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\bridge_knocking\ui\knock.paa";
				};
			};
		};
	};
};
class CfgSounds {
	sounds[] = {"bridge_kn_knockMetal"};
	class bridge_kn_knockMetal {
		name = "bridge_kn_knockMetal";
		sound[] = {"\bridge_knocking\sounds\knockMetal.ogg",3,1};
		titles[] = {};
	};
	class bridge_kn_knockMetalInside {
		name = "bridge_kn_knockMetalInside";
		sound[] = {"\bridge_knocking\sounds\knockMetal.ogg",5,1};
		titles[] = {};
	};
};

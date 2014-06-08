class CfgPatches
{
	class server_rack {
		units[] = {Rack};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author[] = {"capt. Darling"};
		authorUrl = "https://github.com/Petethegoat";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};
	};
};

class CfgVehicleClasses {

	class TUT_WallsVehicleClass {
		displayName = "Jasper";
	};
};

class CfgVehicles
{
	class Static;
	
	class server_rack : Static
	{
		scope = 2;
		model = "\server_rack\server_rack.p3d";
		displayName = "server_rack";
		mapSize = 0.2;
		vehicleClass = "TUT_WallsVehicleClass";
		destrType = "DestructNo";
	};
};
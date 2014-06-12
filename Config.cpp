class CfgPatches
{
	class server_rack {
		units[] = {Rack};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author = "capt. Darling";
		mail = "jd.krijgsman@gmail.com";
		authorUrl = "https://github.com/Petethegoat";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};
	};
};

class CfgVehicleClasses {

	class CAPTD_VehicleClass {
		displayName = "Jasper";
	};
};

class CfgSFX
{
	class server_noise
	{
		name="server_noise";
		sounds[]={"server_noise"};
		// soundName[] = {"path to file", volume, pitch, max sound reach distance, probability of being played, min delay, average delay, maximum delay after the sound};
		server_noise[]={"\server_rack\sound\noise.ogg",10,1,100,1,0,0,0};
		//empty[] = {not used, not used, not used, not used, not used, minimum pause, average pause, maximum pause};
		empty[]={"","","","","",0,0,0};
	};
};

class CfgVehicles
{
	class All {};
	class Static: All {};
	
	class server_rack : Static
	{
		author = "capt. Darling";
		scope = 2;
		vehicleClass = "CAPTD_VehicleClass";
		icon = "\server_rack\server_rack_icon.paa";
		mapSize = 0.025;
		displayName = "19"" server rack2";
		model = "\server_rack\models\server_rack.p3d";
	
		armor = 3;
	
		destrType = "DestructNo";
		
		class EventHandlers
		{
			init = "(_this select 0) execVM '\server_rack\init.sqf'";
		};
		
		class UserActions
		{
			class TakeSensor
			{
				displayNameDefault = "Stop server";
				priority = 3;
				showWindw = 1;
				hideOnUse = 1;
				displayName = "Stop server";
				radius= 5;
				position = "camera";
				onlyForPlayer = 1;
				condition = "(alive this)";
				statement = "deleteVehicle _trigger";
			};
		};
	};
};
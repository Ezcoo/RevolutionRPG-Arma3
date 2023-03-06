daylight_logLevel = 0;

[] spawn {

	waitUntil {!isNull findDisplay 12};

};

private _initGPSdone = [] execVM "functions\gpsRouting\init.sqf";

waitUntil {scriptDone _initGPSdone};

player linkItem "ItemGPS";
private _success = openGPS true;

   [missionNameSpace,"gps_functions_compiled",{
     player addAction ["Open GPS",gps_menu_fnc_loadGPSMenu];
   }] call bis_fnc_addScriptedEventHandler;

sleep 0.2;
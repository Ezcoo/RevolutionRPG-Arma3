#ifdef DEBUG_ENABLED_FULL
allowFunctionsRecompile = 1;
allowFunctionsLog = 1;
#endif

class CfgFunctions
{

	class REVOLUTION
	{

		class cfg
		{
		};

		class core
		{
			class helloWorld { file = "functions\core\fn_helloWorld.sqf"; };
		};

		class debug
		{
			class logContent { file = "functions\debug\fn_logContent.sqf"; };
		};

		class gpsRouting
		{
			class compile { file = "functions\gpsRouting\gps\fn_compile.sqf"; };
			class deletePathHelpers { file = "functions\gpsRouting\gps\fn_deletePathHelpers.sqf"; };
			class getConfigSetting { file = "functions\gpsRouting\gps\fn_getConfigSetting.sqf"; };
			class getSetting { file = "functions\gpsRouting\gps\fn_getSetting.sqf"; };
			class killGPS { file = "functions\gpsRouting\gps\fn_killGPS.sqf"; };
			class localize { file = "functions\gpsRouting\gps\fn_localize.sqf"; };
			class log { file = "functions\gpsRouting\gps\fn_log.sqf"; };
			class main { file = "functions\gpsRouting\gps\fn_main.sqf"; };
			class refreshCache { file = "functions\gpsRouting\gps\fn_refreshCache.sqf"; };
			class setSetting { file = "functions\gpsRouting\gps\fn_setSetting.sqf"; };
			class tracking { file = "functions\gpsRouting\gps\fn_tracking.sqf"; };
			class compile { file = "functions\gpsRouting\gps_core\fn_compile.sqf"; };
			class generateNodePath { file = "functions\gpsRouting\gps_core\fn_generateNodePath.sqf"; };
			class generatePathHelpers { file = "functions\gpsRouting\gps_core\fn_generatePathHelpers.sqf"; };
			class getAllRoads { file = "functions\gpsRouting\gps_core\fn_getAllRoads.sqf"; };
			class insertFakeNode { file = "functions\gpsRouting\gps_core\fn_insertFakeNode.sqf"; };
			class isHighway { file = "functions\gpsRouting\gps_core\fn_isHighway.sqf"; };
			class log { file = "functions\gpsRouting\gps_core\fn_log.sqf"; };
			class mapNodeValues { file = "functions\gpsRouting\gps_core\fn_mapNodeValues.sqf"; };
			class mapRoutes { file = "functions\gpsRouting\gps_core\fn_mapRoutes.sqf"; };
			class roadsConnectedTo { file = "functions\gpsRouting\gps_core\fn_roadsConnectedTo.sqf"; };
			class AStar { file = "functions\gpsRouting\gps_core\algorithms\AStar\fn_AStar.sqf"; };
			class RDP { file = "functions\gpsRouting\gps_core\algorithms\RDP\fn_RDP.sqf"; };
			class arePolygonsOverlapping { file = "functions\gpsRouting\gps_core\misc\fn_arePolygonsOverlapping.sqf"; };
			class callScriptedEventHandlerReturn { file = "functions\gpsRouting\gps_core\misc\fn_callScriptedEventHandlerReturn.sqf"; };
			class createMarker { file = "functions\gpsRouting\gps_core\misc\fn_createMarker.sqf"; };
			class getRoadBoundingBoxWorld { file = "functions\gpsRouting\gps_core\misc\fn_getRoadBoundingBoxWorld.sqf"; };
			class getRoadDir { file = "functions\gpsRouting\gps_core\misc\fn_getRoadDir.sqf"; };
			class isHighway { file = "functions\gpsRouting\gps_core\misc\fn_isHighway.sqf"; };
			class pointLineDist { file = "functions\gpsRouting\gps_core\misc\fn_pointLineDist.sqf"; };
			class create { file = "functions\gpsRouting\gps_core\misc\hashTable\fn_create.sqf"; };
			class deleteNamespaces { file = "functions\gpsRouting\gps_core\misc\hashTable\fn_deleteNamespaces.sqf"; };
			class exists { file = "functions\gpsRouting\gps_core\misc\hashTable\fn_exists.sqf"; };
			class find { file = "functions\gpsRouting\gps_core\misc\hashTable\fn_find.sqf"; };
			class set { file = "functions\gpsRouting\gps_core\misc\hashTable\fn_set.sqf"; };
			class get { file = "functions\gpsRouting\gps_core\misc\PriorityQueue\fn_get.sqf"; };
			class insert { file = "functions\gpsRouting\gps_core\misc\PriorityQueue\fn_insert.sqf"; };
			class get { file = "functions\gpsRouting\gps_core\misc\Queue\fn_get.sqf"; };
			class insert { file = "functions\gpsRouting\gps_core\misc\Queue\fn_insert.sqf"; };
			class GPSHelp { file = "functions\gpsRouting\menu\gps\fn_GPSHelp.sqf"; };
			class loadControlsMenu { file = "functions\gpsRouting\menu\gps\fn_loadControlsMenu.sqf"; };
			class loadGPSMenu { file = "functions\gpsRouting\menu\gps\fn_loadGPSMenu.sqf"; };
			class loadNavMenu { file = "functions\gpsRouting\menu\gps\fn_loadNavMenu.sqf"; };
			class loadOptionsMenu { file = "functions\gpsRouting\menu\gps\fn_loadOptionsMenu.sqf"; };
			class closeHud { file = "functions\gpsRouting\menu\hud\fn_closeHud.sqf"; };
			class drawPath { file = "functions\gpsRouting\menu\hud\fn_drawPath.sqf"; };
			class loadHud { file = "functions\gpsRouting\menu\hud\fn_loadHud.sqf"; };
			class openHud { file = "functions\gpsRouting\menu\hud\fn_openHud.sqf"; };
			class setGPSInfo { file = "functions\gpsRouting\menu\hud\fn_setGPSInfo.sqf"; };
			class addQuickNavOption { file = "functions\gpsRouting\menu\quickNav\fn_addQuickNavOption.sqf"; };
			class handleQuickNavActions { file = "functions\gpsRouting\menu\quickNav\fn_handleQuickNavActions.sqf"; };
			class loadQuickNav { file = "functions\gpsRouting\menu\quickNav\fn_loadQuickNav.sqf"; };
			class quickNavCreate { file = "functions\gpsRouting\menu\quickNav\fn_quickNavCreate.sqf"; };
			class quickNavExecuteCurrentOption { file = "functions\gpsRouting\menu\quickNav\fn_quickNavExecuteCurrentOption.sqf"; };
			class quickNavNextOption { file = "functions\gpsRouting\menu\quickNav\fn_quickNavNextOption.sqf"; };
			class distanceStr { file = "functions\gpsRouting\misc\fn_distanceStr.sqf"; };
			class metersToKilometers { file = "functions\gpsRouting\misc\fn_metersToKilometers.sqf"; };
			class midPoint { file = "functions\gpsRouting\misc\fn_midPoint.sqf"; };
			class nearestLocation { file = "functions\gpsRouting\misc\fn_nearestLocation.sqf"; };
			class nearestRoadInArray { file = "functions\gpsRouting\misc\fn_nearestRoadInArray.sqf"; };
			class colorPick { file = "functions\gpsRouting\misc\ColorPicker\fn_colorPick.sqf"; };
			class editDialog { file = "functions\gpsRouting\misc\EditDialog\fn_editDialog.sqf"; };
			class chooseKey { file = "functions\gpsRouting\misc\KeyChoice\fn_chooseKey.sqf"; };
		};

	};

};
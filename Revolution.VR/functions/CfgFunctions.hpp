#ifdef DEBUG_ENABLED_FULL
allowFunctionsRecompile = 1;
allowFunctionsLog = 1;
#endif

class CfgFunctions
{

	class REVOLUTION
	{

		class core
		{
			class helloWorld { file = "functions\core\fn_helloWorld.sqf"; };
			class debug_inheritsTree { file = "functions\core\debug\fn_inheritsTree.sqf"; };
			class debug_logContent { file = "functions\core\debug\fn_logContent.sqf"; };
			class gpsRouting_compile { file = "functions\core\gpsRouting\gps\fn_compile.sqf"; };
			class gpsRouting_deletePathHelpers { file = "functions\core\gpsRouting\gps\fn_deletePathHelpers.sqf"; };
			class gpsRouting_getConfigSetting { file = "functions\core\gpsRouting\gps\fn_getConfigSetting.sqf"; };
			class gpsRouting_getSetting { file = "functions\core\gpsRouting\gps\fn_getSetting.sqf"; };
			class gpsRouting_killGPS { file = "functions\core\gpsRouting\gps\fn_killGPS.sqf"; };
			class gpsRouting_localize { file = "functions\core\gpsRouting\gps\fn_localize.sqf"; };
			class gpsRouting_log { file = "functions\core\gpsRouting\gps\fn_log.sqf"; };
			class gpsRouting_main { file = "functions\core\gpsRouting\gps\fn_main.sqf"; };
			class gpsRouting_refreshCache { file = "functions\core\gpsRouting\gps\fn_refreshCache.sqf"; };
			class gpsRouting_setSetting { file = "functions\core\gpsRouting\gps\fn_setSetting.sqf"; };
			class gpsRouting_tracking { file = "functions\core\gpsRouting\gps\fn_tracking.sqf"; };
			class gpsRouting_compile { file = "functions\core\gpsRouting\gps_core\fn_compile.sqf"; };
			class gpsRouting_generateNodePath { file = "functions\core\gpsRouting\gps_core\fn_generateNodePath.sqf"; };
			class gpsRouting_generatePathHelpers { file = "functions\core\gpsRouting\gps_core\fn_generatePathHelpers.sqf"; };
			class gpsRouting_getAllRoads { file = "functions\core\gpsRouting\gps_core\fn_getAllRoads.sqf"; };
			class gpsRouting_insertFakeNode { file = "functions\core\gpsRouting\gps_core\fn_insertFakeNode.sqf"; };
			class gpsRouting_isHighway { file = "functions\core\gpsRouting\gps_core\fn_isHighway.sqf"; };
			class gpsRouting_log { file = "functions\core\gpsRouting\gps_core\fn_log.sqf"; };
			class gpsRouting_mapNodeValues { file = "functions\core\gpsRouting\gps_core\fn_mapNodeValues.sqf"; };
			class gpsRouting_mapRoutes { file = "functions\core\gpsRouting\gps_core\fn_mapRoutes.sqf"; };
			class gpsRouting_roadsConnectedTo { file = "functions\core\gpsRouting\gps_core\fn_roadsConnectedTo.sqf"; };
			class gpsRouting_AStar { file = "functions\core\gpsRouting\gps_core\algorithms\AStar\fn_AStar.sqf"; };
			class gpsRouting_RDP { file = "functions\core\gpsRouting\gps_core\algorithms\RDP\fn_RDP.sqf"; };
			class gpsRouting_arePolygonsOverlapping { file = "functions\core\gpsRouting\gps_core\misc\fn_arePolygonsOverlapping.sqf"; };
			class gpsRouting_callScriptedEventHandlerReturn { file = "functions\core\gpsRouting\gps_core\misc\fn_callScriptedEventHandlerReturn.sqf"; };
			class gpsRouting_createMarker { file = "functions\core\gpsRouting\gps_core\misc\fn_createMarker.sqf"; };
			class gpsRouting_getRoadBoundingBoxWorld { file = "functions\core\gpsRouting\gps_core\misc\fn_getRoadBoundingBoxWorld.sqf"; };
			class gpsRouting_getRoadDir { file = "functions\core\gpsRouting\gps_core\misc\fn_getRoadDir.sqf"; };
			class gpsRouting_isHighway { file = "functions\core\gpsRouting\gps_core\misc\fn_isHighway.sqf"; };
			class gpsRouting_pointLineDist { file = "functions\core\gpsRouting\gps_core\misc\fn_pointLineDist.sqf"; };
			class gpsRouting_create { file = "functions\core\gpsRouting\gps_core\misc\hashTable\fn_create.sqf"; };
			class gpsRouting_deleteNamespaces { file = "functions\core\gpsRouting\gps_core\misc\hashTable\fn_deleteNamespaces.sqf"; };
			class gpsRouting_exists { file = "functions\core\gpsRouting\gps_core\misc\hashTable\fn_exists.sqf"; };
			class gpsRouting_find { file = "functions\core\gpsRouting\gps_core\misc\hashTable\fn_find.sqf"; };
			class gpsRouting_set { file = "functions\core\gpsRouting\gps_core\misc\hashTable\fn_set.sqf"; };
			class gpsRouting_get { file = "functions\core\gpsRouting\gps_core\misc\PriorityQueue\fn_get.sqf"; };
			class gpsRouting_insert { file = "functions\core\gpsRouting\gps_core\misc\PriorityQueue\fn_insert.sqf"; };
			class gpsRouting_get { file = "functions\core\gpsRouting\gps_core\misc\Queue\fn_get.sqf"; };
			class gpsRouting_insert { file = "functions\core\gpsRouting\gps_core\misc\Queue\fn_insert.sqf"; };
			class gpsRouting_GPSHelp { file = "functions\core\gpsRouting\menu\gps\fn_GPSHelp.sqf"; };
			class gpsRouting_loadControlsMenu { file = "functions\core\gpsRouting\menu\gps\fn_loadControlsMenu.sqf"; };
			class gpsRouting_loadGPSMenu { file = "functions\core\gpsRouting\menu\gps\fn_loadGPSMenu.sqf"; };
			class gpsRouting_loadNavMenu { file = "functions\core\gpsRouting\menu\gps\fn_loadNavMenu.sqf"; };
			class gpsRouting_loadOptionsMenu { file = "functions\core\gpsRouting\menu\gps\fn_loadOptionsMenu.sqf"; };
			class gpsRouting_closeHud { file = "functions\core\gpsRouting\menu\hud\fn_closeHud.sqf"; };
			class gpsRouting_drawPath { file = "functions\core\gpsRouting\menu\hud\fn_drawPath.sqf"; };
			class gpsRouting_loadHud { file = "functions\core\gpsRouting\menu\hud\fn_loadHud.sqf"; };
			class gpsRouting_openHud { file = "functions\core\gpsRouting\menu\hud\fn_openHud.sqf"; };
			class gpsRouting_setGPSInfo { file = "functions\core\gpsRouting\menu\hud\fn_setGPSInfo.sqf"; };
			class gpsRouting_addQuickNavOption { file = "functions\core\gpsRouting\menu\quickNav\fn_addQuickNavOption.sqf"; };
			class gpsRouting_handleQuickNavActions { file = "functions\core\gpsRouting\menu\quickNav\fn_handleQuickNavActions.sqf"; };
			class gpsRouting_loadQuickNav { file = "functions\core\gpsRouting\menu\quickNav\fn_loadQuickNav.sqf"; };
			class gpsRouting_quickNavCreate { file = "functions\core\gpsRouting\menu\quickNav\fn_quickNavCreate.sqf"; };
			class gpsRouting_quickNavExecuteCurrentOption { file = "functions\core\gpsRouting\menu\quickNav\fn_quickNavExecuteCurrentOption.sqf"; };
			class gpsRouting_quickNavNextOption { file = "functions\core\gpsRouting\menu\quickNav\fn_quickNavNextOption.sqf"; };
			class gpsRouting_distanceStr { file = "functions\core\gpsRouting\misc\fn_distanceStr.sqf"; };
			class gpsRouting_metersToKilometers { file = "functions\core\gpsRouting\misc\fn_metersToKilometers.sqf"; };
			class gpsRouting_midPoint { file = "functions\core\gpsRouting\misc\fn_midPoint.sqf"; };
			class gpsRouting_nearestLocation { file = "functions\core\gpsRouting\misc\fn_nearestLocation.sqf"; };
			class gpsRouting_nearestRoadInArray { file = "functions\core\gpsRouting\misc\fn_nearestRoadInArray.sqf"; };
			class gpsRouting_colorPick { file = "functions\core\gpsRouting\misc\ColorPicker\fn_colorPick.sqf"; };
			class gpsRouting_editDialog { file = "functions\core\gpsRouting\misc\EditDialog\fn_editDialog.sqf"; };
			class gpsRouting_chooseKey { file = "functions\core\gpsRouting\misc\KeyChoice\fn_chooseKey.sqf"; };
		};

		class mapSpecific
		{
		};

	};

};
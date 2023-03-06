#include "..\..\macros.h"
/**
  @Author : [Utopia] Amaury
  @Creation : 27/12/17
  @Modified : --
  @Description : 
**/
params [
	"_ctrl",
	["_isHUD",false,[false]]
];

_color = ["marker_color"] call gps_fnc_getSetting;
_colorTexture = _color call bis_fnc_colorRGBATOTexture;
_dir = getDir player;

// diag_log format ["DRAWPATH.sqf: Currently active control: [%1]", _ctrl];

_toDraw = missionNamespace getVariable ["gps_draw_points",[]];
// diag_log _toDraw;

if (_toDraw isEqualTo []) exitWith {};

_lastRoad = _toDraw select (count _toDraw - 1);

// diag_log format ["_lastRoad: %1", _lastRoad];

_scale = ctrlMapScale _ctrl;

// diag_log format ["_scale: %1", _scale];

_lookingAT = [_ctrl ctrlMapScreenToWorld [0.5,0.5],getPosATL player] select _isHUD;

// diag_log format ["_lookingAT: %1", _lookingAT];

_miniMapControls = []; 

{
	_miniMapControls pushBack _x;
} forEach (
		uiNamespace getVariable ["IGUI_displays", []]
		select {ctrlIDD _x == ctrlIDD(uiNamespace getVariable "RscCustomInfoMiniMap")}
		apply {_x displayCtrl 101}
);

private _configMiniMapSizeMin = getNumber (configFile >> "RscCustomInfoMiniMap" >> "controls" >> "MiniMap" >> "controls" >> (ctrlClassName (_miniMapControls select 0)) >> "scaleMin");
private _configMiniMapSizeMax = getNumber (configFile >> "RscCustomInfoMiniMap" >> "controls" >> "MiniMap" >> "controls" >> (ctrlClassName (_miniMapControls select 0)) >> "scaleMax");

private _worldSize = worldName call BIS_fnc_mapSize;
private _scale = ctrlMapScale _ctrl;
private _dist = _worldSize * (_configMiniMapSizeMin / _configMiniMapSizeMax) / _scale;
private _distMultiplied = _dist * 1000;

// diag_log format ["_configMiniMapSizeMin: %1", _configMiniMapSizeMin];
// diag_log format ["_configMiniMapSizeMax: %1", _configMiniMapSizeMax];


_toDraw = _toDraw select {
	_x distance2D _lookingAT <= (_distMultiplied);
	// diag_log format ["_x (_toDraw): %1", _x];
	// hintSilent str ((_toDraw apply {_x distance2D _lookingAT}))
};

/*
if (ctrlIDC _ctrl == 101) then {
	hint format ["_distMultiplied: %1", _distMultiplied];
};
*/

// diag_log format ["_toDraw after select: %1", _toDraw];

{
	_previous = _toDraw param [_forEachIndex - 1,_toDraw select _forEachIndex];
	_next = _toDraw select (_forEachIndex + 1);

	if (_x isEqualTo _lastRoad) exitWith {
		_ctrl drawIcon 
		[
			'\A3\ui_f\data\Map\Markers\Military\flag_CA.paa',
			_color,
			_x,
			32,
			32,
			0,
			'',
			1,
			0.03,
			'TahomaB',
			'right'
		];
	};
	if (isNil "_next") exitWith {};

	_x_connected = [_x] call gps_core_fnc_roadsConnectedTo;

	if (_previous in _x_connected && _next in _x_connected) then {
		_ctrl drawRectangle 
		[
			[getPosATL _previous,getPosATL _x] call misc_fnc_midPoint,
			4.5,
			(_previous distance _x) / 1.75,
			[_previous getDir _x,(_previous getDir _x) - _dir] select _isHUD,
			_color,
			_colorTexture
		];
		_ctrl drawRectangle 
		[
			[getPosATL _x,getPosATL _next] call misc_fnc_midPoint,
			4.5,
			(_next distance _x) / 1.75,
			[_x getDir _next,(_x getDir _next) - _dir] select _isHUD,
			_color,
			_colorTexture
		];
	};
}foreach _toDraw;
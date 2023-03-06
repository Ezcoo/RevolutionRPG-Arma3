params ["_logType","_logContent"];

_logLevel = 6;

switch (_logType) do
{
	case "VERBOSE": {_logLevel = 0};
	case "DEBUG": {_logLevel = 1};
	case "INFO": {_logLevel = 2};
	case "WARNING": {_logLevel = 3};
	case "ERROR": {_logLevel = 4};
	case "CRITICAL": {_logLevel = 5};
	default {_logLevel = 6};
};

if (_logLevel == 6) then 
{
	diag_log format["[DAYLIGHT (ATTN: UNDEFINED log level!)]  [frameno: %2  |  ticktime: %3  |  fps: %4]  %5",_logType, diag_frameno, diag_tickTime, diag_fps, _logContent];
} else {	
	if (_logLevel >= daylight_logLevel) then 
	{
		diag_log format["[DAYLIGHT (%1)]  [frameno: %2  |  ticktime: %3  |  fps: %4]  %5",_logType, diag_frameno, diag_tickTime, diag_fps, _logContent];
	};
};
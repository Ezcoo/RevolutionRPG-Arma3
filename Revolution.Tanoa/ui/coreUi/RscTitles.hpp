class MsgText {
	idc						= -1;
	type					= CT_STRUCTURED_TEXT;
	style					= ST_LEFT;

	x						= safeZoneX;
	y						= safeZoneY + (safeZoneH * 0.15);
	w						= safeZoneW;
	h						= 0.6;

	size					= 0.02;
	text					= "";
};

class MsgBg {
	idc						= -1;
	type					= CT_STATIC;
	style					= ST_LEFT;

	x						= safeZoneXAbs;
	y						= safeZoneY;
	w						= safeZoneWAbs;
	h						= safeZoneH;

	colorBackground[]		= {0, 0, 0, 1};
	colorText[]				= {0, 0, 0, 0};

	size					= 0.02;
	sizeEx					= 0.02;
	font					= "EtelkaNarrowMediumPro";
	text					= "";
};

class OverlayImg {
	idc						= -1;
	type					= CT_STATIC;
	style					= ST_PICTURE;

	x						= safeZoneXAbs;
	y						= safeZoneY;
	w						= safeZoneWAbs;
	h						= safeZoneH;

	colorText[] 			= {0, 0, 0, 1};
	colorBackground[] 		= {0, 0, 0, 1};

	sizeEx					= 0.02;
	font					= "EtelkaNarrowMediumPro";
	text					= "";
};

class RscTitles {
	class DaylightIntro {
		idd							= 000000001;
		movingEnable				= 0;
		duration					= 2;
		controls[]					= {"DaylightIntroText"};
		onLoad						= "uiNamespace setVariable [""daylight_arrRscDaylightIntroText"", [(_this select 0), 000000002]]";

		class DaylightIntroText : MsgText {
			idc						= 000000002;
		};
	};

	class InfoTags {
		idd							= 000000003;
		movingEnable				= 0;
		duration					= 999999999;
		controlsBackground[]		= {"infoTag"};
		onLoad						= "uiNamespace setVariable [""daylight_arrRscInfoTag"", [(_this select 0), 000000004]]";

		class infoTag : MsgText {
			idc						= 000000004;
		};
	};

	class GeneralMsg {
		idd							= 000000005;
		movingEnable				= 0;
		duration					= 999999999;
		controls[]					= {"GeneralMsgText"};
		controlsBackground[]		= {"GeneralMsgBg"};
		onLoad						= "uiNamespace setVariable [""daylight_arrRscGeneralMsg"", [(_this select 0), 000000006]]";

		class GeneralMsgText : MsgText {
			idc						= 000000006;
		};
		class GeneralMsgBg : MsgBg {};
	};

	class GeneralMsgNoBg {
		idd							= 000000006;
		movingEnable				= 0;
		duration					= 999999999;
		controls[]					= {"GeneralMsgText"};
		controlsBackground[]		= {};
		onLoad						= "uiNamespace setVariable [""daylight_arrRscGeneralMsg"", [(_this select 0), 000000006]]";

		class GeneralMsgText : MsgText {
			idc						= 000000006;
		};
	};

	class OverlayGasmask {
		idd							= -1;
		movingEnable				= 0;
		duration					= 999999999;
		controls[]					= {"OverlayGasmaskImg"};

		class OverlayGasmaskImg : OverlayImg {
			text					= "daylight\gfx\overlay\gasmask.paa";
		};
	};

	class ActionMsg {
		idd							= 000000009;
		movingEnable				= 0;
		duration					= 5;
		controls[]					= {"ActionMsgText"};
		onLoad						= "uiNamespace setVariable [""daylight_arrRscActionMsg"", [(_this select 0), 000000010]]";

		class ActionMsgText : MsgText {
			idc						= 000000010;
			x						= safeZoneX;
			y						= safeZoneY + (safeZoneH * 0.75);
			w						= safeZoneW;
			h						= 0.6;
		};
	};

	class OverlayVignette {
		idd							= -1;
		movingEnable				= 0;
		duration					= 999999999;
		controls[]					= {"OverlayVignetteImg"};

		class OverlayVignetteImg : OverlayImg {
			colorText[] 			= {0, 0, 0, 0.9};

			text					= "daylight\gfx\overlay\vignette.paa";
		};
	};

	class DaylightHUD {
		idd							= 000000013;
		movingEnable				= 0;
		duration					= 999999999;
		controls[]					= {"DaylightHUD_LT", "DaylightHUD_RT", "DaylightHUD_LB", "DaylightHUD_RB", "DaylightHUD_RB2"};
		onLoad						= "uiNamespace setVariable [""daylight_arrRscDaylightHUD"", [(_this select 0), 000000014, 000000015, 000000016, 000000017, 000000018]]";

		class DaylightHUD_LT : MsgText {
			idc						= 000000014;
			x						= safeZoneX + 0.0075;
			y						= safeZoneY + 0.0075;
			w						= 0.3;
			h						= 0.25;
		};

		class DaylightHUD_RT : MsgText {
			idc						= 000000015;
			x						= (safeZoneX + safeZoneW) - 0.3;
			y						= safeZoneY + 0.0075;
			w						= 0.3;
			h						= 0.25;
		};

		class DaylightHUD_LB : MsgText {
			idc						= 000000016;
			x						= safeZoneX + 0.0075;
			y						= (safeZoneY + safeZoneH) - 0.1;
			w						= 0.3;
			h						= 0.1;
		};

		class DaylightHUD_RB : MsgText {
			idc						= 000000017;
			x						= (safeZoneX + safeZoneW) - 0.3;
			y						= (safeZoneY + safeZoneH) - 0.2;
			w						= 0.3;
			h						= 0.2;
		};

		class DaylightHUD_RB2 : MsgText {
			idc						= 000000018;
			x						= (safeZoneX + safeZoneW) - 0.31;
			y						= (safeZoneY + safeZoneH) - 0.175;
			w						= 0.3;
			h						= 0.2;
		};
	};

	class ProgressBar {
		idd							= 000000018;
		movingEnable				= 0;
		duration					= 999999999;
		controls[]					= {"IGUIBack_2200", "IGUIBack_2201", "RscText_1001", "RscText_1000"};
		onLoad						= "uiNamespace setVariable [""daylight_arrRscProgressBar"", [(_this select 0), 1000, 1001]];";

		class IGUIBack_2200: IGUIBack {
			idc = 2200;
			x = 6 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 28 * GUI_GRID_W;
			h = 2.25 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.75};
		};

		class IGUIBack_2201: IGUIBack {
			idc = 2201;
			x = 6.5 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 27 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.33};
		};

		class RscText_1000: RscText {
			idc = 1000;

			x = 6.5 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 27 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;

			style = ST_CENTER;

			text = ""; //--- ToDo: Localize;
		};

		class RscText_1001: RscText {
			idc = 1001;

			x = 6.5 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 0 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};
	};
};
/*
	Description:	Dialogs for Daylight
	Author:			qbt
*/

class RscText_DL : RscText {
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
};

class IGUIBack_DL : IGUIBack {
	colorBackground[] = {0, 0, 0, 0.75};
};

class CharacterCreationCivilian {
	idd = 000000009;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	onKeyDown = "_this call daylight_fnc_handleKeyDownDisableDialogExitByKeyboard";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "$STR_DIALOG_CREATE_YOUR_CHARACTER";
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 20 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "$STR_DIALOG_MOTD";
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 8 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 7 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;

			text = "$STR_MOTD";
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = "$STR_DIALOG_BASIC_INFORMATION";
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 14 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 6 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1004: RscText_DL {
			idc = 1004;
			text = "$STR_DIALOG_LAST_NAME";
			x = 20.25 * GUI_GRID_W + GUI_GRID_X;
			y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iNameFirstMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iNameFirstMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1401: RscEdit {
			idc = 1401;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iNameLastMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iNameLastMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;
			text = "$STR_DIALOG_FIRST_NAME";
			x = 13.25 * GUI_GRID_W + GUI_GRID_X;
			y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1005: RscText_DL {
			idc = 1005;
			text = "$STR_DIALOG_CHARACTER_DESCRIPTION";
			x = 13.25 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscEdit_1402: RscEdit {
			idc = 1402;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iDescriptionMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iDescriptionMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_2600: RscShortcutButton {
			x = 22.5 * GUI_GRID_W + GUI_GRID_X;
			y = 21.35 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			text = "$STR_DIALOG_OK";
			action = "if ((((ctrlText 1400) call daylight_fnc_strLen) != 0) && (((ctrlText 1401) call daylight_fnc_strLen) != 0) && (((ctrlText 1402) call daylight_fnc_strLen) != 0)) then {closeDialog 0; [ctrlText 1400, ctrlText 1401, ctrlText 1402] call daylight_fnc_characterCreationSaveCharacter}";
		};

		class RscShortcutButton_2700: RscShortcutButton {
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 21.35 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			text = "$STR_DIALOG_CANCEL";
			action = "endMission ""END1"""; // Terminate mission TO-DO: localize endMission str
		};
	};
};

class CharacterCreationBlufor {
	idd = 000000010;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	onKeyDown = "_this call daylight_fnc_handleKeyDownDisableDialogExitByKeyboard";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "$STR_DIALOG_CREATE_YOUR_CHARACTER";
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 20 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "$STR_DIALOG_MOTD";
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 8 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 7 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;

			text = "$STR_MOTD";
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = "$STR_DIALOG_BASIC_INFORMATION";
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 14 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 6 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1004: RscText_DL {
			idc = 1004;
			text = "$STR_DIALOG_LAST_NAME";
			x = 13.25 * GUI_GRID_W + GUI_GRID_X;
			y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscEdit_1401: RscEdit {
			idc = 1401;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iNameLastMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iNameLastMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscText_DL_1005: RscText_DL {
			idc = 1005;
			text = "$STR_DIALOG_CHARACTER_DESCRIPTION";
			x = 13.25 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscEdit_1402: RscEdit {
			idc = 1402;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iDescriptionMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iDescriptionMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_2600: RscShortcutButton {
			x = 22.5 * GUI_GRID_W + GUI_GRID_X;
			y = 21.35 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			text = "$STR_DIALOG_OK";
			action = "if ((((ctrlText 1401) call daylight_fnc_strLen) != 0) && (((ctrlText 1402) call daylight_fnc_strLen) != 0)) then {closeDialog 0; ["""", ctrlText 1401, ctrlText 1402] call daylight_fnc_characterCreationSaveCharacter}";
		};

		class RscShortcutButton_2700: RscShortcutButton {
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 21.35 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			text = "$STR_DIALOG_CANCEL";
			action = "endMission ""END1"""; // Terminate mission TO-DO: localize endMission str
		};
	};
};

class Inventory {
	idd = 000000011;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	onKeyDown = "_this call daylight_fnc_handleKeyDownInventoryExit";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 2.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 35 * GUI_GRID_W;
			h = 18 * GUI_GRID_H;
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Inventory"; //--- ToDo: Localize;
			x = 2.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 35 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Items"; //--- ToDo: Localize;
			x = 3.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = "Players nearby"; //--- ToDo: Localize;
			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;
			x = 3.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_invUpdateUI";
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;
			text = "Description"; //--- ToDo: Localize;
			x = 3.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		/*class RscText_DL_1004: RscText_DL {
			idc = 1004;
			x = 1.03914;
			y = 0.340067;
			w = 0.1;
			h = 0.1;
		};*/

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;
			x = 3.5 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1005: RscText_DL {
			idc = 1005;
			text = "No item selected."; //--- ToDo: Localize;
			x = 3.75 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			sizeEx = 0.65 * GUI_GRID_H;
		};

		class RscListbox_1501: RscListbox {
			idc = 1501;
			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 15 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;

			onLbSelChanged = "if (lbCurSel 1500 != -1) then {ctrlEnable [1701, true]}";
		};

		class RscText_DL_1006: RscText_DL {
			idc = 1006;
			text = "Actions"; //--- ToDo: Localize;
			x = 29.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 29.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 15 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;
			text = "1"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			style = ST_CENTER;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Use"; //--- ToDo: Localize;
			x = 29 * GUI_GRID_W + GUI_GRID_X;
			y = 7 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "if (abs parseNumber(ctrlText 1400) != 0) then {[abs parseNumber(lbData [1500, lbCurSel 1500]), abs parseNumber(ctrlText 1400)] call daylight_fnc_useItem}";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Give"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 9 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "if (lbCurSel 1501 != -1) then {[(daylight_arrInventoryNearPlayers select (abs parseNumber(lbData [1501, lbCurSel 1501]))), abs parseNumber(lbData [1500, lbCurSel 1500]), abs parseNumber(ctrlText 1400)] call daylight_fnc_giveItem}";
		};

		class RscShortcutButton_1702: RscShortcutButton {
			idc = 1702;
			text = "Drop"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "if (abs parseNumber(ctrlText 1400) != 0) then {[abs parseNumber(lbData [1500, lbCurSel 1500]), abs parseNumber(ctrlText 1400)] call daylight_fnc_dropItem}";
		};

		class RscShortcutButton_1703: RscShortcutButton {
			idc = 1703;
			text = "Keychain"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "[] call daylight_fnc_keychainOpenUI";
		};

		class RscShortcutButton_1704: RscShortcutButton {
			idc = 1704;
			text = "Phone"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "[] call daylight_fnc_mobilePhoneOpenUI";
		};

		class RscShortcutButton_1705: RscShortcutButton {
			idc = 1705;
			text = "Settings"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 14 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "[] call daylight_fnc_settingsOpenUI";
		};
	};
};

class ATM {
	idd = 000000012;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "$STR_ATM"; //--- ToDo: Localize;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 23 * GUI_GRID_H;
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = "Account Balance"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Withdraw"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 9 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 5 * GUI_GRID_H;
			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;
			text = "Deposit"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2203: IGUIBack_DL {
			idc = 2203;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 7.5 * GUI_GRID_H;
			colorBackground[] = {0, 0, 0, 0.3};
		};

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1004: RscText_DL {
			idc = 1004;
			text = "In Inventory"; //--- ToDo: Localize;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			style = ST_CENTER;
		};

		class RscText_DL_1005: RscText_DL {
			idc = 1005;
			text = "In Bank"; //--- ToDo: Localize;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			style = ST_CENTER;
		};

		class RscText_DL_1006: RscText_DL {
			idc = 1006;
			text = ""; //--- ToDo: Localize;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			style = ST_CENTER;
		};

		class RscText_DL_1007: RscText_DL {
			idc = 1007;
			text = ""; //--- ToDo: Localize;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			style = ST_CENTER;
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "1";

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
		};

		class RscText_DL_1008: RscText_DL {
			idc = 1008;
			text = "Amount:"; //--- ToDo: Localize;
			x = 13.75 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Withdraw"; //--- ToDo: Localize;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "if (((ctrlText 1400) call daylight_fnc_strLen) != 0) then {(ctrlText 1400) call daylight_fnc_bankWithdraw}";
		};

		class RscText_DL_1009: RscText_DL {
			idc = 1009;
			text = "Recipient:"; //--- ToDo: Localize;
			x = 13.75 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscCombo_2100: RscCombo {
			idc = 2100;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1010: RscText_DL {
			idc = 1010;
			text = "Amount:"; //--- ToDo: Localize;
			x = 13.75 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscEdit_1401: RscEdit {
			idc = 1401;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "1";

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Deposit / Transfer"; //--- ToDo: Localize;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "if (((ctrlText 1401) call daylight_fnc_strLen) != 0) then {[abs parseNumber(lbData [2100, (lbCurSel 2100)]), ctrlText 1401] call daylight_fnc_bankDepositOrTransfer}";
		};
	};
};

class Shop {
	idd = 000000013;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; daylight_bDialogShopOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false; daylight_bDialogShopOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Shop"; //--- ToDo: Localize;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 26 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 26 * GUI_GRID_W;
			h = 22.5 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Inventory (0/60kg)"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_shopUpdateUI";
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = ""; //--- ToDo: Localize;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscListbox_1501: RscListbox {
			idc = 1501;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_shopUpdateUI";
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "1";

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1401: RscEdit {
			idc = 1401;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "1";

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Sell"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "if ((abs parseNumber(ctrlText 1400) != 0) && ((lbCurSel 1500) != -1)) then {ctrlEnable [1700, false]; [abs parseNumber(lbData [1500, lbCurSel 1500]), abs parseNumber(ctrlText 1400)] call daylight_fnc_shopSellItem; daylight_arrLastInv = daylight_arrInventory; daylight_arrLastTrunk = daylight_vehCurrentTrunk getVariable [""daylight_arrTrunk"", []]; daylight_iShopButtonWaitForUpdate = true}";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Buy"; //--- ToDo: Localize;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "if ((abs parseNumber(ctrlText 1401) != 0) && ((lbCurSel 1501) != -1)) then {ctrlEnable [1701, false]; [abs parseNumber(lbData [1501, lbCurSel 1501]), abs parseNumber(ctrlText 1401)] call daylight_fnc_shopBuyItem; daylight_arrLastInv = daylight_arrInventory; daylight_arrLastTrunk = daylight_vehCurrentTrunk getVariable [""daylight_arrTrunk"", []]; daylight_iShopButtonWaitForUpdate = true}";
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;
			text = "Description"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1004: RscText_DL {
			idc = 1004;
			text = "No item selected."; //--- ToDo: Localize;
			x = 8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 23 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			sizeEx = 0.65 * GUI_GRID_H;
		};
	};
};

class Trunk {
	idd = 000000014;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; daylight_bDialogTrunkOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false; daylight_bDialogTrunkOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Trunk"; //--- ToDo: Localize;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 26 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 26 * GUI_GRID_W;
			h = 22.5 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Inventory (0/60kg)"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_trunkUpdateUI";
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = ""; //--- ToDo: Localize;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscListbox_1501: RscListbox {
			idc = 1501;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_trunkUpdateUI";
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "1";

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1401: RscEdit {
			idc = 1401;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "1";

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = ""; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "if ((abs parseNumber(ctrlText 1400) != 0) && ((lbCurSel 1500) != -1)) then {[abs parseNumber(lbData [1500, lbCurSel 1500]), abs parseNumber(ctrlText 1400)] call daylight_fnc_trunkPutIn}";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = ""; //--- ToDo: Localize;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "if ((abs parseNumber(ctrlText 1401) != 0) && ((lbCurSel 1501) != -1)) then {[abs parseNumber(lbData [1501, lbCurSel 1501]), abs parseNumber(ctrlText 1401)] call daylight_fnc_trunkTakeFrom}";
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;
			text = "Description"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1004: RscText_DL {
			idc = 1004;
			text = "No item selected."; //--- ToDo: Localize;
			x = 8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 23 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			sizeEx = 0.65 * GUI_GRID_H;
		};
	};
};

class CharacterCreationClothingCivilian {
	idd = 000000015;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	onKeyDown = "_this call daylight_fnc_handleKeyDownDisableDialogExitByKeyboard";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 21 * GUI_GRID_H;
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Character Creation (Clothing)"; //--- ToDo: Localize;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Headwear"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = "Note"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;
			text = "$STR_DIALOG_CLOTHING_WARNING"; //--- ToDo: Localize;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13.5 * GUI_GRID_W;
			h = 3 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;
		};

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 6 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;
			text = "Headgear:"; //--- ToDo: Localize;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscCombo_2100: RscCombo {
			idc = 2100;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1004: RscText_DL {
			idc = 1004;
			text = "Glasses:"; //--- ToDo: Localize;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscCombo_2101: RscCombo {
			idc = 2101;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1005: RscText_DL {
			idc = 1005;
			text = "Clothing"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2203: IGUIBack_DL {
			idc = 2203;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1006: RscText_DL {
			idc = 1006;
			text = "Outfit:"; //--- ToDo: Localize;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscCombo_2102: RscCombo {
			idc = 2102;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "OK"; //--- ToDo: Localize;
			x = 22.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22.35 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0; [lbData[2100, lbCurSel 2100], lbData[2101, lbCurSel 2101], lbData[2102, lbCurSel 2102]] call daylight_fnc_characterSetClothing";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Cancel"; //--- ToDo: Localize;
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22.35 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "endMission ""END1""";
		};
	};
};

/*class NewCharacterQuestion {
	idd = 000000016;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	onKeyDown = "_this call daylight_fnc_handleKeyDownDisableDialogExitByKeyboard";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Create a new character?"; //--- ToDo: Localize;
			x = 10 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 20 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 10 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 20 * GUI_GRID_W;
			h = 11.75 * GUI_GRID_H;
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 10.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 9 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;
			text = "";
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 18.5 * GUI_GRID_W;
			h = 8.5 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "$STR_DIALOG_CONTINUE"; //--- ToDo: Localize;
			x = 24 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = ""; //--- ToDo: Localize;
			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0; createDialog format[""CharacterCreation%1"", player call daylight_fnc_returnSideStringForSavedVariables]";
		};
	};
};*/

class InteractionMenu {
	idd = 000000017;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; daylight_bDialogInteractionMenuOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false; daylight_bDialogInteractionMenuOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 23 * GUI_GRID_H;
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			text = "Interact"; //--- ToDo: Localize;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			text = "Jail"; //--- ToDo: Localize;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 8 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscSlider_1900: RscSlider {
			idc = 1900;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscShortcutButton_1704: RscShortcutButton {
			idc = 1704;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			text = ""; //--- ToDo: Localize;

			action = "[daylight_vehInteractionCurrentPlayer, round(sliderPosition 1900)] call daylight_fnc_jailJailPlayer";
		};

		class RscShortcutButton_1705: RscShortcutButton {
			idc = 1705;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			text = "Sentences"; //--- ToDo: Localize;

			action = "[localize ""STR_INTERACTION_MENU_SENTENCES_TITLE"", localize ""STR_INTERACTION_MENU_SENTENCES_CONTENT""] call daylight_fnc_showNotificationWindow";
		};

		class RscShortcutButton_1707: RscShortcutButton {
			idc = 1707;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			text = "Cancel"; //--- ToDo: Localize;

			action = "closeDialog 0";
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;

			text = "Ticket"; //--- ToDo: Localize;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.3};
		};

		class RscShortcutButton_1706: RscShortcutButton {
			idc = 1706;

			text = "Give Ticket"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "[] call daylight_fnc_interactionOpenGiveTicketUI";
		};

		class RscText_DL_1004: RscText_DL {
			idc = 1004;

			text = "General"; //--- ToDo: Localize;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2203: IGUIBack_DL {
			idc = 2203;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 6.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.3};
		};

		class RscShortcutButton_1703: RscShortcutButton {
			idc = 1703;

			text = "Remove illegal items"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0; [] spawn daylight_fnc_interactionRemoveIllegalItems";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			text = "Restain / Release"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "daylight_vehInteractionCurrentPlayer call daylight_fnc_networkRestrainPlayer";
		};

		class RscShortcutButton_1702: RscShortcutButton {
			idc = 1702;

			text = "Body search"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "daylight_vehInteractionCurrentPlayer call daylight_fnc_networkBodySearchDo";
		};
	};
};

class NotificationWindow {
	idd = 000000018;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false; daylight_bNotificationWindowOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 20.75 * GUI_GRID_H;
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 23 * GUI_GRID_W;
			h = 18 * GUI_GRID_H;
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;
			x = 8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 23 * GUI_GRID_W;
			h = 18 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Ok"; //--- ToDo: Localize;
			x = 25.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};
	};
};

class GiveTicket {
	idd = 000000019;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]; daylight_bGiveTicketDialogOpen = true";
	onUnload = "daylight_bDialogOpen = false; daylight_bGiveTicketDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			text = "Give ticket"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 12.5 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.75};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 3 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.75};
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 6.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 2.75 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "Reason:"; //--- ToDo: Localize;
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onKeyDown = "[(_this select 0), daylight_cfg_iTicketReasonMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iTicketReasonMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "Amount:"; //--- ToDo: Localize;
		};

		class RscEdit_1401: RscEdit {
			idc = 1401;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onKeyDown = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			
			x = 23.5 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Ticket"; //--- ToDo: Localize;

			action = "closeDialog 0; [daylight_vehInteractionCurrentPlayer, abs parseNumber(ctrlText 1401), ctrlText 1400] call daylight_fnc_interactionGiveTicket";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			x = 18.5 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Cancel"; //--- ToDo: Localize;

			action = "closeDialog 0; daylight_vehInteractionCurrentPlayer call daylight_fnc_interactionOpenUI";
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1000;

			text = "Note"; //--- ToDo: Localize;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};
	};
};

class PayTicket {
	idd = 000000020;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	onKeyDown = "_this call daylight_fnc_handleKeyDownDisableDialogExitByKeyboard";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Pay ticket?"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 8.5 * GUI_GRID_H;
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 20 * GUI_GRID_W;
			h = 5.5 * GUI_GRID_H;
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;
			text = ""; //--- ToDo: Localize;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 20 * GUI_GRID_W;
			h = 5.5 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Yes"; //--- ToDo: Localize;
			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0; true call daylight_fnc_interactionPayTicket";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "No"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0; false call daylight_fnc_interactionPayTicket";
		};
	};
};

class WantUnwantRelease {
	idd = 000000021;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Want / Unwant / Release"; //--- ToDo: Localize;
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 17.5 * GUI_GRID_W;
			h = 24 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.75};
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Want"; //--- ToDo: Localize;
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 4.5 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 15.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "Reason:"; //--- ToDo: Localize;
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 7 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			action = "[daylight_vehWantUnwantReleaseCurrentTarget, ctrlText 1400, 0] call daylight_fnc_jailSetWanted; (lbCurSel 2100) call daylight_fnc_jailWantUnwantUpdateOpenUI";

			text = "Set wanted"; //--- ToDo: Localize;
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Target"; //--- ToDo: Localize;
		};

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscCombo_2100: RscCombo {
			idc = 2100;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_jailWantUnwantUpdateOpenUI";
		};

		class RscText_DL_1004: RscText_DL {
			idc = 1004;

			text = "Release from jail"; //--- ToDo: Localize;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class IGUIBack_DL_2203: IGUIBack_DL {
			idc = 2203;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 4.5 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscText_DL_1005: RscText_DL {
			idc = 1005;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 15.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "Reason:"; //--- ToDo: Localize;
		};

		class RscEdit_1401: RscEdit {
			idc = 1401;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 21 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1006: RscText_DL {
			idc = 1006;

			text = "Unwant"; //--- ToDo: Localize;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75) * GUI_GRID_H;
		};

		class IGUIBack_DL_2204: IGUIBack_DL {
			idc = 2204;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 6.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.3};
		};

		class RscText_DL_1007: RscText_DL {
			idc = 1007;

			text = "Reason:"; //--- ToDo: Localize;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 14 * GUI_GRID_H + GUI_GRID_Y;
			w = 15.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75) * GUI_GRID_H;
		};

		class RscCombo_2101: RscCombo {
			idc = 2101;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Set unwanted"; //--- ToDo: Localize;

			action = "[daylight_vehWantUnwantReleaseCurrentTarget, abs parseNumber(lbData [2101, lbCurSel 2101])] call daylight_fnc_jailSetUnwanted; (lbCurSel 2100) call daylight_fnc_jailWantUnwantUpdateOpenUI";
		};

		class RscShortcutButton_1702: RscShortcutButton {
			idc = 1702;

			text = "Release from jail"; //--- ToDo: Localize;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class RscEdit_1402: RscEdit {
			idc = 1400;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
	};
};

class ImpoundReturn {
	idd = 000000022;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Return impounded vehicle"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 17.5 * GUI_GRID_H;
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 14.5 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Return"; //--- ToDo: Localize;
			x = 24 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "abs parseNumber(lbData [1500, lbCurSel 1500]) call daylight_fnc_impoundReturnVehicleFromUI";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Cancel"; //--- ToDo: Localize;
			x = 19 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};
	};
};

class BuyLicense {
	idd = 000000023;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Buy license"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 17.5 * GUI_GRID_H;
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 14.5 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Buy"; //--- ToDo: Localize;
			x = 24 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "abs parseNumber(lbData [1500, lbCurSel 1500]) call daylight_fnc_licensesBuyLicense";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Cancel"; //--- ToDo: Localize;
			x = 19 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};
	};
};

class EditShouts {
	idd = 000000024;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Edit shouts"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 10 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Save"; //--- ToDo: Localize;
			x = 23.5 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "[ctrlText 1400, ctrlText 1401, ctrlText 1402, ctrlText 1403, ctrlText 1404] call daylight_fnc_shoutSave";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1700;
			text = "Cancel"; //--- ToDo: Localize;
			x = 18 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1401: RscEdit {
			idc = 1401;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1402: RscEdit {
			idc = 1402;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1403: RscEdit {
			idc = 1403;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 9 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1404: RscEdit {
			idc = 1404;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iShoutMaxLen] call daylight_fnc_limitRscEditInputLen";
		};
	};
};

class MobilePhone {
	idd = 000000025;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			text = "Mobile Phone"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};
		
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 21.5 * GUI_GRID_H;
		};
		
		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			text = "Send Message"; //--- ToDo: Localize;
			x = 10.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};
		
		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 10.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 8 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};
		
		class RscText_DL_1002: RscText_DL {
			idc = 1002;

			text = "Recipient:"; //--- ToDo: Localize;
			x = 10.75 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 18.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class RscCombo_2100: RscCombo {
			idc = 2100;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class RscText_DL_1003: RscText_DL {
			idc = 1003;

			text = "Message:"; //--- ToDo: Localize;
			x = 10.75 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class RscEdit_1400: RscEdit {
			idc = 1400;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;

			style = ST_MULTI;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iTextMessageMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iTextMessageMaxLen] call daylight_fnc_limitRscEditInputLen";
		};
		
		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			text = "Send"; //--- ToDo: Localize;
			x = 24.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "[playableUnits select abs parseNumber(lbData [2100, lbCurSel 2100]), ctrlText 1400] call daylight_fnc_mobilePhoneSendMessage";
		};
		
		class RscText_DL_1004: RscText_DL {
			idc = 1004;

			text = "Received Messages"; //--- ToDo: Localize;
			x = 10.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};
		
		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;

			x = 10.5 * GUI_GRID_W + GUI_GRID_X;
			y = 14 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 8.5 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};
		
		class RscListbox_1500: RscListBox {
			idc = 1500;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 5.5 * GUI_GRID_H;
		};
		
		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			text = "Read"; //--- ToDo: Localize;
			x = 24.5 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "(lbCurSel 1500) call daylight_fnc_mobilePhoneReadMessage";
		};
		
		class RscShortcutButton_1702: RscShortcutButton {
			idc = 1702;

			text = "Cancel"; //--- ToDo: Localize;
			x = 19.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};
		
		class RscShortcutButton_1703: RscShortcutButton {
			idc = 1703;

			text = "Cancel"; //--- ToDo: Localize;
			x = 19.5 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};

		/*class RscCombo_2101: RscCombo {
			idc = 2101;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};*/
	};
};

class Stats {
	idd = 000000026;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			text = "Stats"; //--- ToDo: Localize;
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 19 * GUI_GRID_H;
		};

		class RscListbox_1500: RscListBox {
			idc = 1500;

			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 16 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Ok"; //--- ToDo: Localize;
			x = 26 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};
	};
};

class Settings {
	idd = 000000027;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0];";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 10 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 9.5 * GUI_GRID_H;
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 5 * GUI_GRID_H;

			colorBackground[] = {0, 0, 0, 0.3};
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Settings"; //--- ToDo: Localize;
			x = 10 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Ok"; //--- ToDo: Localize;
			x = 25.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0; [] call daylight_fnc_settingsSave";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Edit shouts"; //--- ToDo: Localize;
			x = 18 * GUI_GRID_W + GUI_GRID_X;
			y = 13.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			action = "[] call daylight_fnc_shoutEditOpenUI";
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "View distance"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 7 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = "Foot"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;
			text = "1500"; //--- ToDo: Localize;
			x = 27.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1004: RscText_DL {
			idc = 1004;
			text = "Car"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1005: RscText_DL {
			idc = 1005;
			text = "Air"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1006: RscText_DL {
			idc = 1006;
			text = "1500"; //--- ToDo: Localize;
			x = 27.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1007: RscText_DL {
			idc = 1007;
			text = "1500"; //--- ToDo: Localize;
			x = 27.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscSlider_1901: RscXSlider {
			idc = 1901;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onSliderPosChanged = "_this call daylight_fnc_settingsUpdateUI";
		};

		class RscSlider_1902: RscXSlider {
			idc = 1902;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onSliderPosChanged = "_this call daylight_fnc_settingsUpdateUI";
		};

		class RscSlider_1903: RscXSlider {
			idc = 1903;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 13.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onSliderPosChanged = "_this call daylight_fnc_settingsUpdateUI";
		};
	};
};

class Keychain {
	idd = 000000028;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0];";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 22.5 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.75};
		};

		class IGUIBack_2201: IGUIBack_DL {
			idc = 2201;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 8 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			text = "Keychain"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class RscListbox_1500: RscListBox {
			idc = 1500;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 10 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_keychainUpdateUI";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Give to player"; //--- ToDo: Localize;

			action = "[daylight_arrInventoryNearPlayers select (parseNumber (lbData [2100, lbCurSel 2100])), ([player, format[""arrKeys%1"", player call daylight_fnc_returnSideStringForSavedVariables], []] call daylight_fnc_loadVar) select (lbCurSel 1500)] spawn daylight_fnc_keychainSendKey";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Destroy key permanently"; //--- ToDo: Localize;

			action = "(([player, format[""arrKeys%1"", player call daylight_fnc_returnSideStringForSavedVariables], []] call daylight_fnc_loadVar) select (lbCurSel 1500)) spawn daylight_fnc_keychainDestroyKey";
		};

		class RscText_1002: RscText_DL {
			idc = 1000;

			text = "Vehicles"; //--- ToDo: Localize;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class RscCombo_2100: RscCombo {
			idc = 2100;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_keychainUpdateUI";
		};

		class RscText_1003: RscText_DL {
			idc = 1000;

			text = "Actions"; //--- ToDo: Localize;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class RscShortcutButton_1702: RscShortcutButton {
			idc = 1701;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Cancel"; //--- ToDo: Localize;

			action = "closeDialog 0";
		};
	};
};

class BodySearchReturn {
	idd = 000000029;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 21 * GUI_GRID_H;
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			text = "";
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 23 * GUI_GRID_W;
			h = 18 * GUI_GRID_H;
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;

			x = 8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 23 * GUI_GRID_W;
			h = 18 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			x = 25.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			text = "Ok"; //--- ToDo: Localize;

			action = "closeDialog 0";
		};
	};
};

class PoliceMenu {
	idd = 000000030;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]; daylight_bPoliceMenuOpen = true";
	onUnload = "daylight_bDialogOpen = false; daylight_bPoliceMenuOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Police menu"; //--- ToDo: Localize;
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 22 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.75};
		};

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 8.5 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 9 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Target"; //--- ToDo: Localize;
		};

		class RscCombo_2100: RscCombo {
			idc = 2100;

			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_policeMenuUpdateUI";
		};

		class RscListbox_1500: RscListBox {
			idc = 1500;

			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 6.5 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 14 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Actions"; //--- ToDo: Localize;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Set wanted"; //--- ToDo: Localize;

			action = "call daylight_fnc_policeMenuSetWantedOpenUI";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Set unwanted"; //--- ToDo: Localize;

			action = "call daylight_fnc_policeMenuSetUnwantedOpenUI";
		};

		class RscShortcutButton_1702: RscShortcutButton {
			idc = 1702;

			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Release from jail"; //--- ToDo: Localize;

			action = "call daylight_fnc_policeMenuReleaseFromJailOpenUI";
		};

		class RscShortcutButton_1703: RscShortcutButton {
			idc = 1702;

			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Cancel"; //--- ToDo: Localize;

			action = "closeDialog 0";
		};
	};
};

class ReleaseFromJail {
	idd = 000000031;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "Release from jail"; //--- ToDo: Localize;

			colorBackground[] = {0,0.49,1,1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 10 * GUI_GRID_H;
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 3 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 6.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 2.75 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "Reason:"; //--- ToDo: Localize;
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onKeyDown = "[(_this select 0), daylight_cfg_iTicketReasonMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iTicketReasonMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			x = 19.5 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Release from jail"; //--- ToDo: Localize;

			action = "closeDialog 0; (ctrlText 1400) call daylight_fnc_policeMenuReleaseFromJail";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Cancel"; //--- ToDo: Localize;

			action = "closeDialog 0; daylight_bPoliceMenuActionOpen = false; call daylight_fnc_policeMenuOpenUI";
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1000;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Note"; //--- ToDo: Localize;
		};
	};
};

class SetWanted {
	idd = 000000032;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false; daylight_bPoliceMenuActionOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Set wanted"; //--- ToDo: Localize;
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 10 * GUI_GRID_H;
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 3 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 6.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 2.75 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "Reason:"; //--- ToDo: Localize;
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onKeyDown = "[(_this select 0), daylight_cfg_iTicketReasonMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iTicketReasonMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Set wanted"; //--- ToDo: Localize;

			action = "closeDialog 0; (ctrlText 1400) call daylight_fnc_policeMenuSetWanted";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			x = 16.5 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Cancel"; //--- ToDo: Localize;

			action = "closeDialog 0; daylight_bPoliceMenuActionOpen = false; call daylight_fnc_policeMenuOpenUI";
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1000;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Note"; //--- ToDo: Localize;
		};
	};
};

class SetUnwanted {
	idd = 000000033;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false; daylight_bPoliceMenuActionOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Set unwanted"; //--- ToDo: Localize;
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 12.5 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.75};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 3 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscStructuredText_1100: RscStructuredText {
			idc = 1100;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 6.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 2.75 * GUI_GRID_H;

			size = 0.75 * GUI_GRID_H;
			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "Reason for unwanting:"; //--- ToDo: Localize;
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onKeyDown = "[(_this select 0), daylight_cfg_iTicketReasonMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iTicketReasonMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			x = 23 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Unwant"; //--- ToDo: Localize;

			action = "closeDialog 0; [ctrlText 1400, lbCurSel 2100, lbText [2100, lbCurSel 2100]] call daylight_fnc_policeMenuSetUnwanted";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			x = 18 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Cancel"; //--- ToDo: Localize;

			action = "closeDialog 0; daylight_bPoliceMenuActionOpen = false; call daylight_fnc_policeMenuOpenUI";
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1000;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Note"; //--- ToDo: Localize;
		};

		class RscCombo_2100: RscCombo {
			idc = 2100;
			
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1001;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			text = "Select reason:"; //--- ToDo: Localize;
		};
	};
};

class InteractionMenuVehicle {
	idd = 000000034;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Interact with vehicle"; //--- ToDo: Localize;
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 21.5 * GUI_GRID_H;
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 8.5 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 8.5 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Vehicle information"; //--- ToDo: Localize;
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 7.5 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;

			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 14 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Actions"; //--- ToDo: Localize;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			text = "Check vehicle trunk"; //--- ToDo: Localize;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			action = "daylight_vehInteractionCurrentVehicle call daylight_fnc_interactionVehicleTrunkSearchReturn";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			text = "Remove illegal items in trunk"; //--- ToDo: Localize;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0; daylight_vehInteractionCurrentVehicle spawn daylight_fnc_interactionVehicleRemoveIllegalItems";
		};

		class RscShortcutButton_1702: RscShortcutButton {
			idc = 1702;

			text = "Impound vehicle"; //--- ToDo: Localize;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			
			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0; [daylight_vehInteractionCurrentVehicle] execVM ""daylight\client\actions\impoundVehicle.sqf""";
		};

		class RscShortcutButton_1703: RscShortcutButton {
			idc = 1703;

			text = "Pull out passangers"; //--- ToDo: Localize;

			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			
			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0; daylight_vehInteractionCurrentVehicle spawn daylight_fnc_interactionVehiclePullOut";
		};
	};
};

class BuyVehicle {
	idd = 000000035;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 19 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.75};
		};

		class RscListbox_1500: RscListBox {
			idc = 1500;

			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 14.5 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_shopVehicleUpdateUI";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			x = 24 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			action = "[abs parseNumber(lbData [1500, lbCurSel 1500]), abs parseNumber(lbData [2100, lbCurSel 2100])] call daylight_fnc_shopVehicleBuy";

			text = "Buy"; //--- ToDo: Localize;
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			x = 19 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0";

			text = "Cancel"; //--- ToDo: Localize;
		};

		class RscCombo_2100: RscCombo {
			idc = 2100;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
	};
};

class StatusMenu {
	idd = 000000036;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			text = "Status Menu"; //--- ToDo: Localize;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 17.5 * GUI_GRID_H;
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;

			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 14.5 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			text = "Ok"; //--- ToDo: Localize;

			x = 24 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};
	};
};

class GangMenu {
	idd = 000000037;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; daylight_bGangMenuOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false; daylight_bGangMenuOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 26 * GUI_GRID_W;
			h = 13.5 * GUI_GRID_H;
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Gang Menu"; //--- ToDo: Localize;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 26 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18.5 * GUI_GRID_W;
			h = 9.5 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_gangsUpdateUI";
		};

		class RscListbox_1501: RscListbox {
			idc = 1501;
			x = 26.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 9.5 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_gangsUpdateUI";
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Gangs"; //--- ToDo: Localize;
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = "Members"; //--- ToDo: Localize;
			x = 26.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Join"; //--- ToDo: Localize;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "[(lbCurSel 1500), true] call daylight_fnc_gangsJoinGang";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Create"; //--- ToDo: Localize;
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "[] spawn daylight_fnc_gangsCreateOpenUI";
		};

		class RscShortcutButton_1702: RscShortcutButton {
			idc = 1702;
			text = "Leave"; //--- ToDo: Localize;
			x = 23 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "true call daylight_fnc_gangsLeaveGang";
		};

		class RscShortcutButton_1703: RscShortcutButton {
			idc = 1703;

			text = "Lock"; //--- ToDo: Localize;

			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "call daylight_fnc_gangsLockToggle";
		};

		class RscShortcutButton_1704: RscShortcutButton {
			idc = 1704;
			text = "Kick"; //--- ToDo: Localize;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "call daylight_fnc_gangsKickFromGang";
		};
	};
};

class CreateGang {
	idd = 000000038;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; daylight_bCreateGangDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false; daylight_bCreateGangDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 5.5 * GUI_GRID_H;
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			text = "Create a gang"; //--- ToDo: Localize;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 7 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Create"; //--- ToDo: Localize;
			x = 23 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "(ctrlText 1400) call daylight_fnc_gangsCreate";
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Gang name:"; //--- ToDo: Localize;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;

			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 9.35 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iGangNameMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iGangNameMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Cancel"; //--- ToDo: Localize;
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0; daylight_bCreateGangDialogOpen = false; false call daylight_fnc_gangsOpenUI";
		};
	};
};

class BuyGear {
	idd = 000000039;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 27.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 27.5 * GUI_GRID_W;
			h = 16 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;

			text = "Weapons"; //--- ToDo: Localize;

			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;

			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 11.5 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;

			text = "Ammo"; //--- ToDo: Localize;

			x = 16.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;

			text = "Items"; //--- ToDo: Localize;

			x = 25.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class RscListbox_1501: RscListbox {
			idc = 1501;

			x = 16.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 11.5 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscListbox_1502: RscListbox {
			idc = 1502;

			x = 25.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 11.5 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			text = "Buy"; //--- ToDo: Localize;

			x = 29 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			text = "Cancel"; //--- ToDo: Localize;

			x = 23.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;

			text = "1"; //--- ToDo: Localize;

			x = 18 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
	};
};

class ProcessItems {
	idd = 000000040;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			text = ""; //--- ToDo: Localize;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 17.5 * GUI_GRID_H;
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;

			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 14.5 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			text = "Process"; //--- ToDo: Localize;

			x = 23.5 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0; [daylight_iProcessUnitIndexCurrent, parseNumber(lbData [1500, (lbCurSel 1500)])] spawn daylight_fnc_processProcessItems";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			text = "Cancel"; //--- ToDo: Localize;

			x = 18.5 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};
	};
};

class PresidentMenu {
	idd = 000000041;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "President menu"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 17.25 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Set Taxes"; //--- ToDo: Localize;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			text = "Set Laws"; //--- ToDo: Localize;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class IGUIBack_DL_2202: IGUIBack_DL {
			idc = 2202;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 6.75 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.3};
		};

		class RscText_DL_1003: RscText_DL {
			idc = 1003;
			text = "General tax:"; //--- ToDo: Localize;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscSlider_1900: RscXSlider {
			idc = 1900;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 7 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			onSliderPosChanged = "_this call daylight_fnc_presidentMenuUpdateUI";
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iPresidentLawMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iPresidentLawMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1401: RscEdit {
			idc = 1401;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iPresidentLawMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iPresidentLawMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1402: RscEdit {
			idc = 1402;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iPresidentLawMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iPresidentLawMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscEdit_1403: RscEdit {
			idc = 1403;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iPresidentLawMaxLen] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iPresidentLawMaxLen] call daylight_fnc_limitRscEditInputLen";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Update"; //--- ToDo: Localize;
			x = 23.5 * GUI_GRID_W + GUI_GRID_X;
			y = 18.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "[ctrlText 1400, ctrlText 1401, ctrlText 1402, ctrlText 1403, sliderPosition 1900] call daylight_fnc_presidentUpdateSave";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Cancel"; //--- ToDo: Localize;
			x = 18.5 * GUI_GRID_W + GUI_GRID_X;
			y = 18.25 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0";
		};
	};
};

class VoteForPlayer {
	idd = 000000042;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			text = "Vote for President";
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;

			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 17.5 * GUI_GRID_H;

			colorBackground[] = {0,0,0,0.75};
		};

		class RscListbox_1500: RscListBox {
			idc = 1500;

			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 14.5 * GUI_GRID_H;

			onLbSelChanged = "_this call daylight_fnc_shopVehicleUpdateUI";
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;

			x = 24 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			action = "(abs parseNumber(lbData [1500, lbCurSel 1500])) call daylight_fnc_presidentAddVoteClient";

			text = "Vote"; //--- ToDo: Localize;
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;

			x = 19 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0";

			text = "Cancel"; //--- ToDo: Localize;
		};
	};
};

class ShopAutoBounty {
	idd = 000000043;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = ""; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 17.5 * GUI_GRID_H;
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 14.5 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Sell"; //--- ToDo: Localize;
			x = 24 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "[abs parseNumber(lbData [1500, lbCurSel 1500]), round(abs parseNumber(ctrlText 1400))] call daylight_fnc_shopAutoBountySell";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Cancel"; //--- ToDo: Localize;
			x = 19 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;

			text = "1"; //--- ToDo: Localize;

			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;

			colorBackground[] = {0, 0.49, 1, 1};

			// Limit max lenght of input
			onKeyDown = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
			onKeyUp = "[(_this select 0), daylight_cfg_iInvMaxInputItemAmountDigits] call daylight_fnc_limitRscEditInputLen";
		};
	};
};

class AdminMenu {
	idd = 000000044;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 24 * GUI_GRID_H;
		};

		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Admin menu"; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class RscCombo_2100: RscCombo {
			idc = 2100;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 24 * GUI_GRID_H;
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;
			x = 30.5 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 23 * GUI_GRID_H;

			sizeEx = 0.75 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Player information"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Exit"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 23 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Warn player"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "call daylight_fnc_adminMenuWarnPlayer";
		};

		class RscShortcutButton_1702: RscShortcutButton {
			idc = 1702;
			text = "Freeze player"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "daylight_vehAdminMenuTarget call daylight_fnc_networkFreezePlayerToggle";
		};

		class RscShortcutButton_1703: RscShortcutButton {
			idc = 1703;
			text = "Teleport to player"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 7 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "[] spawn daylight_fnc_adminMenuTeleportToPlayer";
		};

		class RscShortcutButton_1704: RscShortcutButton {
			idc = 1704;
			text = "Enable godmode"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "call daylight_fnc_adminMenuGodmodeToggle";
		};

		class RscShortcutButton_1705: RscShortcutButton {
			idc = 1705;
			text = "Toggle view"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "call daylight_fnc_adminMenuViewToggle";
		};

		class RscShortcutButton_1706: RscShortcutButton {
			idc = 1706;
			text = "Teleport to start"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "call daylight_fnc_adminMenuTeleportToOrigPos";
		};
	};
};

class WarnPlayer {
	idd = 000000045;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Warn player"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 5 * GUI_GRID_H;
		};

		class RscEdit_1400: RscEdit {
			idc = 1400;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Message:"; //--- ToDo: Localize;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Warn player"; //--- ToDo: Localize;
			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 9 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0; (ctrlText 1400) call daylight_fnc_networkWarnPlayer; daylight_bAdminMenuWarnPlayerOpen = false";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Cancel"; //--- ToDo: Localize;
			x = 16.5 * GUI_GRID_W + GUI_GRID_X;
			y = 9 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0; daylight_bAdminMenuWarnPlayerOpen = false";
		};
	};
};

class WarnPlayerReceive {
	idd = 000000046;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	onKeyDown = "_this call daylight_fnc_handleKeyDownDisableDialogExitByKeyboard";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Warning"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 7.5 * GUI_GRID_H;
		};

		class RscText_DL_1001: RscText_DL {
			idc = 1001;
			text = "Warning from admin:"; //--- ToDo: Localize;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Ok (10)"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0.49,1,1};

			action = "closeDialog 0";
		};

		class IGUIBack_DL_2201: IGUIBack_DL {
			idc = 2201;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
		};

		class RscText_DL_1002: RscText_DL {
			idc = 1002;
			x = 12 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
		};
	};
};

class WreckingYard {
	idd = 000000047;
	movingEnable = false;

	onLoad = "daylight_bDialogOpen = true; uiNamespace setVariable [""daylight_dsplActive"", _this select 0]";
	onUnload = "daylight_bDialogOpen = false";

	class controlsBackground {};

	class objects {};

	class controls {
		class RscText_DL_1000: RscText_DL {
			idc = 1000;
			text = "Wrecking Yard"; //--- ToDo: Localize;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};
		};

		class IGUIBack_DL_2200: IGUIBack_DL {
			idc = 2200;
			x = 11 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 17.5 * GUI_GRID_H;
		};

		class RscListbox_1500: RscListbox {
			idc = 1500;
			x = 11.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 14.5 * GUI_GRID_H;
		};

		class RscShortcutButton_1700: RscShortcutButton {
			idc = 1700;
			text = "Sell"; //--- ToDo: Localize;
			x = 24 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "(daylight_arrNearVehiclesWithKeys select (lbCurSel 1500)) call daylight_fnc_wreckingYardSellVehicle";
		};

		class RscShortcutButton_1701: RscShortcutButton {
			idc = 1701;
			text = "Cancel"; //--- ToDo: Localize;
			x = 19 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0, 0.49, 1, 1};

			action = "closeDialog 0";
		};
	};
};

#define TEXT_TOP_W (10 * GRID_W * safeZoneW)
#define TEXT_TOP_H (10 * GRID_H * safeZoneH)
#define BASE_FONT_SIZE (0.5 * GRID_H)

class EzcooTest {
	idd = 000000147;
	
	class ControlsBackground {};

	class TextBox {
		type = CT_STATIC;
		style = ST_CENTER;
		text = "REVOLUTION ON JEES";
		colorText[] = {1,1,1,1};
		sizeEx = BASE_FONT_SIZE * 2;
		font = "PuristaMedium";
	};

	class Controls {
		class TextLeftTop : TextBox {
			idc = 14700;
			x = safezoneX + 0 * TEXT_TOP_W;
			y = safezoneY + 0 * TEXT_TOP_H;
			w = TEXT_TOP_W;
			h = TEXT_TOP_H;
			colorBackground[] = {0,0,0,1};
		};

		class TextRightTop : TextBox {
			idc = 14701;
			sizeEx = BASE_FONT_SIZE * 3;
			x = safezoneX + safezoneW - TEXT_TOP_W;
			y = safezoneY + 0 * TEXT_TOP_H;
			w = TEXT_TOP_W;
			h = TEXT_TOP_H;
			colorBackground[] = {1,0,0,1};
		};

		class TextLeftBottom : TextBox {
			idc = 14702;
			sizeEx = BASE_FONT_SIZE * 4;
			x = safeZoneX + 0 * TEXT_TOP_W;
			y = safezoneY + safezoneH - TEXT_TOP_H;
			w = TEXT_TOP_W;
			h = TEXT_TOP_H;
			colorBackground[] = {0,0,1,1};
		};

		class TextRightBottom : TextBox {
			idc = 14703;
			sizeEx = BASE_FONT_SIZE * 5;
			x = safeZoneX + safezoneW - TEXT_TOP_W;
			y = safezoneY + safezoneH - TEXT_TOP_H;
			w = TEXT_TOP_W;
			h = TEXT_TOP_H;
			colorBackground[] = {0,1,0,1};
		};

		class TextCenter : TextBox {
			idc = 14704;
			sizeEx = BASE_FONT_SIZE * 6;
			x = 0.5 - (TEXT_TOP_W / 2);
			y = 0.5 - (TEXT_TOP_H / 2);
			w = TEXT_TOP_W;
			h = TEXT_TOP_H;
			colorBackground[] = {0,0,0,1};
		};
	};
};
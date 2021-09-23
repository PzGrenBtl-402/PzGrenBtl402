class RscText;
class RscControlsGroupNoScrollbars;

class RscTitles {
    class GVAR(RscDisplay) {
        idd = -1;
        onLoad = QUOTE(with uiNamespace do { GVAR(display) = _this select 0 };);
        movingEnable = 0;
        duration = 60;
        fadeIn = "false";
        fadeOut = "false";
        class controls {
            class ModeControlGroup: RscControlsGroupNoScrollbars {
                idc = IDC_MODECONTROLGROUP;
                x = "3.8 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable ['IGUI_GRID_WEAPON_X',((safezoneX + safezoneW) - (10 * (((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                y = "2.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getVariable ['IGUI_GRID_WEAPON_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
                h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

                class controls {
                    class Ammo: RscText {
                        idc = IDC_AMMO;
                        colorText[] = {1, 1, 1, 1};
                        colorBackground[] = {0, 0, 0, 0};
                        x = "5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                        y = "0";
                        w = "4 * (((safezoneW / safezoneH) min 1.2) / 40)";
                        h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                        sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    };
                };
            };
        };
    };
};

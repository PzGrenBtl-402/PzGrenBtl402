#define DISABLE_FEATURE h = 0; w = 0

class RscControlsGroup {
    class VScrollbar;
    class HScrollbar;
};

class RscPicture;
class RscText;

class RscInGameUI {
    class RscUnitInfo;
    class BWA3_RscOptics_Leopard_commander: RscUnitInfo {
        class BWA3_ScriptedDisplayControlsGroup: RscControlsGroup {
            class controls {
                class VisionModeTIM;
                class VisionModeIR;
                class VisionMode;
                class VisionModeEMES;
                class VisionModeTIM_2;
                class Digit1;
                class Digit2;
                class Digit3;
                class Digit4;
                class ObserverTurret_Direction;
                class ReadyToFire;
            };
        };
    };

    // Remove switches and lights from optics
    class GVAR(RscOpticsCommander): BWA3_RscOptics_Leopard_commander {
        class BWA3_ScriptedDisplayControlsGroup: BWA3_ScriptedDisplayControlsGroup {
            class controls: controls {
                class VisionModeTIM: VisionModeTIM { DISABLE_FEATURE; };
                class VisionModeIR: VisionModeIR { DISABLE_FEATURE; };
                class VisionMode: VisionMode { DISABLE_FEATURE; };
                class VisionModeEMES: VisionModeEMES { DISABLE_FEATURE; };
                class VisionModeTIM_2: VisionModeTIM_2 { DISABLE_FEATURE; };
                class Digit1: Digit1 {};
                class Digit2: Digit2 {};
                class Digit3: Digit3 {};
                class Digit4: Digit4 {};
                class ObserverTurret_Direction: ObserverTurret_Direction { DISABLE_FEATURE; };
                class ReadyToFire: ReadyToFire { DISABLE_FEATURE; };
            };
        };
    };

    // Add horizontal compass to driver
    class GVAR(RscOptics_Driver): RscUnitInfo {
        idd = 300;
        controls[] = {
            "CA_Zeroing",
            "CA_IGUI_elements_group"
        };

        class CA_IGUI_elements_group: RscControlsGroup
        {
            idc=170;
            class VScrollbar: VScrollbar
            {
                width=0;
            };
            class HScrollbar: HScrollbar
            {
                height=0;
            };
            x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w="53.5 * 		(0.01875 * SafezoneH)";
            h="40 * 		(0.025 * SafezoneH)";
            class controls
            {
                class CA_HorizontalCompass: RscPicture
                {
                    IDC=207;
                    type=105;
                    font="EtelkaMonospacePro";
                    textSize="0.02*SafezoneH";
                    style=1;
                    color[]={0.94999999,0.94999999,0.94999999,1};
                    x="13.04 * 		(0.01875 * SafezoneH)";
                    y="8.0 * 		(0.025 * SafezoneH)";
                    w="27.18 * 		(0.01875 * SafezoneH)";
                    h="1 * 		(0.025 * SafezoneH)";
                    imageHull="A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
                    imageTurret="";
                    imageObsTurret="";
                    imageGun="";
                };
                class AzimuthMark: RscPicture
                {
                    IDC=1012;
                    text="A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
                    x="26.35 * 		(0.01875 * SafezoneH)";
                    y="7.5 * 		(0.025 * SafezoneH)";
                    w="0.5 * 		(0.01875 * SafezoneH)";
                    h="0.5 * 		(0.025 * SafezoneH)";
                    colorText[]={0.94999999,0.94999999,0.94999999,1};
                };
                class CA_Heading: RscText
                {
                    idc=156;
                    style=2;
                    sizeEx="0.032*SafezoneH";
                    shadow=0;
                    font="EtelkaMonospacePro";
                    colorText[]={0.94999999,0.94999999,0.94999999,1};
                    text="015";
                    x="25.15 * 		(0.01875 * SafezoneH)";
                    y="6.25 * 		(0.025 * SafezoneH)";
                    w="3 * 		(0.01875 * SafezoneH)";
                    h="1.2 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
};

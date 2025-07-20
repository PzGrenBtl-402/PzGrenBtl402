#define DISABLE_FEATURE h = 0; w = 0

class RscControlsGroup {
    class VScrollbar;
    class HScrollbar;
};

class RscPicture;
class RscText;

class RscInGameUI {
    class RscUnitInfo;
    class BWA3_RscOptics_Puma_gunner: RscUnitInfo {
        class BWA3_ScriptedDisplayControlsGroup: RscControlsGroup {
            class controls {
                class SelectedWeapon;
                class VisionMode;
                class CanFire;
                class Gunner_Direction;
                class Digit1;
                class Digit2;
                class Digit3;
                class Digit4;
                class IncomingMissile;
                class WeaponMode;
                class Year1;
                class Year2;
                class Year3;
                class Year4;
                class Month1;
                class Month2;
                class Day1;
                class Day2;
                class TurretDirDigit1;
                class TurretDirDigit2;
                class TurretDirDigit3;
                class ObserverDirDigit1;
                class ObserverDirDigit2;
                class ObserverDirDigit3;
                class CannonOn;
                class CannonOff;
            };
        };
    };

    // Remove date, turret eleveation, and green light (cannon on/off) from optics
    class GVAR(RscOpticsGunner): BWA3_RscOptics_Puma_gunner {
        class BWA3_ScriptedDisplayControlsGroup: BWA3_ScriptedDisplayControlsGroup {
            class controls: controls {
                class SelectedWeapon: SelectedWeapon {};
                class VisionMode: VisionMode {};
                class CanFire: CanFire {};
                class Gunner_Direction: Gunner_Direction {};
                class Digit1: Digit1 {};
                class Digit2: Digit2 {};
                class Digit3: Digit3 {};
                class Digit4: Digit4 {};
                class IncomingMissile: IncomingMissile {};
                class WeaponMode: WeaponMode {};
                class Year1: Year1 { DISABLE_FEATURE; };
                class Year2: Year2 { DISABLE_FEATURE; };
                class Year3: Year3 { DISABLE_FEATURE; };
                class Year4: Year4 { DISABLE_FEATURE; };
                class Month1: Month1 { DISABLE_FEATURE; };
                class Month2: Month2 { DISABLE_FEATURE; };
                class Day1: Day1 { DISABLE_FEATURE; };
                class Day2: Day2 { DISABLE_FEATURE; };
                class TurretDirDigit1: TurretDirDigit1 {};
                class TurretDirDigit2: TurretDirDigit2 {};
                class TurretDirDigit3: TurretDirDigit3 {};
                class ObserverDirDigit1: ObserverDirDigit1 {};
                class ObserverDirDigit2: ObserverDirDigit2 {};
                class ObserverDirDigit3: ObserverDirDigit3 {};
                class CannonOn: CannonOn { DISABLE_FEATURE; };
                class CannonOff: CannonOff { DISABLE_FEATURE; };
            };
        };
    };

    class BWA3_RscOptics_Puma_commander: RscUnitInfo {
        class BWA3_ScriptedDisplayControlsGroup: RscControlsGroup {
            class controls {
                class SelectedWeapon;
                class VisionMode;
                class CanFire;
                class Digit1;
                class Digit2;
                class Digit3;
                class Digit4;
                class ObserverTurret_Direction;
                class IncomingMissile;
                class WeaponMode;
                class Year1;
                class Year2;
                class Year3;
                class Year4;
                class Month1;
                class Month2;
                class Day1;
                class Day2;
                class TurretDirDigit1;
                class TurretDirDigit2;
                class TurretDirDigit3;
                class ObserverDirDigit1;
                class ObserverDirDigit2;
                class ObserverDirDigit3;
                class GunOn;
                class GunOff;
                class TurretOn;
                class TurretOff;
                class ViewMode1;
                class ViewMode2;
                class ViewMode3;
                class ViewMode4;
            };
        };
    };

    // Remove date from optics
    class GVAR(RscOpticsCommander): BWA3_RscOptics_Puma_commander {
        class BWA3_ScriptedDisplayControlsGroup: BWA3_ScriptedDisplayControlsGroup {
            class controls: controls {
                class SelectedWeapon: SelectedWeapon {};
                class VisionMode: VisionMode { DISABLE_FEATURE; };
                class CanFire: CanFire {};
                class Digit1: Digit1 {};
                class Digit2: Digit2 {};
                class Digit3: Digit3 {};
                class Digit4: Digit4 {};
                class ObserverTurret_Direction: ObserverTurret_Direction { DISABLE_FEATURE; };
                class IncomingMissile: IncomingMissile {};
                class WeaponMode: WeaponMode {};
                class Year1: Year1 { DISABLE_FEATURE; };
                class Year2: Year2 { DISABLE_FEATURE; };
                class Year3: Year3 { DISABLE_FEATURE; };
                class Year4: Year4 { DISABLE_FEATURE; };
                class Month1: Month1 { DISABLE_FEATURE; };
                class Month2: Month2 { DISABLE_FEATURE; };
                class Day1: Day1 { DISABLE_FEATURE; };
                class Day2: Day2 { DISABLE_FEATURE; };
                class TurretDirDigit1: TurretDirDigit1 {};
                class TurretDirDigit2: TurretDirDigit2 {};
                class TurretDirDigit3: TurretDirDigit3 {};
                class ObserverDirDigit1: ObserverDirDigit1 {};
                class ObserverDirDigit2: ObserverDirDigit2 {};
                class ObserverDirDigit3: ObserverDirDigit3 {};
                class GunOn: GunOn { DISABLE_FEATURE; };
                class GunOff: GunOff { DISABLE_FEATURE; };
                class TurretOn: TurretOn { DISABLE_FEATURE; };
                class TurretOff: TurretOff { DISABLE_FEATURE; };
                class ViewMode1: ViewMode1 { DISABLE_FEATURE; };
                class ViewMode2: ViewMode2 { DISABLE_FEATURE; };
                class ViewMode3: ViewMode3 { DISABLE_FEATURE; };
                class ViewMode4: ViewMode4 { DISABLE_FEATURE; };
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

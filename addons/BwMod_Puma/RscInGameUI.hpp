#define DISABLE_FEATURE h = 0; w = 0

class RscControlsGroup;

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
};

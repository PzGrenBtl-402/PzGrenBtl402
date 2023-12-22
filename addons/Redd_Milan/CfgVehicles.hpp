class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets {
            class MainTurret;
        };
        class EventHandlers;
    };
    class StaticATWeapon: StaticWeapon {};

    class Redd_Milan_Static_Base: StaticATWeapon {
        getInAction = "PlayerProne";
        getOutAction = "PlayerProne";

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerGetInAction = "PlayerProne";
                gunnerGetOutAction = "PlayerProne";
                magazines[] = {}; //Waffe ohne Patrone
                turretInfoType = QEGVAR(Redd_Main,RSC_Milan);

                class OpticsIn {
                    class Day1 {
                        visionMode[] = {"Normal"};
                    };

                    class Day2 {
                        visionMode[] = {"Normal"};
                    };
                };
            };
        };

        class AnimationSources {
            class ReloadMagazine {
                source = "user";  //Hide-Animation auf User-Kontrolle umschreiben, um sie über Eventhandler kontrollieren zu können
                AnimPeriod = 0;
            };
        };

        class EventHandlers: EventHandlers {
            init = "_this select 0 animateSource ['ReloadMagazine', 1, true]; _this call redd_fnc_milan_init"; // Patrone verstecken, wenn Waffe aufgebaut wird
            fired = "_this select 0 animateSource ['ReloadMagazine', 1, true]; _this call redd_fnc_milan_fired"; //Patrone an der Waffe selbst verstecken, gleichzeitig RnT Funktion weiterhin aufrufen
            reloaded = "_this select 0 animateSource ['ReloadMagazine', 0, true]"; //Patrone wieder anzeigen, sobald nachgeladen wird
        };

        delete assembleInfo;  //Disassembly Action komplett entfernen, da über den WeaponDisassembled EH nicht der Munitionsstand der Waffe abgerufen werden kann

        class UserActions {
            class Disassemble {
                displayName = ECSTRING(Milan,disassemble);
                priority = 5;
                position = "actionPoint";
                radius = 5;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "alive this && (count magazines this) isEqualTo 0 && (count crew this) isEqualTo 0";
                statement = QUOTE(this call FUNC(disassemble));
            };
        };
    };

    class Bag_Base;
    class Weapon_Bag_Base: Bag_Base {};

    class Redd_Milan_Static_Barrel: Weapon_Bag_Base {
        mass = 265; //Realistisches Gewicht Patrone
        delete assembleInfo;
    };

    class Redd_Milan_Static_Tripod: Bag_Base {
        mass = 671; //Realistisches Gewicht Waffe mit MIRA WBG

        class assembleInfo {
            displayName = "$STR_Redd_Milan";
            assembleTo = "Redd_Milan_Static";
            dissasembleTo[] = {};
            base = "";
            primary = 1;
        };
    };
};

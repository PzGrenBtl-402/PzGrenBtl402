class CfgVehicles {
    class NonStrategic;
    class Land_Razorwire_F: NonStrategic {
        class UserActions {
            class GM_UseBoltCutters {
                condition = "(alive this) && {!(this getVariable ['gm_noBoltCutting', false])} && {'gm_boltcutter' in ([call CBA_fnc_currentUnit] call CBA_fnc_uniqueUnitItems)}";
                displayName = "$STR_DN_GM_BOLTCUTTER_PREPARE";
                displayNameDefault = "<img image='\gm\gm_weapons\gm_items\data\ui\holdaction_boltcutter_ca.paa' size='2.5' />";
                hideOnUse = 1;
                onlyForPlayer = 1;
                priority = 10;
                position = "";
                radius = 2.5;
                shortcut = "";
                showWindow = 0;
                statement = "[this] call gm_boltcutter_fnc_addAction;";
            };
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class PzGrenBtl402_Grenades {
                    displayName = CSTRING(FragCategory);
                    icon = QPATHTOF(data\ui\grenade_icon.paa);
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    insertChildren = QUOTE(call FUNC(getGrenadeChildren));
                    condition = "true";
                    statement = "";
                };
            };
        };
    };
};

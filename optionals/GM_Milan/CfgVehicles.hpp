class CfgVehicles
{
    class StaticWeapon;
    class gm_staticWeapon_base: StaticWeapon
    {
        class Turrets
        {
            class MainTurret;
        };
    };
    class gm_staticATGM_base: gm_staticWeapon_base {};

    class gm_milan_launcher_tripod_base: gm_staticATGM_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                magazines[] = {}; //Waffe ohne Patrone
            };
        };

        delete assembleInfo;  //Disassembly Action komplett entfernen, da über den WeaponDisassembled EH nicht der Munitionsstand der Waffe abgerufen werden kann

        class UserActions
        {
            class Disassemble
            {
                displayName = CSTRING(disassembleAction);
                priority = 3;
                position = "actionPoint";
                radius = 5;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "alive this && count magazines this isEqualTo 0 && count crew this isEqualTo 0";
                statement = "deleteVehicle this; player addBackpackGlobal 'gm_milan_launcher_weaponBag';";
            };
        };
    };
};

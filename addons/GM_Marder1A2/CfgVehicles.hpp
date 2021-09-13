class CfgVehicles
{
    class gm_tracked_base;
    class gm_tracked_APC_base: gm_tracked_base
    {
        class Turrets;
    };

    class gm_marder1_base: gm_tracked_APC_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };

    class gm_marder1a0_base: gm_marder1_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };

    class gm_marder1a1_base: gm_marder1a0_base
    {
        class MachineGunTurret_base;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class MilanTurret_01;
                };
            };
        };
    };

    class gm_marder1a2_base: gm_marder1a1_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class MilanTurret_01: MilanTurret_01
                    {
                        magazines[] = {};
                    };
                };
            };
        };
    };
};

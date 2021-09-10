class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{
    class gm_missileLauncher_base;
    class gm_milan_launcher_base: gm_missileLauncher_base
    {
        autoReload = 1;
        magazineReloadTime = 0.1; //Armanachladezeit möglichst gering, um Ein-, Aussteigebug zu umgehen
    };
};

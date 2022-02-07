class CfgSoundEffects
{
    class AttenuationsEffects
    {
        class TankAttenuation
        {
            // Set to 2 to disable any attenuation between players which are turned out and turned in.
            // Normally 0.5 of this value is applied. (0 = No attenuation, 1 = Max attenuation)
            // https://github.com/IDI-Systems/acre2/blob/master/addons/sys_attenuate/fnc_getUnitAttenuate.sqf#L51
            acreAttenuation = 2;
        };
    };
};

class CfgSounds {
    class BWA3_IncomingMissileWarning {
        sound[] = {"\bwa3_common\sounds\warning_incomingMissile.wss", 0, 1}; // Mute
        titles[] = {};
    };

    class GVAR(IncomingMissileWarning) {
        sound[] = {"\bwa3_common\sounds\warning_incomingMissile.wss", 4, 1};
        titles[] = {};
    };
};

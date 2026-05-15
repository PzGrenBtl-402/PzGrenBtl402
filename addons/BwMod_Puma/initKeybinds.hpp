// Overwrite BWA3 keybind
[{
    !isNil {["BWA3", "BWA3_rearViewCamera"] call CBA_fnc_getKeybind}
}, {
    [
        "BWA3",
        "BWA3_rearViewCamera",
        LSTRING(rearViewCamera_next),
        {[1] call FUNC(toggleCamera)},
        "",
        [0xC7, [true, false, false]] // Shift + Home / Pos1
    ] call CBA_fnc_addKeybind;

    [
        "BWA3",
        "BWA3_rearViewCamera_previous",
        LSTRING(rearViewCamera_previous),
        {[-1] call FUNC(toggleCamera)},
        "",
        [0xCF, [true, false, false]] // Shift + End
    ] call CBA_fnc_addKeybind;
}] call CBA_fnc_waitUntilAndExecute;

private _category = [LELSTRING(Main,category), LLSTRING(catergory)];
[
    _category,
    QGVAR(toggleMuss),
    [LLSTRING(toggleMuss), LLSTRING(toggleMuss_description)],
    {[] call FUNC(toggleMussMode)},
    "",
    [DIK_INSERT, [false, false, false]] // Insert
] call CBA_fnc_addKeybind;

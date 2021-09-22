# Building PzGrenBtl402 from source (HEMTT)

## Requirements

- Arma 3
- Arma 3 Tools (available on Steam)
- Run Arma 3 and Arma 3 Tools directly from Steam once to install registry entries (and again after every update)
- [Windows] PowerShell v5.0+

## Setup and Building

### Initial Setup

Execute `setup.bat` in `tools` folder (Windows) or download [this HEMTT binary](https://github.com/BrettMayson/HEMTT/releases/latest) and place hemtt in project root (Linux).

#### File Patching Setup

*Not available on Linux as there is no officially supported Arma 3 client for Linux.*

Create the following links manually. First, create `z` folder in your Arma 3 directory. Then run the following command as admin, replacing the text in brackets with the appropriate paths:
```cmd
mklink /J "[Arma 3 installation folder]\z\PzGrenBtl402" "[location of the PzGrenBtl402 project]"
```

### Create a Test Build

To create a development build to test changes or to debug something, execute `build.bat` (Windows) or run `$ hemtt build` (Linux) in the root folder. This will populate the `addons` folder with PBOs. These PBOs still point to the source files in their respective folders however, which allows you to use [file patching](#file-patching). This also means that you cannot distribute this build to others.

### Create a Release Build

To create a complete build that you can use without the source files, execute `build_release.bat` (Windows) or run `$ hemtt build --release -f` (Linux) in the root folder. This will populate the release folder with binarized PBOs that you can redistribute. These handle like those of any other mod.

## File Patching

File Patching allows you to change the files in an addon while the game is running, requiring only a restart of the mission. This makes it great for debugging, as it cuts down the time required between tests. Note that this only works with PBOs created using the `build.bat`.

To run Arma 3 with file patching add the `-filePatching` startup parameter.

Files must exist in the built PBOs for file patching to work. If you create a new file you must rebuild the PBO or Arma will not find it in your file paths.

### Disable CBA Function Caching

By default CBA caches a compiled version of functions to reduce mission load times. This interferes with [file patching](#file-patching). You can disable caching for a single module. To do that you need add the following line or remove the comment in the `script_component.hpp` file of said module:
```
#define DISABLE_COMPILE_CACHE
```

### Restrictions

Configs are not patched during run time, only at load time. You do not have to rebuild a PBO to make config changes, just restart Arma.

## Credit
This guide was taken from [CBA](https://github.com/CBATeam/CBA_A3/wiki/Building-CBA-from-source-(HEMTT)) and modified for internal use.

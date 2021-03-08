# Building the mod

To build the mod simply open the **Powershell** *(SHIFT + RMB in the directory explorer)* in the `.\tools\` directory and execute:
```
PS C:\PzGrenBtl402\tools> .\build.ps1
``` 

This will build all addons in the `.\addons\` directory to non-binarized pbos, sign them and pack them into a complete mod in `.\release\`.

## Help

Use the `Get-Help` command to see the manual for the script:
```
PS C:\PzGrenBtl402\tools> Get-Help .\build.ps1 -Full
``` 


## Advance usage

To binarize the pbos use the `-Binarize` argument:
```
PS C:\PzGrenBtl402\tools> .\build.ps1 -Binarize
``` 


You can also specify the addons to build with the `-Modules` argument:
```
PS C:\PzGrenBtl402\tools> .\build.ps1 -Modules PzGrenBtl402_BwMod_Dingo,PzGrenBtl402_BwMod_Eagle
```
This will build only the *PzGrenBtl402_BwMod_Dingo* and *PzGrenBtl402_BwMod_Eagle* addons.


To clear the release directory from previous builds, use the `-Clear` argument:
```
PS C:\PzGrenBtl402\tools> .\build.ps1 -Clear
```
If you don't clear the release directory before the next build, all older files will remain.

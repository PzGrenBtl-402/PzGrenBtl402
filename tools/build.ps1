<#
.SYNOPSIS
    Packs the addons in the addons directory into a complete Arma 3 mod.
.DESCRIPTION
    Builds the addons in the addons directory to Arma 3 pbo files and signes them. Those files are packed into a complete mod and zip archive.
.EXAMPLE
    PS C:\> .\build.ps1
    Builds all addons into non-binarized pbos and packs them into a complete mod.
.EXAMPLE
    PS C:\> .\build.ps1 -Binaraize -Clear -Modules PzGrenBtl402_BwMod_Dingo,PzGrenBtl402_BwMod_Eagle
    Builds only the addons PzGrenBtl402_BwMod_Dingo and PzGrenBtl402_BwMod_Eagle into binarized pbos. The release directory is cleared before packing it to a complete mod.
.NOTES
    This build script searches for addons only in the addons directoy.
    Version: 1.0
    Author: Timi007
    License: MIT
#>

# MIT License

# Copyright (c) 2021 Timi007

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

[CmdletBinding()]
param (
    [Parameter(HelpMessage="Binarizes all addons during build.")]
    [Switch]
    $Binaraize = $false,

    [Parameter(HelpMessage="Does not clear the release directory from previous builds.")]
    [Switch]
    $Keep = $false,

    [Parameter(HelpMessage="Exludes all addons having GM in its name.")]
    [Switch]
    $ExcludeGM = $false,

    [Parameter(HelpMessage="A list of the directory names in addons which should be build. If not specifed all addons will be built.")]
    [String[]]
    $Modules,

    [Parameter(HelpMessage="Files to include into the finished mod root directory.")]
    [String[]]
    $Include = @("mod.cpp", "PzGrenBtl402_Logo.paa", "README.md", "LICENSE"),

    [Parameter(HelpMessage="The name of the mod directory.")]
    [String]
    $ModName = "PzGrenBtl402"
)

function Write-Host-And-File {
    param (
        [Parameter(Mandatory)]
        [string] $Path,

        [Parameter(Mandatory)]
        [string] $Value
    )

    Write-Host $Value
    Add-Content -Path $Path -Encoding utf8 -Value $Value
}

$tools = $PSScriptRoot
Set-Location $tools
$root = Resolve-Path ..\.

# Get Arma 3 Tools path from the registry
$arma3ToolsPath = (Get-ItemProperty -Path "Registry::HKEY_CURRENT_USER\SOFTWARE\Bohemia Interactive\arma 3 tools" -Name path).Path
if (!$arma3ToolsPath) {
    Write-Host "Arma 3 tools not found." -ForegroundColor Red
    exit 1
}

# Build Addon Builder path
$addonBuilder = Join-Path (Join-Path $arma3ToolsPath "AddonBuilder") "AddonBuilder.exe"
if (!(Test-Path $addonBuilder)) {
    Write-Host "Addon Builder does not exit at $addonBuilder" -ForegroundColor Red
    exit 2
}
Write-Host "Found AddonBuilder at $addonBuilder"

$dsCreateKey = Join-Path (Join-Path $arma3ToolsPath "DSSignFile") "DSCreateKey.exe"
if (!(Test-Path $dsCreateKey)) {
    Write-Host "DS Create Key does not exit at $dsCreateKey" -ForegroundColor Red
    exit 3
}
Write-Host "Found DS Create Key at $dsCreateKey"

# Create release directory
Write-Host "Creating release directory if necessary..."
$release = New-Item -ItemType Directory -Path (Join-Path $root "release") -Force

# Clear release directory if not otherwise specified
if (!$Keep) {
    Remove-Item $release -Recurse -Force -ErrorAction Ignore
    Write-Host "Cleared release directory $release."
}

# Create @PzGrenBtl402 Mod directory
$modDir = New-Item -ItemType Directory -Path (Join-Path $release "@$ModName") -Force

# Create @PzGrenBtl402/addons directory
$destAddonsDir = New-Item -ItemType Directory -Path (Join-Path $modDir "addons") -Force

if (!$ExcludeGM) {
    # Create @PzGrenBtl402/optionals directory
    $optionalAddonsDir = New-Item -ItemType Directory -Path (Join-Path $modDir "optionals") -Force
}

# Copy all files defined in includeFiles to mod directory
foreach ($file in $Include) {
    Copy-Item -Path (Join-Path $root $file) -Destination $modDir -Force
}
Write-Host "Copied included files to mod directory."


Write-Host "Creating signing key..."
$privateKeys = New-Item -ItemType Directory -Path (Join-Path $tools "private_keys") -Force
$today = "$(Get-Date -Format "yyyy-MM-dd")"
$keyName = "$($ModName)_$($today)"

# Create private key in private_keys directory
$cwd = Get-Location
Set-Location $privateKeys
& $dsCreateKey $keyName
Set-Location $cwd

$publicKey = Join-Path $privateKeys "$keyName.bikey"
$privateKey = Join-Path $privateKeys "$keyName.biprivatekey"

# Create keys directory in mod directory
$keys = Join-Path $modDir "keys"
Remove-Item $keys -Recurse -Force -ErrorAction Ignore
$keys = New-Item -ItemType Directory -Path $keys -Force
Copy-Item -Path $publicKey -Destination $keys

# Create build log
$logs = New-Item -ItemType Directory -Path (Join-Path $tools "logs") -Force
$logFile = New-Item -ItemType File -Path (Join-Path $logs "build.log") -Force
Clear-Content -Path $logFile

$numberOfErrors = 0
$dirsProcessed = 0

# Get all dirs or only dirs which were specificed in the modules arg
$dirsToBuild = Get-ChildItem (Join-Path $root "addons") -Directory |
    Where-Object {(!$Modules) -or ($Modules -contains $_.Name)}

foreach ($dir in $dirsToBuild) {
    $percentage = $dirsProcessed / $dirsToBuild.Length * 100
    $dirsProcessed++
    $complete = $percentage.ToString("#.#")

    $isGMDir = $dir.Name -like "*_GM_*"

    if ($ExcludeGM -and $isGMDir) {
        Write-Progress -Activity "Ignoring $dir..." -Status "$complete% Complete:" -PercentComplete $percentage
        continue
    }

    Write-Progress -Activity "Building $dir..." -Status "$complete% Complete:" -PercentComplete $percentage

    $absDir = $dir.FullName

    $pboPrefixFile = Get-ChildItem $absDir -Filter `$PBOPREFIX`$

    if (!$pboPrefixFile) {
        Write-Host "$dir failed to build. $dir has no PBOPREFIX file. Ignoring it." -ForegroundColor Red
        $numberOfErrors++
        continue
    }

    $pboPrefix = Get-Content -Path $pboPrefixFile.FullName

    Write-Host-And-File -Path $logFile -Value "`nBuilding $dir with prefix `"$pboPrefix`"..."

    $destDir = If ($isGMDir) {$optionalAddonsDir} else {$destAddonsDir}

    # Build pbo
    if ($Binaraize) {
        & $addonBuilder "$absDir" "$destDir" -clear -prefix="$pboPrefix" -sign="$privateKey" | Out-File -FilePath $logFile -Append -Encoding utf8
    } else {
        & $addonBuilder "$absDir" "$destDir" -clear -packonly -prefix="$pboPrefix" -sign="$privateKey" | Out-File -FilePath $logFile -Append -Encoding utf8
    }

    if (($LASTEXITCODE -ne 0) -or !(Test-Path (Join-Path $destDir $dir".pbo"))) {
        Write-Host "Build failed. Could not pack $dir to pbo." -ForegroundColor Red
        $numberOfErrors++
        continue
    }

    Write-Host "$dir successfully build." -ForegroundColor Green
}

# Zip mod directory
Write-Host "`nZipping mod directory..."
Compress-Archive -Path $modDir -DestinationPath (Join-Path $release "$($modDir.Name)_$($today)") -Force

if ($numberOfErrors -eq 0) {
    Write-Host "Finished building mod with 0 errors." -ForegroundColor Green
} else {
    Write-Host "Finished building mod with $numberOfErrors errors." -ForegroundColor Red
    Write-Host "See `"$logfile`" for more information."
}


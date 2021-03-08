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
#>
[CmdletBinding()]
param (
    [Parameter(HelpMessage="Binarizes all addons during build.")]
    [Switch]
    $Binaraize = $false,

    [Parameter(HelpMessage="Clears the release directory from previous builds.")]
    [Switch]
    $Clear = $false,

    [Parameter(HelpMessage="A list of the directory names in addons which should be build. If not specifed all addons will be built.")]
    [String[]]
    $Modules,

    [Parameter(HelpMessage="Files to include into the finished mod root directory.")]
    [String[]]
    $Include = @("mod.cpp", "PzGrenBtl402_Logo.paa", "README.md"),

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

Write-Host "Creating release directory..."

# Create release directory
$release = New-Item -ItemType Directory -Path (Join-Path $root "release") -Force

# Create @PzGrenBtl402 Mod directory
$modDir = New-Item -ItemType Directory -Path (Join-Path $release "@$ModName") -Force

if ($Clear) {
    Remove-Item $modDir -Recurse -Force -ErrorAction Ignore
}

# Create @PzGrenBtl402/addons directory
$destAddonsDir = New-Item -ItemType Directory -Path (Join-Path $modDir "addons") -Force

# Copy all files defined in includeFiles to mod directory
foreach ($file in $Include) {
    Copy-Item -Path (Join-Path $root $file) -Destination $modDir -Force
}

Write-Host "Copied included files and keys to release directory."

# Get Arma 3 Tools path from the registry
$arma3ToolsPath = (Get-ItemProperty -Path "Registry::HKEY_CURRENT_USER\SOFTWARE\Bohemia Interactive\arma 3 tools" -Name path).Path
if (!$arma3ToolsPath) {
    Write-Host "Arma 3 tools not found." -ForegroundColor Red
    exit 1
}

# Build Addon Builder path
$addonBuilder = Join-Path (Join-Path $arma3ToolsPath "AddonBuilder") "AddonBuilder.exe"
Write-Host "Found AddonBuilder at $addonBuilder"

$privateKeys = New-Item -ItemType Directory -Path (Join-Path $tools "private_keys") -Force
$dsCreateKey = Join-Path (Join-Path $arma3ToolsPath "DSSignFile") "DSCreateKey.exe"

$keyName = "$($ModName)_$(Get-Date -Format "yyyy-MM-dd")"

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
$dirsToBuild = Get-ChildItem (Join-Path $root "addons") -Directory | Where-Object {(!$Modules) -or ($Modules -contains $_.Name)}

foreach ($dir in $dirsToBuild) {
    $percentage = $dirsProcessed / $dirsToBuild.Length * 100
    $complete = $percentage.ToString("#.#")
    Write-Progress -Activity "Building $dir..." -Status "$complete% Complete:" -PercentComplete $percentage
    $dirsProcessed++

    $absDir = $dir.FullName

    $pboPrefixFile = Get-ChildItem $absDir -Filter `$PBOPREFIX`$

    if (!$pboPrefixFile) {
        Write-Host "$dir failed to build. $dir has no PBOPREFIX file. Ignoring it." -ForegroundColor Red
        $numberOfErrors++
        continue
    }

    $pboPrefix = Get-Content -Path $pboPrefixFile.FullName

    Write-Host-And-File -Path $logFile -Value "`nBuilding $dir with prefix $pboPrefix..."

    # Build pbo
    if ($Binaraize) {
        & $addonBuilder "$absDir" "$destAddonsDir" -clear -prefix="$pboPrefix" -sign="$privateKey" | Out-File -FilePath $logFile -Append -Encoding utf8
    } else {
        & $addonBuilder "$absDir" "$destAddonsDir" -clear -packonly -prefix="$pboPrefix" -sign="$privateKey" | Out-File -FilePath $logFile -Append -Encoding utf8
    }

    if (($LASTEXITCODE -ne 0) -or !(Test-Path (Join-Path $destAddonsDir $dir".pbo"))) {
        Write-Host "Build failed. Could not pack $dir to pbo." -ForegroundColor Red
        $numberOfErrors++
        continue
    }

    Write-Host "$dir successfully build." -ForegroundColor Green
}

# Zip mod directory
Write-Host "`nZipping mod directory..."
Compress-Archive -Path $modDir -DestinationPath (Join-Path $release $modDir.Name) -Force

if ($numberOfErrors -eq 0) {
    Write-Host "Finished building mod with 0 errors." -ForegroundColor Green
} else {
    Write-Host "Finished building mod with $numberOfErrors errors." -ForegroundColor Red
    Write-Host "See `"$logfile`" for more information."
}


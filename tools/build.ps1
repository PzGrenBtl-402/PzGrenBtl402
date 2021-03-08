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


$includeFiles = @("mod.cpp", "PzGrenBtl402_Logo.paa", "README.md")

$root = Resolve-Path ..\.

Write-Host "Creating release directory..."

# Create release directory
$release = New-Item -ItemType Directory -Path (Join-Path $root "release") -Force

# Create @PzGrenBtl402 Mod directory
$modDir = New-Item -ItemType Directory -Path (Join-Path $release "@PzGrenBtl402") -Force

# Create @PzGrenBtl402/addons directory
$destAddonsDir = New-Item -ItemType Directory -Path (Join-Path $modDir "addons") -Force

# Copy BI keys to @PzGrenBtl402/keys
Remove-Item -Path (Join-Path $modDir "keys") -Recurse -ErrorAction Ignore
Copy-Item -Path (Join-Path $root "keys") -Destination (Join-Path $modDir "keys") -Recurse -Force

# Copy all files defined in includeFiles to mod directory
foreach ($file in $includeFiles) {
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

$logs = New-Item -ItemType Directory -Path (Join-Path $root "logs") -Force
$logFile = Join-Path $logs "build.log"
Clear-Content -Path $logFile

$numberOfErrors = 0
$dirsProcessed = 0
$dirsToBuild = Get-ChildItem (Join-Path $root "addons") -Directory

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
    & $addonBuilder "$absDir" "$destAddonsDir" -clear -packonly -prefix="$pboPrefix" | Out-File -FilePath $logFile -Append -Encoding utf8

    if ($LASTEXITCODE -ne 0) {
        Write-Host "Build failed. Could not pack $dir to pbo." -ForegroundColor Red
        $numberOfErrors++
    } else {
        Write-Host "$dir successfully build." -ForegroundColor Green
    }
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


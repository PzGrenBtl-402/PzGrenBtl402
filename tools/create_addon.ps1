$tools = $PSScriptRoot
Set-Location $tools
$root = Resolve-Path ..\.

Write-Host "Addon name"
$addonName = Read-Host -Prompt "Enter name of new addon (case-sensitive)"
$addonNameBeautified = $addonName -replace "_", " "

$options = '&Yes', '&No'
$default = 0  # 0=Yes, 1=No
$addonContainsOnlyConfig = $Host.UI.PromptForChoice("Addon template", "Addon contains only config changes?", $options, $default)
$useConfigTemplate = $addonContainsOnlyConfig -eq 0

$extras = Join-Path $root "extras"
$addons = Join-Path $root "addons"
$newAddon = Join-Path $addons $addonName

if (Test-Path $newAddon) {
    Write-Error "=> $addonName already exits."
    exit 1
}

$templateFolder = if ($useConfigTemplate) {
    Write-Host "=> Using config template"
    Join-Path $extras "blank_config"
} else {
    Write-Host "=> Using standard template"
    Join-Path $extras "blank"
}

Write-Output "=> Copying template addon ..."
Copy-Item -Path $templateFolder -Destination $newAddon -Recurse

Write-Output "=> Setting addon name and addon prefix ..."

try {
    foreach ($file in Get-ChildItem $newAddon -Recurse) {
        if (Test-Path $file.PSPath -PathType Container) {
            continue
        }

        (Get-Content $file.PSPath) |
        ForEach-Object {
            $_ -creplace "blank", $addonName `
               -creplace "Blank", $addonNameBeautified `
               -creplace "BLANK", $addonName.ToUpper()
        } |
        Set-Content $file.PSPath
    }
}
catch {
    Write-Error "=> Could not access files in $newAddon."

    Remove-Item -Path $newAddon -Recurse -Force

    exit 2
}

Write-Output "=> Successfully created $addonName!"

Write-Host "Press any key to continue ..."
[void][System.Console]::ReadKey($true)

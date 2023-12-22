;@Findstr -bv ;@F "%~f0" | powershell -Command - & pause & goto:eof

# Unzip backwards compatibility (Windows 8)
Add-Type -AssemblyName System.IO.Compression.FileSystem
function Unzip {
    param([string]$zipfile, [string]$outpath)

    [System.IO.Compression.ZipFile]::ExtractToDirectory($zipfile, $outpath)
}

[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12
$client = New-Object Net.WebClient

Write-Output "=> Downloading tools ..."
$url = "https://github.com/BrettMayson/HEMTT/releases/latest/download/windows-x64.zip"
$client.DownloadFile($url, "hemtt.zip")
$client.dispose()

Write-Output "=> Cleaning old tools ..."
Remove-Item "..\hemtt" -ErrorAction Ignore
Remove-Item "..\hemtt.exe" -ErrorAction Ignore
Remove-Item "..\ArmaScriptCompiler.exe" -ErrorAction Ignore

Write-Output "=> Extracting ..."
Unzip "hemtt.zip" "..\."
Remove-Item "hemtt.zip"

Write-Output "=> Verifying ..."
Start-Process -FilePath ..\hemtt.exe -ArgumentList --version -NoNewWindow -Wait

Write-Output "=> Tools successfully installed to project!"

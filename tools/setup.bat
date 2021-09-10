;@Findstr -bv ;@F "%~f0" | powershell -Command - & pause & goto:eof

[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12
$client = New-Object Net.WebClient

Write-Output "=> Creating Temp working directory ..."
New-Item -ItemType Directory -Path ".\temp" -Force | Out-Null

Write-Output "=> Downloading HEMTT (Windows) ..."
$client.DownloadFile("https://github.com/BrettMayson/HEMTT/releases/download/v0.7.6/hemtt-v0.7.6-x86_64-pc-windows-msvc.zip", ".\temp\hemtt.zip")
$client.dispose()

Write-Output "=> Extracting HEMTT ..."
Expand-Archive ".\temp\hemtt.zip" -DestinationPath ".\temp\hemtt"

Move-Item -Path ".\temp\hemtt\hemtt.exe" -Destination "..\hemtt.exe" -Force

Remove-Item -Recurse -Force -Path ".\temp"

Write-Output "=> Updating HEMTT ..."
Invoke-Expression "..\hemtt.exe update"

Write-Output "=> HEMTT successfully installed to project!"

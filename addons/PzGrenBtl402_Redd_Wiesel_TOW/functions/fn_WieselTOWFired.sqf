params ["_veh", "_weap"];

if (_weap == "Redd_TOW") then
{
  [_veh, ['Redd_TOW_Mag', [0]]] remoteExec ["removeMagazinesTurret"];
};

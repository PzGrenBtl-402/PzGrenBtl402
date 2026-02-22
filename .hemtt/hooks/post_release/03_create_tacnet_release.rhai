let project = HEMTT.project();

let release_folder = HEMTT_OUT;

if (release_folder.exists()) {
    let releases = HEMTT_RFS.join("releases");
    let dst = releases.join("@TacNet");

    if (dst.exists()) {
        print("Removing previous TacNet release folder");
        dst.remove_dir_all();
    }

    print("Copying release to " + dst);
    if (!release_folder.copy(dst)) {
        fatal("Failed to copy " + release_folder + " to " + dst);
    }

    let addons = dst.join("addons");

    print("Deleting addons");

    let addons_to_delete = [
        "Menu_Spotlight",
        "Redd",
        "BwMod",
        "NiArms",
        "PBW",
        "Milan",
        "Ladder",
        "GM_Marder",
        "GM_Milan",
        "GM_Redd_MG3",
    ];

    for addon in addons.list() {
        let component = addon.file_name().sub_string(len(project.prefix()) + 1);

        for to_delete in addons_to_delete {
            if (component.starts_with(to_delete)) {
                debug(component);
                addon.remove_file();
                break;
            }
        }
    }
} else {
    warn("Cannot create TacNet release. Folder " + release_folder + " does not exist!");
}

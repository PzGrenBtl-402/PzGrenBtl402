let project = HEMTT.project();

let release_folder = HEMTT_OUT;

if (release_folder.exists()) {
    let releases = HEMTT_RFS.join("releases");
    let dst = releases.join("@" + project.name());

    if (dst.exists()) {
        print("Removing previous workshop release folder");
        dst.remove_dir_all();
    }

    print("Copying release to " + dst);
    if (!release_folder.copy(dst)) {
        fatal("Failed to copy " + release_folder + " to " + dst);
    }

    print("Deleting addon Menu_Spotlight");
    let addons = dst.join("addons");
    for addon in addons.list() {
        let component = addon.file_name().sub_string(len(project.prefix()) + 1);
        if (component.starts_with("Menu_Spotlight")) {
            debug(component);
            addon.remove_file();
        }
    }
} else {
    warn("Cannot prepare workshop release. Folder " + release_folder + " does not exist!");
}

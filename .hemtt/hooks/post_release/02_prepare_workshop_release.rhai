let project = HEMTT.project();

let release_folder = HEMTT_OUT;

if (release_folder.exists()) {
    let releases = HEMTT_RFS.join("releases");
    // let dst = releases.join("@" + project.name());
    let dst = releases.join("release");

    if (dst.exists()) {
        print("Removing previous workshop release folder");
        dst.remove_dir_all();
    }

    print("Copying release to " + dst);
    // TODO: There is currently no way to rename a directory
    // Fix this later
    if (!release_folder.copy(dst.parent())) {
        fatal("Failed to copy " + release_folder + " to " + dst.parent());
    }

    print("Deleting addon Menu_Spotlight");
    let addons = dst.join("addons");
    let menu_spotlight_pbo_name = project.name() + "_Menu_Spotlight.pbo";

    addons.join(menu_spotlight_pbo_name).remove_file();
    addons.join(menu_spotlight_pbo_name + "." + project.name() + "_" + project.version().to_string() + ".bisign").remove_file();
} else {
    warn("Cannot prepare workshop release. Folder " + release_folder + " does not exist!");
}

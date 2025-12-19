#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
namespace fs = std::filesystem;

// Forward declarations
void print_plan(const fs::path& project_root);
int make_project_structure(const fs::path& project_root);
int make_project_directory(const fs::path& dir_path);
int make_project_file(const fs::path& project_root, const std::string& file_name, const std::string& default_text); 

const bool debug = false;

int main(int argc, char* argv[]) {

    // Debug: print all arguments
    if (debug){
        std::cout << "num args: " << argc << std::endl;
        for(int arg_number = 0; arg_number < argc; ++arg_number) {
            std::cout << "arg " << arg_number << ": " << argv[arg_number] << std::endl;
        }
    }
    
    // Parse arguments
    bool dry_run = false;
    std::string project_name;
    
    if (argc == 2) {
        project_name = argv[1];
    } else if (argc == 3 && std::string(argv[1]) == "--dry-run") {
        dry_run = true;
        project_name = argv[2];
    } else {
        std::cerr << "Usage: " << fs::path(argv[0]).filename().string() << " [--dry-run] <project_name>" << std::endl;
        return 1;
    }
    
    // Create fs::path once and use it everywhere
    fs::path project_root = project_name;
    
    if (dry_run) {
        // Dry-run: show plan regardless of whether directory exists
        std::cout << "Dry run mode enabled. No files or directories will be created." << std::endl;
        print_plan(project_root);
    } else {
        // Real run: check if project already exists
        if (fs::exists(project_root)) {
            std::cerr << "Error: Project directory '" << project_root << "' already exists" << std::endl;
            return 1;
        }
        
        std::cout << "Creating project: " << project_root << std::endl;
        int result = make_project_structure(project_root);
        if (result != 0) {
            return result;
        }
    }
    
    return 0;
}

void print_plan(const fs::path& project_root) {
    std::string project_name = project_root.string();
    std::string str_message = "\n"
    "Project root: " + project_name + "\n"
    "Will create:\n"
    "\t" + project_name + "/src/\n"
    "\t" + project_name + "/include/\n"
    "\t" + project_name + "/tests/\n"
    "\t" + project_name + "/build/\n"
    "\t" + project_name + "/CMakeLists.txt\n"
    "\t" + project_name + "/README.md\n"
    "\t" + project_name + "/.gitignore\n";
    std::cout << str_message << std::endl;
}

int make_project_structure(const fs::path& project_root) {
    
    // Create root directory
    if (make_project_directory(project_root) != 0) {
        return 1;
    }

    // Create subdirectories
    if (make_project_directory(project_root / "src") != 0) {
        return 1;
    }
    if (make_project_directory(project_root / "include") != 0) {
        return 1;
    }
    if (make_project_directory(project_root / "tests") != 0) {
        return 1;
    }
    if (make_project_directory(project_root / "build") != 0) {
        return 1;
    }

    // Create files
    if (make_project_file(project_root, "README.md", "# " + project_root.filename().string() + "\n") != 0) {
        return 1;
    }
    if (make_project_file(project_root, ".gitignore", "*.o\n") != 0) {
        return 1;
    }
    if (make_project_file(project_root, "CMakeLists.txt", "cmake_minimum_required\n") != 0) {
        return 1;
    }

    return 0;
}

int make_project_directory(const fs::path& dir_path) {
    std::error_code ec;
    bool created = fs::create_directories(dir_path, ec);
    
    if (ec) {
        std::cerr << "Error creating " << dir_path << ": " << ec.message() << '\n';
        return 1;
    }
    
    if (created) {
        std::cout << "created: " << dir_path << '\n';
    } else {
        std::cout << "exists: " << dir_path << '\n';
    }
    
    return 0;
}

int make_project_file(const fs::path& project_root, const std::string& file_name, const std::string& default_text) {
    fs::path path = project_root / file_name;

    if (fs::exists(path)) {
        std::cerr << "Error: File " << path << " already exists\n";
        return 1;
    }

    std::ofstream file(path);
    if (!file) {
        std::cerr << "Error creating file " << path << '\n';
        return 1;
    }

    file << default_text;
    file.close();
    std::cout << "created: " << path << '\n';

    return 0;
}
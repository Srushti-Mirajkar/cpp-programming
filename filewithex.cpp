#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void categorizeFiles(const std::string& directory) {
    for (const auto& entry : fs::directory_iterator(directory)) {
        if (entry.is_regular_file()) {
            fs::path filePath = entry.path();
            std::string extension = filePath.extension().string();

            // Define target folder based on extension
            std::string targetFolder;
            if (extension == ".txt" || extension == ".csv") {
                targetFolder = "TextFiles";
            } else if (extension == ".jpg" || extension == ".png") {
                targetFolder = "Images";
            } else if (extension == ".exe") {
                targetFolder = "Executables";
            } else {
                targetFolder = "Others";
            }

            // Create target folder if it doesn't exist
            fs::path targetPath = fs::path(directory) / targetFolder;
            if (!fs::exists(targetPath)) {
                fs::create_directory(targetPath);
            }

            // Move file to the categorized folder
            fs::rename(filePath, targetPath / filePath.filename());
            std::cout << "Moved: " << filePath.filename() << " -> " << targetFolder << "/" << filePath.filename() << std::endl;
        }
    }
}

int main() {
    std::string directory = "./files";  // Change this to your folder path
    categorizeFiles(directory);

    return 0;
}

#include <iostream>
#include <filesystem>
#include <cstdlib>
#include <ctime>

using namespace std::filesystem;

const path directory = "/mnt/c/Users/Lucas/Pictures/Wallpapers/worm";

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (const auto& entry : directory_iterator(directory)) {
        std::cout << entry.path() << std::endl;

        const path newPath = directory / (std::to_string(std::rand()) + entry.path().extension().string());
        rename(entry.path(), newPath);
    }

    return 0;
}
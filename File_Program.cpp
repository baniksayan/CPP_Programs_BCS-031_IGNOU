#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file;
    std::string filename = "example.txt"; // Replace with your desired filename

    file.open(filename);

    if (!file.is_open()) {
        std::cout << "Error opening file: " << filename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();

    return 0;
}

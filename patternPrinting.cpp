#include <iostream>

int main() {
    for (int i = 0; i < 4; ++i) {
        if (i == 1 || i == 2) {
            for (int j = 0; j < 2; ++j) {
                std::cout << "**" << std::endl;
            }
        } else {
            for (int j = 0; j < 6; ++j) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}

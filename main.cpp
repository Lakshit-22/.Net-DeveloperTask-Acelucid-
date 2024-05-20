#include <iostream>

int main() {
    int rows = 4; // Number of rows in the triangle

    // Outer loop for rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing asterisks
        for (int j = 1; j <= 2*i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    for (char baris = 'A'; baris <= 'Z'; baris++) {
        for (char huruf = baris; huruf <= 'Z'; huruf++) {
            std::cout << huruf << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

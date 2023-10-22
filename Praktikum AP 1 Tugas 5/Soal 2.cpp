#include <iostream>

int main() {
    int jumlahBaris;

    // Masukkan jumlah baris yang diinginkan
    std::cout << "Masukkan jumlah baris: ";
    std::cin >> jumlahBaris;

    // Loop untuk mencetak pola bintang
    for (int i = 1; i <= jumlahBaris; i++) {
        // Loop dalam untuk mencetak bintang pada setiap baris
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl; // Pindah ke baris berikutnya
    }

    return 0;
}

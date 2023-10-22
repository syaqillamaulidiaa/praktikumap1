#include <iostream>

// Fungsi rekursif untuk menghitung faktorial
int factorial(int n) {
    if (n == 0) {
        return 1; // Basis kasus: 0! = 1
    } else {
        return n * factorial(n - 1); // Kasus rekursif: n! = n * (n-1)!
    }
}

int main() {
    int n;

    std::cout << "Masukkan nilai n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Faktorial tidak terdefinisi untuk nilai negatif." << std::endl;
    } else {
        int hasil = factorial(n);
        std::cout << n << "! = " << hasil << std::endl;
    }

    return 0;
}

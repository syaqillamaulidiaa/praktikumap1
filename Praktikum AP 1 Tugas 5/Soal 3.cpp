#include <iostream>

int main() {
    int n = 1000; // Jumlah suku dalam deret
    double S = 0.0; // Inisialisasi nilai S dengan 0

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // Suku ganjil (1, 1/3, 1/5, ...) ditambahkan
            S += 1.0 / i;
        } else {
            // Suku genap (-1/2, -1/4, -1/6, ...) dikurangkan
            S -= 1.0 / i;
        }
    }

    std::cout << "Nilai S = " << S << std::endl;

    return 0;
}

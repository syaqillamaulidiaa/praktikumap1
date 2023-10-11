#include <iostream>
using namespace std;

// Fungsi untuk mengkonversi angka Arab ke angka Romawi
string arab_to_roman(int number) {
    string roman_numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result = "";

    for (int i = 0; i < 13; i++) {
        while (number >= values[i]) {
            result += roman_numerals[i];
            number -= values[i];
        }
    }

    return result;
}

int main() {
    int angka_arab;
    cout << "Masukkan angka Arab: ";
    cin >> angka_arab;

    if (angka_arab >= 1 && angka_arab <= 3999) {
        string angka_romawi = arab_to_roman(angka_arab);
        cout << "Angka Romawi: " << angka_romawi << endl;
    } else {
        cout << "Masukkan angka Arab antara 1 dan 3999." << endl;
    }

    return 0;
}

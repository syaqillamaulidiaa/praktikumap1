#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, hasil;

    // Membaca tiga bilangan bulat (a, b, c)
    cout << "Masukkan nilai a: ";
    cin >> a;

    cout << "Masukkan nilai b: ";
    cin >> b;

    cout << "Masukkan nilai c: ";
    cin >> c;

    // Menetapkan nilai x
    x = 1;

    // Menghitung hasil ekspresi
    hasil = 6 * (a * x * x + b * x + c);

    // Menampilkan hasil
    cout << "Hasil dari 6*(ax^2 + bx + c) untuk x = 1 adalah: " << hasil << endl;

    return 0;
}

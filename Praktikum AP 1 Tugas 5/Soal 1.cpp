#include <iostream>
using namespace std;

int main() {
    int jumlah_data = 10;
    double total = 0;
    double nilai_terbesar, nilai_terkecil;

    cout << "Masukkan sepuluh bilangan:" << endl;

    for (int i = 1; i <= jumlah_data; i++) {
        double input_data;
        cout << "Masukkan bilangan " << i << ": ";
        cin >> input_data;

        if (i == 1) {
            nilai_terbesar = input_data;
            nilai_terkecil = input_data;
        } else {
            if (input_data > nilai_terbesar) {
                nilai_terbesar = input_data;
            }
            if (input_data < nilai_terkecil) {
                nilai_terkecil = input_data;
            }
        }

        total += input_data;
    }

    double rata_rata = total / jumlah_data;

    cout << "=====================" << endl;
    cout << "Nilai Rata-rata  = " << rata_rata << endl;
    cout << "Nilai Terbesar  = " << nilai_terbesar << endl;
    cout << "Nilai Terkecil  = " << nilai_terkecil << endl;

    return 0;
}

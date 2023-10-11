#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama_karyawan;
    int jumlah_rumah_45, jumlah_rumah_54, jumlah_rumah_70;
    const int harga_bonus_45_lebih5 = 500000;
    const int harga_bonus_45_1sampai5 = 250000;
    const int harga_bonus_54_lebih5 = 1000000;
    const int harga_bonus_54_1sampai5 = 500000;
    const int harga_bonus_70_lebih5 = 1250000;
    const int harga_bonus_70_1sampai5 = 1000000;

    // Input data penjualan karyawan
    cout << "Masukkan nama karyawan: ";
    cin >> nama_karyawan;
    cout << "Masukkan jumlah rumah tipe 45 yang terjual: ";
    cin >> jumlah_rumah_45;
    cout << "Masukkan jumlah rumah tipe 54 yang terjual: ";
    cin >> jumlah_rumah_54;
    cout << "Masukkan jumlah rumah tipe 70 yang terjual: ";
    cin >> jumlah_rumah_70;

    // Menghitung bonus untuk masing-masing tipe rumah
    int bonus_45 = 0, bonus_54 = 0, bonus_70 = 0;

    if (jumlah_rumah_45 > 5) {
        bonus_45 = jumlah_rumah_45 * harga_bonus_45_lebih5;
    } else if (jumlah_rumah_45 >= 1) {
        bonus_45 = jumlah_rumah_45 * harga_bonus_45_1sampai5;
    }

    if (jumlah_rumah_54 > 5) {
        bonus_54 = jumlah_rumah_54 * harga_bonus_54_lebih5;
    } else if (jumlah_rumah_54 >= 1) {
        bonus_54 = jumlah_rumah_54 * harga_bonus_54_1sampai5;
    }

    if (jumlah_rumah_70 > 5) {
        bonus_70 = jumlah_rumah_70 * harga_bonus_70_lebih5;
    } else if (jumlah_rumah_70 >= 1) {
        bonus_70 = jumlah_rumah_70 * harga_bonus_70_1sampai5;
    }

    // Menghitung total bonus
    int total_bonus = bonus_45 + bonus_54 + bonus_70;

    // Menampilkan hasil
    cout << "Total Bonus yang diterima " << nama_karyawan << " = Rp. " << total_bonus << endl;

    return 0;
}

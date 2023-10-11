#include <iostream>
using namespace std;

int main() {
    const double hargaKamar = 100.0;  // Biaya sewa satu kamar per malam
    const double diskon10 = 0.10;     // Diskon 10%
    const double diskon20 = 0.20;     // Diskon 20%
    const double diskon30 = 0.30;     // Diskon 30%
    const double diskonTambahan = 0.05;  // Diskon tambahan 5% untuk minimal 3 hari
    double biayaSewaSatuKamar, pajakPenjualan, diskon, biayaTotalKamar, jumlahTagihan;
    int banyakKamar, durasiKamar;

    // Meminta input dari pengguna
    cout << "Masukkan biaya sewa satu kamar: $";
    cin >> biayaSewaSatuKamar;
    cout << "Masukkan jumlah kamar yang dipesan: ";
    cin >> banyakKamar;
    cout << "Masukkan durasi kamar yang dipesan (dalam hari): ";
    cin >> durasiKamar;
    cout << "Masukkan pajak penjualan (dalam persen): ";
    cin >> pajakPenjualan;

    // Menghitung diskon berdasarkan jumlah kamar yang dipesan
    if (banyakKamar >= 30) {
        diskon = diskon30;
    } else if (banyakKamar >= 20) {
        diskon = diskon20;
    } else if (banyakKamar >= 10) {
        diskon = diskon10;
    } else {
        diskon = 0.0;  // Tidak ada diskon jika kurang dari 10 kamar
    }

    // Menghitung biaya total kamar
    biayaTotalKamar = banyakKamar * durasiKamar * biayaSewaSatuKamar;

    // Menghitung diskon tambahan jika durasi kamar >= 3 hari
    if (durasiKamar >= 3) {
        biayaTotalKamar -= biayaTotalKamar * diskonTambahan;
    }

    // Menghitung pajak penjualan
    double pajak = biayaTotalKamar * (pajakPenjualan / 100.0);

    // Menghitung jumlah tagihan
    jumlahTagihan = biayaTotalKamar + pajak;

    // Menampilkan hasil
    cout << "Biaya sewa satu kamar: $" << biayaSewaSatuKamar << endl;
    cout << "Diskon kamar (persen): " << (diskon * 100) << "%" << endl;
    cout << "Jumlah kamar yang dipesan: " << banyakKamar << endl;
    cout << "Durasi kamar yang dipesan (hari): " << durasiKamar << endl;
    cout << "Biaya total kamar: $" << biayaTotalKamar << endl;
    cout << "Pajak penjualan: $" << pajak << endl;
    cout << "Jumlah tagihan: $" << jumlahTagihan << endl;

    return 0;
}
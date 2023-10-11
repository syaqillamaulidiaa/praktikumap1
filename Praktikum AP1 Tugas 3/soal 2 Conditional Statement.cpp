#include <iostream>
using namespace std;

// Fungsi untuk mengonversi inci menjadi poin
double inchToPoints(double inch) {
    const double POINTS_PER_INCH = 72.0;
    return inch * POINTS_PER_INCH;
}

int main() {
    // Variabel input
    double panjang_kertas_inci, lebar_kertas_inci;
    double margin_atas_inci, margin_bawah_inci, margin_kiri_inci, margin_kanan_inci;
    double ukuran_titik;
    char spasi_ganda;

    // Meminta input dari pengguna
    cout << "Masukkan panjang kertas (inci): ";
    cin >> panjang_kertas_inci;
    cout << "Masukkan lebar kertas (inci): ";
    cin >> lebar_kertas_inci;
    cout << "Masukkan margin atas (inci): ";
    cin >> margin_atas_inci;
    cout << "Masukkan margin bawah (inci): ";
    cin >> margin_bawah_inci;
    cout << "Masukkan margin kiri (inci): ";
    cin >> margin_kiri_inci;
    cout << "Masukkan margin kanan (inci): ";
    cin >> margin_kanan_inci;
    cout << "Masukkan ukuran titik suatu garis (poin): ";
    cin >> ukuran_titik;
    cout << "Apakah garis diberi spasi ganda? (y/n): ";
    cin >> spasi_ganda;

    // Menghitung panjang maksimum garis (lebar kertas dikurangi margin kiri dan kanan)
    double panjang_maksimum_garis_inci = lebar_kertas_inci - (margin_kiri_inci + margin_kanan_inci);

    // Menghitung ukuran titik efektif berdasarkan spasi ganda
    if (spasi_ganda == 'y' || spasi_ganda == 'Y') {
        ukuran_titik *= 2.0;
    }

    // Menghitung jumlah karakter dalam satu baris berdasarkan panjang maksimum garis
    int jumlah_karakter_dalam_satu_baris = static_cast<int>(panjang_maksimum_garis_inci * inchToPoints(1.0) / ukuran_titik);

    // Menghitung tinggi maksimum garis (tinggi kertas dikurangi margin atas dan bawah)
    double tinggi_maksimum_garis_inci = panjang_kertas_inci - (margin_atas_inci + margin_bawah_inci);

    // Menghitung jumlah baris yang dapat dicetak
    int jumlah_baris_dapat_dicetak = static_cast<int>(tinggi_maksimum_garis_inci * inchToPoints(1.0) / ukuran_titik);

    // Menampilkan hasil
    cout << "\nJumlah karakter dalam satu baris: " << jumlah_karakter_dalam_satu_baris << endl;
    cout << "Jumlah baris yang dapat dicetak: " << jumlah_baris_dapat_dicetak << endl;

    return 0;
}
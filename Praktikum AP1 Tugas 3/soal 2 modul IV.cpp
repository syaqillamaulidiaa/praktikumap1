#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk nilai tes, UTS, UAS, dan tugas
    double nilaiTes, nilaiUTS, nilaiUAS, nilaiTugas;

    // Input nilai-nilai dari pengguna
    cout << "Masukkan nilai Tes: ";
    cin >> nilaiTes;

    cout << "Masukkan nilai UTS: ";
    cin >> nilaiUTS;

    cout << "Masukkan nilai UAS: ";
    cin >> nilaiUAS;

    cout << "Masukkan nilai Tugas: ";
    cin >> nilaiTugas;

    // Menghitung nilai akhir berdasarkan bobot
    double nilaiAkhir = 0.20 * nilaiTes + 0.30 * nilaiUTS + 0.30 * nilaiUAS + 0.20 * nilaiTugas;

    // Menentukan indeks nilai berdasarkan kriteria yang telah disebutkan
    char indeksNilai;
    if (nilaiAkhir <= 50) {
        indeksNilai = 'D';
    } else if (nilaiAkhir <= 70) {
        indeksNilai = 'C';
    } else if (nilaiAkhir <= 80) {
        indeksNilai = 'B';
    } else {
        indeksNilai = 'A';
    }

    // Menampilkan nilai akhir dan indeks nilai
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Indeks Nilai: " << indeksNilai << endl;

    return 0;
}

#include <iomanip>
#include <iostream>
using namespace std;

const int barang_dijual = 10;

int main() {
  // Definisi variabel dan tipe data untuk menyimpan data barang penjualan
  string barang[barang_dijual];
  int harga_per_barang[barang_dijual];
  int jumlah_terjual[barang_dijual];

  // Input data penjualan barang
  cout << "Masukkan data penjualan barang: " << endl;
  for (int i = 0; i < barang_dijual; i++) {
    cout << "\nBarang " << i + 1 << endl;
    cout << "Nama barang: ";
    getline(cin, barang[i]);
    cout << "Harga per barang: ";
    cin >> harga_per_barang[i];
    cout << "Jumlah terjual: ";
    cin >> jumlah_terjual[i];
    cin.ignore(); // Menghapus karakter newline setelah input jumlah barang yang terjual
  }

  // Hitung total penjualan minimarket setiap hari
  int total_penjualan = 0;
  for (int i = 0; i < barang_dijual; i++) {
    int total_per_barang = harga_per_barang[i] * jumlah_terjual[i];
    total_penjualan += total_per_barang;
  }

  // Cari barang yang paling banyak terjual
  int max_kejual = 0;
  int index_terlaku = 0;
  for (int i = 0; i < barang_dijual; i++) {
    if (jumlah_terjual[i] > max_kejual) {
      max_kejual = jumlah_terjual[i];
      index_terlaku = i;
    }
  }

  // Menampilkan hasil rekapitulasi penjualan
  cout << "\nRekapitulasi penjualan minimarket" << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << left << setw(30) << "Nama Barang" << setw(20) << "Harga/Barang (Rp)"
       << setw(20) << "Jumlah Terjual" << setw(25) << "Total per Barang (Rp)"
       << endl;

  for (int i = 0; i < barang_dijual; i++) {
    cout << left << setw(30) << barang[i] << setw(20) << harga_per_barang[i]
         << setw(20) << jumlah_terjual[i] << setw(25)
         << harga_per_barang[i] * jumlah_terjual[i] << endl;
  }

  cout << "----------------------------------------------------------" << endl;
  cout << left << setw(70) << "Total Penjualan Minimarket" << setw(25)
       << total_penjualan << endl;
  cout << "Barang yang Paling Banyak Terjual adalah " << barang[index_terlaku]
       << endl;

  return 0;
}

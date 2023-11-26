#include <iostream>
using namespace std;

struct barang {
  string kode_brg;
  string nama_brg;
  int jumlah;
  int harga_satuan;
};

int main() {
  const int jumlah_data = 20;
  barang penjualan[jumlah_data];

  // nginput data penjualan
  for (int i = 0; i < jumlah_data; i++) {
    cout << "Data penjualan ke-" << i + 1 << endl;
    cout << "Kode barang: ";
    cin >> penjualan[i].kode_brg;
    cout << "Nama barang: ";
    cin >> penjualan[i].nama_brg;
    cout << "Jumlah: ";
    cin >> penjualan[i].harga_satuan;
  }

  // total harga
  int total_harga = 0;
  for (int i = 0; i < jumlah_data; i++) {
    total_harga += penjualan[i].jumlah * penjualan[i].harga_satuan;
  }

  // keuntungan
  double keuntungan = 0.1 * total_harga;
  cout << "Total harga: " << total_harga << endl;
  cout << "Keuntungan: " << keuntungan << endl;

  return 0;
}
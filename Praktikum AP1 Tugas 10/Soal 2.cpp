#include <iostream>
using namespace std;

int main() {
  int daya_rumah = 2200;
  double biaya_per_kwh = 1.450;

  // alat elektronik dirumah pake satuan Kwh
  double ac = 0.8;
  double kulkas = 0.2;
  double setrika = 0.15;
  double mesin_cuci = 0.25;
  double lampu = 0.25;
  double lainnya = 0.1;

  int jumlah_hari = 30;
  double total_penggunaan =
      (ac + kulkas + setrika + mesin_cuci + lampu + lainnya) * daya_rumah /
      1000;

  double total_penggunaan_per_bulan = total_penggunaan * jumlah_hari;
  double biaya_pembayaran_per_bulan =
      total_penggunaan_per_bulan * biaya_per_kwh;
  cout << "Total biaya pembayaran listrik tiap bulan adalah Rp. "
       << biaya_pembayaran_per_bulan << endl;
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  double dollar = 12000;
  double euro = 20000;
  double kurs_dollar = 15000; // Kurs 1 US Dollar = Rp. 15,000
  double kurs_euro = 0.997;
  double euro_ke_rupiah = kurs_euro * kurs_dollar;

  double totalRupiah = (dollar * kurs_dollar + (euro * euro_ke_rupiah));

  double hargamobil = 425000000; // Harga mobil baru dalam Rupiah
  double sisa_rupiah = totalRupiah - hargamobil;

  // Mengganti 'e' dengan angka 3
  string totalRupiahString = to_string((int)totalRupiah);
  string sisaRupiahString = to_string((int)sisa_rupiah);

  cout << "Jumlah Rupiah yang dibutuhkan untuk membeli mobil baru: "
       << totalRupiahString << " Rupiah" << endl;
  cout << "Sisa uang Pak Anto setelah membeli mobil baru: " << sisaRupiahString
       << " Rupiah" << endl;

  return 0;
}
#include <iostream>
using namespace std;

// Fungsi untuk ngitung ikatan bunga dan sisa pita
void hitungIkatBunga(int panjangPitaMeter, int panjangIkatBungaCentimeter) {
    int panjangPitaCentimeter = panjangPitaMeter * 100; 

    int jumlahIkatBunga = panjangPitaCentimeter / panjangIkatBungaCentimeter;
    int sisaPitaCentimeter = panjangPitaCentimeter % panjangIkatBungaCentimeter;

    cout << "Dari pita " << panjangPitaMeter << " meter, dapat dibuat " << jumlahIkatBunga << " ikatan bunga rangkai." << endl;
    cout << "Sisa pita yang belum dipakai adalah " << sisaPitaCentimeter << " centimeter." << endl;
}

int main() {
    int panjangPitaMeter = 12;
    int panjangIkatBungaCentimeter = 45;

    hitungIkatBunga(panjangPitaMeter, panjangIkatBungaCentimeter);

    return 0;
}

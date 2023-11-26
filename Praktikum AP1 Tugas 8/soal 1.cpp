#include <cmath>
#include <iostream>
using namespace std;

struct titik {
  double x;
  double y;
};

// menghitung jarak 2 titik
double hitungJarak(const titik &titik1, const titik &titik2) {
  double deltaX = titik2.x - titik1.x;
  double deltaY = titik2.y - titik1.y;
  return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
  titik titik1 = {4.0, 4.0};
  titik titik2 = {6.0, 6.0};

  double jarak = hitungJarak(titik1, titik2);
  cout << "Jarak antara dua titik: " << jarak << endl;

  return 0;
}

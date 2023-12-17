#include <iostream>
using namespace std;

int main() {
  int x, y;

  cout << "Masukkan nilai x: ";
  cin >> x;
  cout << "Masukkan nilay y: ";
  cin >> y;

  cout << "Sebelum ditukar: x = " << x << ", y = " << y << endl;

  int temp = x;
  x = y;
  y = temp;

  cout << "Setelah ditukar: x = " << x << ", y = " << y << endl;

  return 0;
}
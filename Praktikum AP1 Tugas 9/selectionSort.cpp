#include <iostream>
using namespace std;

void selectionSortDescending(float data[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int maxIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (data[j] > data[maxIndex]) {
        maxIndex = j;
      }
    }
    swap(data[i], data[maxIndex]);
  }
}

  int main() {
  float data[] = {21.83, 42.11, 10, 9, 3.20, 102, 27, 15,     92, 2};
  int n = sizeof(data) / sizeof(data[0]);

  selectionSortDescending(data, n);

  cout << "Data setelah diurutkan secara menurun: ";
  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }
  cout << endl;

  return 0;
}
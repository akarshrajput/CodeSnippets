#include <iostream>
using namespace std;
void selection_sort(int array[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (array[j] < array[min_index]) {
        min_index = j;
      }
    }
    int temp = array[i];
    array[i] = array[min_index];
    array[min_index] = temp;
  }
}
int main() {
  int array[] = {5, 3, 1, 2, 4};
  int n = sizeof(array) / sizeof(array[0]);  // Length of Array
  selection_sort(array, n);
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  return 0;
}
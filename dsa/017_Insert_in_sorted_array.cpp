#include <iostream>
using namespace std;
void insertSort(int x) {
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;
    cin>>x;
    int i = length - 1;
    while (arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    length++;
    for (int y = 0; y < length; y++) {
        cout << arr[y] << " ";
    }
}
int main() {
    insertSort(23);
    return 0;
}


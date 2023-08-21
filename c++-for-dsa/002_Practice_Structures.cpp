#include <iostream>
#include <algorithm>
using namespace std;
// // Call by value
// int add(int x, int y)
// {
//     int sum;
//     sum=x+y;
//     cout<<sum;
// }
// int main()
// {
//     add(2,3);
// }

// // Call by address
// int add(int *x, int *y)
// {
//     int sum;
//     sum=*x+*y;
//     cout<<sum;
// }
// int main()
// {
//     add(2,3);
// }

// // Call by reference
// int add(int x, int y)
// {
//     int sum;
//     sum=x+y;
//     int &addition = sum;
//     cout<<addition;
// }
// int main()
// {
//     add(2,3);
// }
int main() {
  int arr[] = {10, 5, 2, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Sort the array in ascending order
  sort(arr, arr + n);

  // Print the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
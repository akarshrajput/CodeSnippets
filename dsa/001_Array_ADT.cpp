#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of strings: ";
    cin >> size;
    cin.ignore();  // Ignore the newline character left in the buffer

    string arr[size];  // Declare an array of strings

    for (int i = 0; i < size; i++) {
        getline(cin, arr[i]);  // Read the entire line as a string
    }

    string key;
    getline(cin, key);

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (key == arr[i]) {
            cout << "Key found at index " << i << endl;
            found = true;
            break; // Exit the loop once key is found
        }
    }

    if (!found) {
        cout << "String not found" << endl;
    }

    return 0;
}

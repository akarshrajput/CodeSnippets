#include <iostream>
using namespace std;
class student {
public:
    int no;
    char book[20];
};
int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    student students[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter book number " << i+1 << ": ";
        cin >> students[i].no;
        cout << "Enter book name " << i+1 << ": ";
        cin.ignore();
        cin.getline(students[i].book, 20);
    }
    cout << "\n\nEntered details of students:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i+1 << ":\n";
        cout << "Book number: " << students[i].no<< "\n";
        cout << "Book name: " << students[i].book << "\n";
    }
    return 0;
}

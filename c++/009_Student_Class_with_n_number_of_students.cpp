#include <iostream>
using namespace std;
class student {
public:
    int rn;
    char name[20];
    float marks;
};
int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student students[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter roll no " << i+1 << ": ";
        cin >> students[i].rn;
        cout << "Enter name " << i+1 << ": ";
        cin.ignore();
        cin.getline(students[i].name, 20);
        cout << "Enter marks " << i+1 << ": ";
        cin >> students[i].marks;
    }
    cout << "\n\nEntered details of students:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i+1 << ":\n";
        cout << "Roll No: " << students[i].rn << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Marks: " << students[i].marks << "\n";
    }
    return 0;
}

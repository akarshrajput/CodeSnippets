//Record of one employee using union
#include <iostream>
using namespace std;
union employee
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    int n;
    cout << "Enter the number of employee: ";
    cin >> n;
    employee employee[n];
    for (int i = 0; i < n; i++) {
    cout << "Enter Full name: ";
    cin.getline(employee[i].name,50);
    cout << "\nName: " << employee[i].name << endl;
    cout << "Enter age: ";
    cin >> employee[i].age;
    cout <<"\nAge: " << employee[i].age << endl;
    cout << "Enter salary: ";
    cin >>employee[i].salary;
    cout << "\nSalary: " << employee[i].salary;
    }
}
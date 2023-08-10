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
    employee e1,e2;
    // Employee 1
    cout << "Enter Full name: ";
    cin.getline(e1.name,50);
    cout << "\nName: " << e1.name << endl;
    cout << "Enter age: ";
    cin >> e1.age;
    cout <<"\nAge: " << e1.age << endl;
    cout << "Enter salary: ";
    cin >> e1.salary;
    cout << "\nSalary: " << e1.salary;
    // Employee 2
    cout << "Enter Full name: ";
    cin.getline(e2.name,50);
    cout << "\nName: " << e2.name << endl;
    cout << "Enter age: ";
    cin >> e2.age;
    cout <<"\nAge: " << e2.age << endl;
    cout << "Enter salary: ";
    cin >> e2.salary;
    cout << "\nSalary: " << e2.salary;
}
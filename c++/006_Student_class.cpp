#include <iostream>
using namespace std;
class Student
{
    public:
    char name[20];
    int rollno;
    float mark;
    void getdata()
    {
    cout << "Enter student's name: ";
    cin >>name;
    cout << "Enter student's roll number: ";
    cin >> rollno;
    cout << "Enter student's marks: ";
    cin >> mark;
    }
    void studentName()
    {
    cout << "Student's name: " << name << endl;
    }
    void studentRollno()
    {
    cout << "Roll number: " <<rollno << endl;
    }
    void studentMark()
    {
    cout << "Marks: " <<mark << endl;  
    }
};
int main()
{
    Student obj;
    obj.getdata();
    obj.studentName();
    obj.studentRollno();
    obj.studentMark();
}
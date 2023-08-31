#include <iostream>
using namespace std;
class student
{
    public:
    int a=5;
    void data(int b)
    {
        cout<<"Student Roll no: "<<b;
    }
};
int main()
{
    student obj;
    int student::*ptr=&student::a;
    void(student::*ptr2)(int)=&student::data;
    cout<<obj.*ptr<<endl;
    (obj.*ptr2)(5);
}
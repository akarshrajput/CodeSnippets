#include <iostream>
using namespace std;
class student
{
    public:
    int a;
    void data(int a)
    {
        this.a=a;
    }
};
int main()
{
    student obj;
    obj.data(5);
}
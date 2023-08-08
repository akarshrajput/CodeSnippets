#include <iostream>
using namespace std;
class arithmetic
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;
    }
    void sum()
    {
        int z;
        z=x+y;
        cout<<"The sum is "<<z;
    }
    void subtraction()
    {
        int z;
        z=x-y;
        cout<<"The subtraction is "<<z;
    }
    void multiply()
    {
        int z;
        z=x*y;
        cout<<"The multiply is "<<z;
    }
    void division()
    {
        int z;
        z=x/y;
        cout<<"The division is "<<z;
    }
};
int main()
{
    arithmetic obj;
    obj.getdata();  
    obj.sum();      

    return 0;
}
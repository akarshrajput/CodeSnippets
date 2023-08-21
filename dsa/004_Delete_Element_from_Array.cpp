#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<4;i++)
    {
        if(target==arr[i])
        {
            cout<<i;
        }
    }
}
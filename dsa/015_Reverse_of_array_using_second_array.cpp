#include <iostream>
using namespace std;
int reverse()
{
    int arr[10]={9,4,5,6,7,3,1,2,8,10};
    int arr2[10];
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=length-1,j=0;i>=0;i--,j++)
    {
        arr2[j]=arr[i];
    }
    for(int i=0;i<length;i++)
    {
        arr[i]=arr2[i];
    }
    // for(int i=0;i<length;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}
int main()
{
    reverse();
}
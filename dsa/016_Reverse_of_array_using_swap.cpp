#include <iostream>
using namespace std;
int reverse()
{
    int arr[10]={9,4,5,6,7,3,1,2,8,10};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0,j=length-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    reverse();
}
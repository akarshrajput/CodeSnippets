#include <iostream>
using namespace std;
int swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int negativeLeftSide() 
{
    int arr[10] = {1, 2, -3, -4, 5, -6, 7, -8, 9, -10};
    int length=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=length-1;
    while (i<j)
    {
        while (arr[i]<0)
        {
            i++;
        }
        while (arr[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    negativeLeftSide();
}
#include <iostream>
using namespace std;
int isSort() 
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    cout<<isSort();
}
    
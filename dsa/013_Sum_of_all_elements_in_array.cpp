#include <iostream>
using namespace std;
int sum()
{
    int arr[10]={9,4,5,6,7,3,1,2,8,10};
    int length=sizeof(arr)/sizeof(arr[0]);
    int total=0;
    for(int i=0;i<length;i++)
    {
        total=total+arr[i];
    }
    return total;
}
int main(){
    cout<<sum();
}
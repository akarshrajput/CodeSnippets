#include <iostream>
using namespace std;
int sum()
{
    int arr[10]={9,4,5,6,7,3,1,2,8,10};
    int length=sizeof(arr)/sizeof(arr[0]);
    double total=0;
    double average;
    for(int i=0;i<length;i++)
    {
        total=total+arr[i];
    }
    average=total/length;
    cout<<average;
}
int main(){
    sum();
}
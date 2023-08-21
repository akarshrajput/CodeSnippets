// set() - Replace the element of array using index of value;
#include <iostream>
using namespace std;
int set(int index,int x)
{
    int arr[10]={9,4,5,6,7,3,1,2,8,10};
    arr[index]=x;
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
}
int main(){
    set(3,22);
}
#include <iostream>
using namespace std;
int min()
{
    int arr[10]={9,4,5,6,7,3,1,2,8,10};
    int min=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    cout<<min();
}
#include <iostream>
using namespace std;
int max()
{
    int arr[10]={9,4,5,6,7,3,1,2,8,10};
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    cout<<max();
}
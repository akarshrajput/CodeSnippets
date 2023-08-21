// get() - What element is present at input (index) number in an array.
#include <iostream>
using namespace std;
int get(int index)
{
    int arr[10]={9,4,5,6,7,3,1,2,8,10};
    return arr[index];
}
int main(){
    cout<<get(3);
}
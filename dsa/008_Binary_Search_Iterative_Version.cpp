#include <iostream>
using namespace std;
struct Array{
    int A[20];
    int size;
    int length;
};
// Display Array Elements
void Display(struct Array arr){
    int i;
    cout<<"Elements are : "<<endl;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
void Swap(int *x, int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
// Binary Search
int BinarySearch(struct Array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }
        else if(key<arr.A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    cout<<BinarySearch(arr,5)<<endl;
    // Calling Display() function to display Array
    Display(arr);
    return 0;
}
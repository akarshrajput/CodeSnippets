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
int RBinarySearch(int a[],int l,int h,int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            return mid;

        }
        else if(key<a[mid]){
            return RBinarySearch(a,l,mid-1,key);
        }
        else{
            return RBinarySearch(a,mid+1,h,key);
        }
        return -1;
    }
}
int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    cout<<RBinarySearch(arr.A,0,arr.length,5)<<endl;
    // Calling Display() function to display Array
    Display(arr);
    return 0;
}
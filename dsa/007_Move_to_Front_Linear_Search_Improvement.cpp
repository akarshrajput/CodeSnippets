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
// Linear Search + Transposition
int LinearSearch(struct Array *arr, int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            Swap(&arr->A[i],&arr->A[0]);
            return 0;
        }
    }
    return -1;
}
int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    cout<<LinearSearch(&arr,5)<<endl;
    // Calling Display() function to display Array
    Display(arr);
    return 0;
}
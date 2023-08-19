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
// Append Array
void Append(struct Array *arr, int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    Append(&arr,10);
    // Calling Display() function to display Array
    Display(arr);
    return 0;
}
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
// Delete Element from Array
int Delete(struct Array *arr, int index){
    if(arr->length>0 && index<=arr->length){
        arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
}
int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    Delete(&arr,3);
    // Calling Display() function to display Array
    Display(arr);
    return 0;
}
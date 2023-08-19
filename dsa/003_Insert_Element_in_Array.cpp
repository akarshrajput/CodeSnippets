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
// Insert Element in Array
void Insert(struct Array *arr,int index,int x){
    if(arr->length>0 && index<=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}
int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    Insert(&arr,3,20);
    // Calling Display() function to display Array
    Display(arr);
    return 0;
}
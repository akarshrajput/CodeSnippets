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
// Linear Search
int LinearSearch(struct Array *arr, int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            return i;
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
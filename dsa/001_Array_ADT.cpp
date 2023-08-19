#include <stdio.h>
struct Array{
    int A[20];
    int size;
    int length;
};
// Display Array Elements
void Display(struct Array arr){
    int i;
    printf("Elements are : ");
    for(i=0;i<arr.length;i++){
        printf("%d",arr.A[i]);
    }
}
int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    // Calling Display() function to display Array
    Display(arr);
    return 0;
}
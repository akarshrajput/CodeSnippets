#include<iostream>
#include<stdio.h> // We can use c program in .cpp file using <stdio.h>.
#include<stdlib.h>
using namespace std;

// /*Example 1:-*/
// int main()
// {
//     int a=10;
//     int *p;
//     p=&a;
//     cout<<a<<endl;  // Value of "a" variable
//     cout<<p<<endl;  // Address of "a" variable
//     cout<<*p<<endl;  // Value of "a" variable using pointer
// }

// /*Exapmle 2:-*/ // Storing pointer in heap memory
// int main()
// {
//     int *p;
//     p=(int*)malloc(5*sizeof(int));  // Storing pointer in heap in C language
//     p=new int[5];  // Storing pointer in heap in C++
// }

// // Example 3: Initializing pointer with an array
// int main()
// {
//     int a[5]={1,2,3,4,5};
//     int *p;
//     p=a;
//     for (int i=0;i<5;i++)
//     {
//         cout<<p[i]<<endl;  // Priting all the value of array using pointer
//     }
    
// }

// Example 4: Initialising array in heap
int main()
{
    int *p;
    // "p=new int[5];" -> In C++ for using heap
    p=(int*)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    for (int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    free(p); // For deallocating(deleting) the memory created inside heap
    // "delete [] p;"  -> We use it in C++ for deallocation the memory inside heap
}
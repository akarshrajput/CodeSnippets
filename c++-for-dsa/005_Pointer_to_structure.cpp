#include<iostream>
#include<stdio.h> // We can use c program in .cpp file using <stdio.h>.
#include<stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
// int main()
// {
//     struct rectangle r={10,15};
//     struct rectangle *p=&r;  // Making *p pointer of structure variable
//     r.length=15;
//     p->breadth=20;  // Assign breadth using pointer
// };

// Creating pointer of type structure inside heap.
// int main(){
//     struct rectangle *p;
//     p=(struct rectangle*)malloc(sizeof(struct rectangle));
//     //p=new rectangle; // For C++ creating pointer inside heap
//     p->length=20;
//     p->breadth=30;
//     cout<<p->length<<endl;
//     cout<<p->breadth<<endl;
// };
#include<iostream>
#include<stdio.h> // We can use c program in .cpp file using <stdio.h>.
#include<stdlib.h>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int x,y,z;
    x=10;
    y=5;
    z=add(x,y);
    cout<<"Sum is : "<<z<<endl;
}
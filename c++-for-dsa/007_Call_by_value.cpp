#include<iostream>
#include<stdio.h> // We can use c program in .cpp file using <stdio.h>.
#include<stdlib.h>
using namespace std;
int swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    x=10;
    y=20;
    swap(x,y);
    cout<<"x : "<<x<<", y: "<<y<<endl;
}
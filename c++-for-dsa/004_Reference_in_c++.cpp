#include<iostream>
#include<stdio.h> // We can use c program in .cpp file using <stdio.h>.
#include<stdlib.h>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    cout<<a<<endl;  // Getting value of variable using original data variable
    cout<<r<<endl;  // Getting value of varable using reference
}
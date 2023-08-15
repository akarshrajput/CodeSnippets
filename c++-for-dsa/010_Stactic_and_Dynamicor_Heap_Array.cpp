#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    // Static because created in Stack
    int A[5]={6,7,8,9,10};
    // Dynamic because created in Heap using Array as Pointer
    int *P;
    P = new int[5];
    P[0]=1;
    P[1]=2;
    P[2]=3;
    P[3]=4;
    P[4]=5;
    for (int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    cout<<"\n"<<endl;
    for (int i=0;i<5;i++){
        cout<<P[i]<<endl;
    }
    delete[] P;

    return 0;
}
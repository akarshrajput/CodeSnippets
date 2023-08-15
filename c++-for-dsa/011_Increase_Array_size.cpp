#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    // We can only increase Array size inside Heap so we will use Pointer
    int *P = new int[5];
    P[0]=1;
    P[1]=2;
    P[2]=3;
    P[3]=4;
    P[4]=5;
    int *Q = new int[10];
    for (int i=0;i<5;i++){
        Q[i]=P[i];
    }
    delete []P;
    P=Q;
    Q=NULL;
    for (int i=0;i<10;i++){
        cout<<P[i]<<endl;
    }
    // So we have increased the size of Array from 5 to 10
}
#include <iostream>
using namespace std;
int main()
{
    int size1=4;
    int size2=4;
    int A[size1]={1,2,3,9};
    int B[size2]={5,6,7,8};
    int size3=size1+size2;
    int C[size3];
    int i=0;
    int j=0;
    int k=0;
    while(i<size1 && j<size2)
    {
        if(A[i]<B[j])
        {
            C[k++]=A[i++];
        }
        else
        {
            C[k++]=B[j++];
        }
    }
    for(;i<size1;i++)
    {
        C[k++]=A[i];
    }
    for(;j<size2;j++)
    {
        C[k++]=B[j];
    }
    // Print the Merged sorted Array
    for(int i=0;i<size3;i++)
    {
        cout<<C[i];
    }
}
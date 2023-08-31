#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3];
    cout<<"Enter the elements of matrix 1: "<<endl;
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    cout<<"The Matrix 1 is :"<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr1[i][j]<<"  ";
        }
        cout<<endl<<endl;
    }
    int arr2[3][3];
    cout<<"Enter the elements of matrix 2: "<<endl;
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    cout<<"The Matrix 2 is :"<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr2[i][j]<<"  ";
        }
        cout<<endl<<endl;
    }
    int arr3[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<endl;
    cout<<"Addition of Matrix 1 and 2 is :"<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr3[i][j]<<"  ";
        }
        cout<<endl<<endl;
    }
}
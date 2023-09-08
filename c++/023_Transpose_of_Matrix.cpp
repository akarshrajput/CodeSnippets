#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"Enter the elements of matrix : "<<endl;
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"The Matrix is :"<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl<<endl;
    }
    int arr2[3][3];
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
            arr[j][i]=arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Transpose of Matrix is :"<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl<<endl;
    }
}

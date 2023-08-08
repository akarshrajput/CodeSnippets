#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"How many number to add:";
    cin>>n;
    for(int i;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Addition"<<sum;
}
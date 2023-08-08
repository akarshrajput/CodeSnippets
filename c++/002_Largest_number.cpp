#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int num3;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<"Enter num3: ";
    cin>>num3;
    if(num1>num2 && num1>>num2){
        cout<<"Num1 is Greater";
    }
    else if(num2>num1 && num2>num3){
        cout<<"Num2 is Greater";
    }
    else if(num3>num1 && num3>num1){
        cout<<"Num3 is Greater";
    }
}
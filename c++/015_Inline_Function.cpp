#include <iostream>
using namespace std;
inline int sum(int a,int b){
    return a+b;
}
int main(){
    int p,q;
    cout<<"Enter A : ";
    cin>>p;
    cout<<"Enter B : ";
    cin>>q;
    cout<<"The sum of "<<p<<" and "<<q<<" is "<<sum(p,q)<<endl;
}
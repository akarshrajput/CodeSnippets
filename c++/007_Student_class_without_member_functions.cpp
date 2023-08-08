#include<iostream>
using namespace std;
class student
{
public:
int rn;
char name[20];
float marks;
}s1,s2;
int main()
{
cout<<"Enter roll no 1:-";
cin>>s1.rn;
cout<<"Enter name 1:-";
cin.ignore();
cin.getline(s1.name,20);
cout<<"Enter marks 1:-";
cin>>s1.marks;
cout<<"\n\nEntered details fo first student:----";
cout<<"\nRoll No 1= "<<s1.rn;
cout<<"\nName 1= "<<s1.name;
cout<<"\nMarks 1= "<<s1.marks;
cout<<"Enter roll no 2:-";
cin>>s2.rn;
cout<<"Enter name 2:-";
cin.ignore();
cin.getline(s2.name,20);
cout<<"Enter marks 2:-";
cin>>s2.marks;
cout<<"\n\nEntered details of second student:----";
cout<<"\nRoll No 2= "<<s2.rn;
cout<<"\nName 2= "<<s2.name;
cout<<"\nMarks 2= "<<s2.marks;
}
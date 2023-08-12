#include<iostream>
using namespace std;
class student
{
private:
int rn;
char name[20];
float marks;
public:
void student1()
{
cout<<"Enter roll no 1:-";
cin>>rn;
cout<<"Enter name 1:-";
cin.ignore();
cin.getline(name,20);
cout<<"Enter marks 1:-";
cin>>marks;
cout<<"\n\nEntered details fo first student:----";
cout<<"\nRoll No 1= "<<rn;
cout<<"\nName 1= "<<name;
cout<<"\nMarks 1= "<<marks;
}
void student2()
{
cout<<"Enter roll no 2:-";
cin>>rn;
cout<<"Enter name 2:-";
cin.ignore();
cin.getline(name,20);
cout<<"Enter marks 2:-";
cin>>marks;
cout<<"\n\nEntered details of second student:----";
cout<<"\nRoll No 2= "<<rn;
cout<<"\nName 2= "<<name;
cout<<"\nMarks 2= "<<marks;
}
};
int main()
{
student obj;
obj.student1();
}
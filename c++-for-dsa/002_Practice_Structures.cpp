#include<iostream>
#include<stdio.h> // We can use c program in .cpp file using <stdio.h>.
using namespace std;

/*Example 1:-*/
struct rectangle
{
int length;
int breadth;
};
int main()
{
    struct rectangle a;  // Declaration
    struct rectangle b={10,5};  // Declaration + Initialization
    b.length=15;  // Modify length to 15 from 10
    b.breadth=10;  // Modify breadth to 10 from 5
    cout<<"Area of Rectangle is : "<<b.length*b.breadth<<endl;  // Give me the area of rectangle
}

// /*Example 2:-*/
// struct card  // Deck of 52 cards example
// {
// int face;  // 1,2,3,4,5,6,7,8,9,10,11,12,13
// int shape;  // 0,1,2,3
// int color;  // 0,1
// };
// int main()
// {
//     struct card deck[52]={{1,0,0},{2,0,0},{3,0,0}};
//     cout<<deck[1].face<<endl;
//     cout<<deck[1].shape<<endl;
//     cout<<deck[2].color<<endl;
//     cout<<sizeof(deck)<<endl;  // Print the size of structure variable
// }

// /*Example 3:-*/ Declare structure variable as global variable
// struct card  // Deck of 52 cards example
// {
// int face;  // 1,2,3,4,5,6,7,8,9,10,11,12,13
// int shape;  // 0,1,2,3
// int color;  // 0,1
// } r1,r2,r3,r4;  // If we declare variabe outside the int main() after struct, then we can access it in all the functions, as it will become a global variable.
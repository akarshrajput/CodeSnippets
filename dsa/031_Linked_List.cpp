#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

// Maximum in Linked List
// int Max(Node *p)
// {
//     int max=-234342;
//     while(p!=0)
//     {
//         if(p->data>max)
//         {
//             max=p->data;
//         }
//         p=p->next;
//     }
//     cout<<max;
// }

// Search in Linked List
// int LinearSearch(Node* p,int key)
// {
//     while(p!=0)
//     {
//         if(key==p->data)
//         {
//             cout<<"Key "<<key<<" is found";
//             return 0;
//         }
//         p=p->next;
//     }
// }

int Reverse(Node* p)
{
    while(p!=0)
    {
        cout<<p->data;
        Reverse(p->next);
        return 0;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    Node* head = new Node;
    Node* temp;
    Node* last;
    head->data=arr[0];
    head->next=nullptr;
    last=head;
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
    // Display
    // Node* p=head;
    // while(p!=0)
    // {
    //     cout<<p->data<<" ";
    //     p=p->next;
    // }
    Reverse(head);
}
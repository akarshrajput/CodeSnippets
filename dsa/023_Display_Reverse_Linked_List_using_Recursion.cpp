#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* ptr;
};
// Display Linked list using Recursion
void Display(struct Node* p)
{
    if(p!=nullptr)
    {
        Display(p->ptr);  // We just have to use Display before Print of linked list elements
        cout<<p->data<<" ";
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    Node* head = new Node;
    Node* temp;
    Node* last;
    head->data=arr[0];
    head->ptr=nullptr;
    last=head;
    // Making more Node using loop from array
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->ptr=nullptr;
        last->ptr=temp;
        last=temp;
    }
    Display(head);
    // Display Linked List
    // Node* p=head;
    // while(p!=nullptr)
    // {
    //     cout<<p->data<<" ";
    //     p=p->ptr;
    // }
}
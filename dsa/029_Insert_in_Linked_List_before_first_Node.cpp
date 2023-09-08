#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* InsertAtFirst(Node* head)
{
    Node* t=head;
    t->data=10;
    t->next=head;
    head=t;
    cout<<head->data;
}
int main()
{
    int arr[]={1,2,3,4,5};
    Node* head = new Node;
    Node* last;
    Node* temp;
    head->data=arr[0];
    head->next=nullptr;
    last=head;
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        temp = new Node;
        temp->data=arr[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
    // Display
    Node* p=head;
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    InsertAtFirst(head);
}
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int main()
{
    int arr[]={1,2,3,4,5};
    Node* head = new Node;
    Node* temp;
    Node* last;
    head->data=arr[0];
    head->next=nullptr;
    last=head;
    // Making more Node using loop from array
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
    // Display Linked List
    Node* p=head;
    while(p!=nullptr)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
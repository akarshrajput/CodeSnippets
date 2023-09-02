#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* ImprovedSearch(Node* head,int key)
{
    Node* q=NULL;
    Node* p=head;  // Here I have to assign this valuse to acces head(first) in this function 
    while(p!=0)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=head;
            head=p;
            return p;
        }
        q=p;
        p=p->next;
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
    // Node* p=head;
    // while(p!=0)
    // {
    //     cout<<p->data<<" ";
    //     p=p->next;
    // }
    cout<<ImprovedSearch(head,4);
}
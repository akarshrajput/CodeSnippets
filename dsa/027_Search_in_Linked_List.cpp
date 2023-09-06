#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* Search(Node* p,int key)
{
    while(p!=0)
    {
        if(key==p->data)
        {
            cout<<"Key "<<p->data<<" is found";
            return 0;
        }
        else{
            p=p->next;
        }
    }
    return NULL;
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
    Search(head,3);
}
//reverse a link list//

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};


void insert_end(Node** head_ref,int val)
{
    Node* new_node=new Node();
    new_node->data=val;
    new_node->next=NULL;
    if(*head_ref==NULL)
    {
        (*head_ref)=new_node;
        return ;
    }
    
    Node* temp=(*head_ref);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    return ;
}

void reverse(Node* head)
{
    Node* current=head;
    Node* next=NULL;
    Node* prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

void print(Node* head_ref)
{
    Node* temp=head_ref;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    vector<int>arr={1,2,3,4,5};
    Node* head=NULL;
    for(int i=0;i<arr.size();i++)
    {
        insert_end(&head,arr[i]);
    }
    reverse(head);
    print(head);
}
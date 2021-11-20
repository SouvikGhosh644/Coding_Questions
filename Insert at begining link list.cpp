//Insert at begining //

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void insert_begining(Node** head_ref,int val)
{
    Node* new_node=new Node();
    new_node->data=val;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
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
        insert_begining(&head,arr[i]);
    }
    
    print(head);
}
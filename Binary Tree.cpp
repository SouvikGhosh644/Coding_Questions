#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

Node* buildtree()
{
    int data;
    cin>>data;
    if(data==-1)
        return NULL;
    
    Node* new_node=new Node(data);
    new_node->left=buildtree();
    new_node->right=buildtree();
    
    return new_node;
}

void pre_order(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    pre_order(root->left);
    cout<<root<<" ";
    pre_order(root->right);
}

void post_order(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    pre_order(root->left);
    pre_order(root->right);
    cout<<root<<" ";
}

int main()
{
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int val;
    //     cin>>val;
    //     Node* root=bulidtree(val);
    // }
    Node *root=buildtree();
    pre_order(root);
//     in_order(root);
//     post_order(root);
 }
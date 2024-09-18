#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* left;
       Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }   
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        // 1. ber kora ano
        Node* p= q.front();
        q.pop();

        // 2. jabotiyo sob kaj

        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l==-1) myleft=NULL;
        else myleft= new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);

        p->left=myleft;
        p->right=myright;

        // 3. children gula ke push koro

        if(p->left)  q.push(p->left);
        if(p->right)  q.push(p->right);
    }
    return root;
}
void level_order(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        // 1. ber kora ana
        Node* f=q.front();
        q.pop();

        // 2. jabotiyo ja kaj ase
        cout<<f->val<<" ";
        
        // 3. tar children gulo rakha
        if(f->left != NULL)  q.push(f->left);
        if(f->right != NULL)  q.push(f->right);
    }
}
void insert(Node* &root,int x)
{
    if(root==NULL)
    {
        root=new Node(x);
        return;
    }
    if(x < root->val)
    {
        if(root->left==NULL)
        {
            root->left= new Node(x);
        }
        else
        {
            insert(root->left,x);
        }
    }
    else
    {
        if(root->right==NULL)
        {
            root->right= new Node(x);
        }
        else
        {
            insert(root->right,x);
        }
    }
}
int main()
{
    Node* root=input_tree();
    int x;
    cin>>x;
    insert(root,x);
    level_order(root);
    return 0;
}
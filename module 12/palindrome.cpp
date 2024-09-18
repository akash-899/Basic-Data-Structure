#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
       Node* prev;
       Node(int val)
       {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
       }
};
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode= new Node(val);
    if(tail == NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
int main()
{
     Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insert_tail(head,tail,val);
    }
    Node* i=head;
    Node* j=tail;
    bool flag=true;
    while(i != j)
    {
        if(i->val != j->val)
        {
            flag=false;
            break;
        }
        i=i->next;
        j=j->prev;
    }
    if(flag == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
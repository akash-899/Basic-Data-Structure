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
void print_normal(Node* head)
{
    Node* tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* tmp=tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void insert_at_position(Node* head,int pos,int val)
{
    Node* newNode= new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next; //100->30
    tmp->next = newNode; // 20->100
    newNode->next->prev = newNode; // 100 <- 30
    newNode->prev = tmp; // 20 <-100

}
int size(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_head(Node* &head,Node* &tail,int val)
{
    Node* newNode= new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;

    head = newNode;
}
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
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,v;
        cin>>x>>v;
        if(x == 0)
        {
            insert_head(head,tail,v);
            cout<<"L -> "; print_normal(head);
            cout<<"R -> "; print_reverse(tail);
        }
        else if(x == size(head))
        {
            insert_tail(head,tail,v);
            cout<<"L -> "; print_normal(head);
            cout<<"R -> "; print_reverse(tail);
        }
        else if(x > size(head))
        {
            cout<<"Invalid"<<endl; 
            continue;
        }
        else
        {
            insert_at_position(head,x,v);
             cout<<"L -> "; print_normal(head);
            cout<<"R -> "; print_reverse(tail);
        }
    }
    return 0;
}
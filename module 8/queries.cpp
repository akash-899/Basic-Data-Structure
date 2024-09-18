#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
       Node(int val)
       {
        this->val=val;
        this->next=NULL;
       }
};
void print_linked_list(Node* head)
{
    Node* tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_head(Node* &head,int v)
{
    Node* newNode= new Node(v);
    newNode->next=head;
    head=newNode;
}
void insert_tail(Node* &head,int v)
{
    Node* newNode= new Node(v);
    if(head == NULL)
    {
        head=newNode;
        return;
    }
    Node* tmp= head;
    while(tmp->next != NULL)
    {
        tmp= tmp->next;
    }
    tmp->next=newNode;
}
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while(tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void delete_from_position(Node* head,int v)
{
    Node* tmp=head;
    for(int i=1;i<=v-1;i++)
    {
        tmp=tmp->next;
     
     if(tmp==NULL)
        {
            return;
        }
    
    }
    if(tmp->next==NULL)
    {
        return;
    }
    Node* deleteNode= tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void delete_head(Node* &head)
{
    if(head==NULL)
    {
        return;
    }
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
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
        if(x==0)
        {
            insert_head(head,v);
            print_linked_list(head);
        }
        else if(x==1)
        {
            insert_tail(head,v);
            print_linked_list(head);
        }
        else if(x==2)
        {
            if(v >= size(head))
           {
             print_linked_list(head);
           }
          if(v == 0)
            {
                delete_head(head);
                 print_linked_list(head);
            }
            else
            {
                delete_from_position(head,v);
                print_linked_list(head);
            }
        }
        

    }
    return 0;
}

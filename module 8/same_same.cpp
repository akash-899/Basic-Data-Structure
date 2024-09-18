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

void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode= new Node(val);
    if(head == NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
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
int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    int val1;
    while(true)
    {
        cin>>val1;
        if(val1==-1) break;
        insert_tail(head1,tail1,val1);
    }
      Node* head2=NULL;
    Node* tail2=NULL;
    int val2;
    while(true)
    {
        cin>>val2;
        if(val2==-1) break;
        insert_tail(head2,tail2,val2);
    }
   size(head1);
   size(head2);
   if(size(head1) != size(head2))
   {
    cout<<"NO"<<endl;
    return 0;
   }
   bool flag=true;
   Node* temp1=head1;
   Node* temp2=head2;
   while(temp1 != NULL)
   {
    if(temp1->val != temp2->val)
    {
        flag=false;
        break;
    }
    temp1=temp1->next;
    temp2=temp2->next;
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
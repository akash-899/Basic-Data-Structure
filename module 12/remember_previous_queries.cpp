#include<bits/stdc++.h>
using namespace std;
void print_linked_list(list<int> myList)
{
    cout<<"L -> ";
    for(int val: myList)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"R -> ";
    myList.reverse();
    for(int val : myList)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> myList;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        if(x == 0)
        {
            myList.push_front(v);
        }
        else if(x == 1)
        {
            myList.push_back(v);
        }
        else if(x == 2)
        {
            if(v >= myList.size())
            {
                print_linked_list(myList);
                continue;
            }
            else
            {
              myList.erase(next(myList.begin(),v));
              
            }
        }
       print_linked_list(myList);
    }
    return 0;
}
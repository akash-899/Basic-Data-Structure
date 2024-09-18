#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string> myAddress;
    string add;
    while(true)
    {
        cin>>add;
        if(add == "end")
        {
            break;
        }
        myAddress.push_back(add);
    }
    int q;
    cin>>q;
    list<string> :: iterator cur;
    cur=myAddress.begin();
    while(q--)
    {
        string c;
        cin>>c;
        if(c == "visit")
        {
            string s;
            cin>>s;
            auto it=find(myAddress.begin(),myAddress.end(),s);
            if(it == myAddress.end())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cur=it;
                cout<< *it<<endl;
            }
        }
        else if(c == "next")
        {
            if(next(cur) == myAddress.end())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cur++;
                cout<< *cur<<endl;
            }
        }
        else if(c == "prev")
        {
            if(cur != myAddress.begin())
            {
                cur--;
                cout<<*cur<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
    }
    return 0;
}
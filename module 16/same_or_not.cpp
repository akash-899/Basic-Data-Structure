#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    if(n!=m)
    {
        cout<<"NO"<<endl;
    }
    else{
    bool flag=true;
    while(!s.empty())
    {
        if(s.top()!=q.front())
        {
            flag=false;
            break;
        }
        else
        {
            s.pop();
            q.pop();
        }
    }
    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    }

    return 0;
}
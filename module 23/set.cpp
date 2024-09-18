#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Binary search tree ta duplicate remove korar jonno set use korbo
    set<int> s;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x);  // O(logN)
    }

    if(s.count(10)) cout << "Yes" <<endl; //O(logN)
    else cout << "No" <<endl;

    // for(auto it=s.begin();it !=s.end();it++)
    // {
    //     cout<<*it<<endl;  // O(N)
    // }
    return 0;
}
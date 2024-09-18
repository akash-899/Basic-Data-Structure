#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a[n];
        for(int c:n)
        {
            cin>>a[c];
        }
        sort(a.begin(),a.end(),greater<int>());

    }
    return 0;
}
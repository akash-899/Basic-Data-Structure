#include<bits/stdc++.h>
using namespace std;
int main()
{
    //replace
    // vector<int>v={1,2,3,2,3,5,6,2,6,8,9,2};
    // replace(v.begin(),v.end(),2,100);
    // for(int a: v)
    // {
    //     cout<<a<<" ";
    // }

    //find
    vector<int>v={1,2,3,2,3,5,6,2,6,8,9,2};
    auto it= find(v.begin(),v.end(),10);
    if(it == v.end())  cout<<"Not Found"<<endl;
    else cout<<"Found"<<endl;
    return 0;
}
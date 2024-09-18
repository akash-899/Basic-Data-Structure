#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> v;  type 1
    // vector<int> v(5); type 2
    // vector<int> v(5,12); type 3
    // vector<int> v2(5,100);  type 4
    // vector<int> v(v2);  type 4
    // int a[5]={1,2,3,4,5};
    // vector<int> v(a,a+5);
    vector<int> v={2,3,4};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    return 0;
}
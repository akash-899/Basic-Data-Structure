#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {1,2,3};
    // cout<< myList.max_size();
    // myList.clear();
    myList.resize(2);
    myList.resize(6, 100);
    cout<<myList.size()<<endl;
    for(int val : myList)
    {
        cout<<val<<endl;
    }
    return 0;
}
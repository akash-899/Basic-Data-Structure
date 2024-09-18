#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["sakib al hasan"]=75;  // O(logN)
    mp["akib"]=29;

    if(mp.count("akib"))
    {
        cout<<"Ase"<<endl;
    }
    else
    {
        cout<<"Nai"<<endl;
    }

    // cout<<mp["Tamim iqbal"]<<endl; index value dakhar jonno

    // for(auto it=mp.begin();it!=mp.end();it++)
    // {
    //     cout<<it->first<<" "<< it->second<<endl;  // O(logN)
    // }
    return 0;
}
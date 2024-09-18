#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    string sentence;
    getline (cin,sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> mp;
    string mxword;
    int mxcount=0;
    while(ss >> word)
    {
        mp[word]++;
        if(mp[word] > mxcount)
        {
            mxcount=mp[word];
            mxword=word;
        }
    }
    cout<<mxword<<" "<<mxcount;
    cout<<endl;
 }
    return 0;
}
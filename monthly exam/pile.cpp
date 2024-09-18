#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,b;
    cin>>a>>b;
    int len=strlen(a);
    int length=strlen(b);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<length;j++)
        {
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
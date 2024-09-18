#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> myList = {10,20,30,30,30,60,70,80};
    //  list <int> newList = {100,200,300};
    // newList = myList; 
    // newList.assign(myList.begin(),myList.end());
    // myList.push_back(100);  // tail a insert hoba
    // myList.push_front(100);   // head a insert hoba
    // myList.pop_back();    // tail delete korba
    // myList.pop_front();   // head delete korba
    // myList.insert(next(myList.begin(),2),100);
    // myList.erase(next(myList.begin(),2));
    // myList.insert(next(myList.begin(),3), newList.begin(),newList.end());
    // myList.erase(next(myList.begin(),2),next(myList.begin(),4));
    // replace(myList.begin(),myList.end(),30,100);
    // for(int val : myList)
    // {
    //     cout<<val<<endl;
    // }

    auto it = find(myList.begin(),myList.end(),100);
    if(it == myList.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
    return 0;
}
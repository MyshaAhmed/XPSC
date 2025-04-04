/* 
https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<int> count(26,0);
    vector<char> missing;
    for(auto c : str)
    {
        count[c-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(count[i] == 0)
            missing.push_back('a'+i);
    }
    if(missing.empty())
        cout<<"None"<<endl;
    else
        cout<<missing[0]<<endl;
        // for(auto c : missing)
        //     cout<<c;
        // cout<<endl;
        
    return 0;
}
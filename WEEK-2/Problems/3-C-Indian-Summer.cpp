/* 
https://codeforces.com/problemset/problem/44/A
*/ 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define pf push_front
const int MOD = 1e9 + 7;
/*=======Mysha=======*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<pair<string,string>,bool>mp;
    for (int i = 1; i <= n; i++)
    {
        string leaf,color;
        cin>>leaf>>color;
        mp[{leaf,color}]=true;
    }
   cout<<mp.size()<<endl;
    

    return 0;
}
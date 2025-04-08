/* 
https://codeforces.com/contest/2093/problem/A
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
    
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        if(k==1 || k%2!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
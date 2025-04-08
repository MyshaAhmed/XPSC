/* 
https://codeforces.com/contest/2093/problem/B
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
        int zero_count=0;
        int n;
        cin>>n;
        if(n<10)
        {
            cout<<0<<endl;
            continue;
        }
        string str=to_string(n);
        cout<<"hello:"<<str.length()<<endl;;
        for (auto ch: str)
        {
            if(ch=='0')
                zero_count++;
        }
        cout<<"zero:"<<zero_count<<endl;
        cout<<(str.length())+zero_count-(zero_count-1)<<endl;

    }
    return 0;
}
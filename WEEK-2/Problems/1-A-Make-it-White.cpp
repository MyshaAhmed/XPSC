/* 
https://codeforces.com/problemset/problem/1927/A
*/ 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
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
        int n;
        cin>>n;
        string str;
        cin>>str;
        int start,end;
        for (int i = 0; i < n; i++)
        {
            if(str[i]=='B')
            {
                start=i;
                break;
            }
            
        }
        for (int i = n-1; i >= 0; i--)
        {
            if(str[i]=='B')
            {
                end=i;
                break;
            }

        }
            if(start==end)
                cout<<1<<endl;
            else
                cout<<end-start+1<<endl;
    }

    return 0;
}
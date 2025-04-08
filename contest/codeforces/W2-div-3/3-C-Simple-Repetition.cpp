/* 
https://codeforces.com/contest/2093/problem/C
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
    while (t--)
    {

        int x,k;
        cin>>x>>k;
        ll y=0;

        for(ll i=0;i<k;i++)
            y=y*10+x;

       int flag=true;
       for (ll i = 2; i <= sqrt(y); i++)
       {
            if(y%i==0)
            {
                flag=false;
                break;
            }
       }
        if(flag && y!=1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
       
    }
    

    return 0;
}
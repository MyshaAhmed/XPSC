/* 
https://codeforces.com/problemset/problem/1883/B
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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        vector<int> freq(26, 0);
        for(int i=0; i<n; i++)
            freq[str[i]-'a']++;

        int oddCount=0;
        for ( auto it: freq)
        {
            if(it%2!=0)
                oddCount++;
        }   

        if (k < oddCount - 1) 
            cout << "NO" <<endl;
        else 
            cout << "YES" <<endl;
  

    }
    return 0;
}
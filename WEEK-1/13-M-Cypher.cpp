/* 
https://codeforces.com/problemset/problem/1703/C
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
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i < n; i++)
        {
            int val;
            string str;
            cin>>val>>str;
            for(int j = 0; j <val; j++)
            {
                if(str[j]=='U')
                    v[i]--;
                else
                    v[i]++;
                if(v[i]>9)
                    v[i]=0;
                else if(v[i]<0)
                    v[i]=9;
            }
            
        }
        for(auto it:v)
            cout<<it<<" ";
        cout<<endl;
        
    }
    return 0;
}
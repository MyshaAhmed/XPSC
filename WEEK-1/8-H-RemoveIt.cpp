/* 
https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    v.erase(remove(v.begin(),v.end(),x),v.end());
    
    if(v.empty())
        cout<<endl;
    else
    {
        for(auto val:v)
            cout<<val<<" ";
    }
    
    return 0;
    
}
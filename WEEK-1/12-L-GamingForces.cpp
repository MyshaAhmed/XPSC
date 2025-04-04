/* 
https://codeforces.com/problemset/problem/1792/A
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,countOne=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        
        for(int i=0;i<=n;i++)
        {
            if(v[i]==1)
                countOne++;
        }
        int pairOne=countOne/2;
        int remainingOne=countOne%2;
        int valGreaterThanOne=n-countOne;

        int moveCount=valGreaterThanOne+pairOne+remainingOne;

        cout<<moveCount<<endl;
    }
    
    return 0;
}
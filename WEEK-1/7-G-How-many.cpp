/* 
https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,count=0;
    cin>>s>>t;
    int n=s;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            for(int k=0;k<=n;k++)
                if(((i+j+k)<=s && (i*j*k)<=t))
                    count++;
            
    cout<<count<<endl;
    
    return 0;
    
}
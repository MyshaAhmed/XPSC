/* 
https://codeforces.com/problemset/problem/1722/B
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1>>str2;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(str1[i]!=str2[i] && !(str1[i]=='B' && str2[i]=='G'||str2[i]=='B' && str1[i]=='G'))
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
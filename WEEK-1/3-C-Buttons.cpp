/* 
https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,coin=0;
    cin>>a>>b;
    if(a>b)
        coin=a+(a-1);
    else if(b>a)
        coin=b+(b-1);
    else
        coin=a+b;
        
    cout<<coin<<endl;
    
    return 0;
}
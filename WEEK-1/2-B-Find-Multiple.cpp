/* 
https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c,num=-1 ;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++)
    {
        if(i%c==0)
        {
            num = i;
            break;
        }
    }
    cout<<num<<endl;
    return 0;
    
}
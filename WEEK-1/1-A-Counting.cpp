/* 
https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a>>b;
    // int count = 0;
    // if(b>a)
    //     for(int i=a;i<=b;i++)
    //         count++;
    // cout << count<<endl;
    if(b>=a)
        cout << (b-a)+1<<endl;
    else
        cout <<0<<endl;
    return 0;
}
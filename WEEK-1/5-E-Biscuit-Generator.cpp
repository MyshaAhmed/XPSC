/* 
https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c, buiscuit=0;
    cin >> a >> b >> c;
   
    if(c>=a)
    {
        buiscuit=(c/a)*b;
    }
    cout << buiscuit<< endl; 
    return 0;
}
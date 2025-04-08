/* 
https://codeforces.com/problemset/problem/381/A
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int start=0,end=n-1,sereja=0,dima=0;
    int flag=true;
    while(start<=end)
    {
        if(flag)
        {
            if(v[start]>=v[end])
            {
                sereja += v[start];
                start++;
            }
            else
            {
                sereja += v[end];
                end--;
            }
        }
        else
        {
            if(v[start]>=v[end])
            {
                dima += v[start];
                start++;
            }
            else
            {
                dima += v[end];
                end--;
            }
        }
        flag=!flag;
    }
    cout << sereja << " " << dima << endl;

    return 0;
}
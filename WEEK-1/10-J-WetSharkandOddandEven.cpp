/* 
https://codeforces.com/problemset/problem/621/A
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
// =====Mysha===========

int main()
{
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    long long sum=0;
    long long min_odd=LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(arr[i]%2!=0 && arr[i]<min_odd)
            min_odd=arr[i];
    }
    if(sum%2==0)
        cout<<sum<<endl;
    else
        cout<<sum-min_odd<<endl;
    

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// // ============================WA===================>
// int main()
// {
//     int n;
//     cin>>n;
//     vector<long long> arr(n);
//     for(int i=0; i<n; i++)
//         cin>>arr[i];
//     vector<long long>prefix(n);
//     prefix[0]=arr[0];
//     for(int i=1; i<n; i++)
//         prefix[i]=prefix[i-1]+arr[i];

//     int idx=0;
//     bool flag=false;
//     for(int i=n-1; i>=0; i--)
//     {
//         if(prefix[i]%2==0)
//         {
//             idx=i;
//             flag=true;
//             break;
//         }
//     }
//     if(flag)
//         cout<<prefix[idx]<<endl;
//     else
//         cout<<0<<endl;
//     return 0;
// }



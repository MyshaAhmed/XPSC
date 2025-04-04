#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str=to_string(n);
    int len=str.length();
    if(len!=4)
    {
        for(int i=0; i<4-len; i++)
            cout<<"0";
        cout<<n;
    }
    else
        cout<<n<<endl;

    return 0;
}
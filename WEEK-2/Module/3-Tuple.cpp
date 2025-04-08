#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Tuple:
    // ===================================>

    // 1) method-1: Declaration:
    // -------------------------
   tuple<string,int,string>t=make_tuple("Rahim",10,"0131");
   cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;

   // 1) method-2: Declaration:
    // -------------------------
    tuple<string,int,string>t2={"Rahim",10,"0131"};
    

    // Printing a tuple:
    //--------------------
    // method-1: 
    cout<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<endl; 

    // method-2:
    // auto [x,y,z]=t;
    auto [name,roll,num]=t2;
    cout<<name<<" "<<roll<<" "<<num<<endl;

    
    // Array of tuples input:
    tuple<string, int, string> arr[3];
    for(int i = 0; i < 3; i++)
    {
        string s1, s2;
        int num;
        cin >> s1 >> num >> s2;
        arr[i] = make_tuple(s1, num, s2);
    }

    // Array of tuples output:
    for(int i = 0; i < 3; i++)
    {
        cout << get<0>(arr[i]) << " " << get<1>(arr[i]) << " " << get<2>(arr[i]) << endl;
    }
    // array of tuples output:
    // Output using structured binding
    for(int i = 0; i < 3; i++)
    {
        auto [first, second, third] = arr[i];
        cout << first << " " << second << " " << third << endl;
    }


    return 0;
}
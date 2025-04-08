#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // pair:
    // ===================================>

    // 1) method-1: Declaration:
    // -------------------------
    pair<string,int> student=make_pair("Rahim",10);
    cout<<student.first<<" "<<student.second<<endl;

    // 2) method-2:
    // ---------------
    pair<string,int> student2;
    student2.first="Shahjahan";
    student2.second=12;
    cout<<student2.first<<" "<<student2.second<<endl;

    // 3) method-3: Declaration:
    // --------------------------
    pair<string,int> student3={"Karim",11};
    cout<<student3.first<<" "<<student3.second<<endl;

    // 4) method-4:
    // ------------
    auto [name,roll]=student;
    cout<<name<<" "<<roll<<endl;

    // Changing a value:
    student.second=13;
    cout<<student.first<<" "<<student.second<<endl;

    // array of pairs:
    // ================
    // int a[n];
    pair<string,int> p[5];

    // array of pairs input:
    for (int i = 0; i < 5; i++)
    {
        cin>>p[i].first>>p[i].second;
    }

    // array of pairs output:
    // 1) method-1
    // -----------
    for(auto [x,y]:p)
    {
        cout<<x<<" "<<y<<endl;
    }
    // 2) method-2: for older versions of compiler:
    // ---------------------------------------------
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }


    // nested pair: can store multiple values: ==> more than 2 values:
    // ----------------------------------------------------------------
    pair<string,pair<int,string>> p2={"Mysha",{166,"016182997900"}};

    // accessing elements:
    string name=p2.first;
    int roll=p2.second.first;
    string phone=p2.second.second;

    // printing:
    cout<<name<<" "<<roll<<" "<<phone<<endl;
    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // vector: dynamic array:
    // ========================

    // vector input: 2 ways:
    // ---------------------

    // way-1:
    vector<int>v(5);
    for (int i = 0; i < v.size(); i++)  // v.size()---> O(n)
        cin>>v[i];
    
    // way-2:
    vector<int>v1;
    for (int i = 0; i < 5; i++)  // v.size()---> O(n)
    {
        int x;
        cin>>x;
        v.push_back(x); // v.push_back()--> O(1)
    }
    v1.pop_back(); //v.pop_back()--->O(1)

    // vector output:
    // ---------------
    for (int i = 0; i < 5; i++)
        cout<<v[i]<<" ";
    cout<<endl;

    //Accesing vector elements:
    // ------------------------
    cout<<v1.front()<<endl; // v.front()--->O(1)
    cout<<v1.back()<<endl;  // v.back()--->O(1)
    
    // empty check:
    // -------------
    if(v.empty()) // v.empty()--->O(1)
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;

    // clearing vector:
    // -----------------
    v.clear(); // v.clear()--->O(n)

    // vector assign: without using loop we can assign values like this in vectors
    // ---------------
    int n=5;
    vector<int> v2(n); // v--->O(n)
    vector<int> v3(n,5); // v--->O(n)
    v.assign(n,5);//---> 55555  v.assign(n,5)----> o(n)

    // vector resize():
    // ----------------
    vector<int> v4(5); // v--->O(n) 
    v4.resize(4);
    for (int i = 0; i < v4.size(); i++)
        cout<<v4[i]<<" ";
    cout<<endl;

    v4.resize(6);
    for (int i = 0; i < v4.size(); i++)
        cout<<v4[i]<<" ";
    cout<<endl;

    // vector Iterators: v.begin(), v.rbegin(), v.end(), v.rend() -----> O(1)
    // ------------------------------------------------------------

    // int i=0;
    //1) auto it =v.begin(); ---> same

    auto it =v.begin();
    cout<<*it<<endl; // * to print value of iterator

    auto it2=v.end();
    cout<<*it<<endl; // * to print value of iterator

    // full vector traverse with iterator:
    // ------------------------------------
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    // last element value access: --v.end()
    // ---------------------------------- 
    auto lastElement=--v.end();
    cout<<*lastElement<<endl;

    // vector reverse():
    // -----------------

    reverse(v.begin(),v.end());
    for(auto val: v) //-----> range based for loop
        cout<<val<<" ";
    cout<<endl;

    // vector sort(): -----> O(nlogn)
    // --------------

    sort(v.begin(),v.end());
    for(auto val: v) //-----> range based for loop
        cout<<val<<" ";
    cout<<endl;

    // vector reverse sort: 2 ways:
    // -----------------------------

    // way-1:
    // -------
    sort(v.rbegin(),v.rend());
    for(auto val: v) //-----> range based for loop
        cout<<val<<" ";
    cout<<endl;

    // way-2:
    // -------
    sort(v.begin(),v.end(),greater<int>());
    for(auto val: v) //-----> range based for loop
        cout<<val<<" ";
    cout<<endl;


    // Iterator min_element:
    // ---------------------
    auto mn=min_element(v.begin(),v.end()); // will return the first min element
    cout<<*mn<<endl;

    // Iterator max_element:
    // ---------------------
    auto mx=max_element(v.begin(),v.end()); // will return the first max element
    cout<<*mx<<endl;

    // Iterator position:
    // -------------------
    int maxElementPosition=mx-v.begin();
    cout<<maxElementPosition<<endl;
    

    return 0;
}
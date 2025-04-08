#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Deque: is almost similar to vector: supports most of the vector functionalities
    //--------

    // Deque Input: 2 ways:
    // -----------

    // way-1:
    //-------
    int n=5;
    deque<int> dq(n);
    for (int i = 0; i < 0; i++)
        cin>>dq[i];
    
    // way-2:
    //-------
    deque<int> dq1;
    for (int i = 0; i < 0; i++)
    {
        int x;
        cin>>x;
        dq1.push_back(x);
    }

    // Deque output:
    // -------------
    for(auto x: dq)
        cout<<x<<" ";
    cout<<endl;

    // # vector doesnt support push_front(), pop_front(), deque does with O(1)

    // Deque fornt element insert, delete and access    
    dq.push_front(2);
    dq.pop_front();
    cout<<dq.front();
    
    // Deque back element insert, delete and access    
    dq.push_back(2);
    dq.pop_back();
    cout<<dq.back();
       
    // Draw: deque consumes extra memory for storing 2 pointers, which vector does not, so if we dont 
    //       have to perform front operations, using vector is prefered.
    

    return 0;
}
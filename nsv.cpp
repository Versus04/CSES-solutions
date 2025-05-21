#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int> nums(n,-1);
    
    stack<int> st;
    vector<int>ans(n,0);
    for(int i =0 ;i < n;i++)
    {
        cin>>nums[i];
        while(!st.empty() && nums[st.top()-1]>=nums[i])st.pop();
        if(!st.empty())ans[i]=st.top();
        st.push(i+1);
    }
    for(auto it:ans)cout<<it<<" "; 
}
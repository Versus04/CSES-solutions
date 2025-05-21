#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,x;
    cin>>n>>x;
    vector<int>nums(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    if(n<3)
    {
        cout<<"IMPOSSIBLE";
    return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            for(int k=j;k<n;k++)
            {
                if(i!=j && i!=k && j!=k){int sum = nums[i]+nums[j]+nums[k];
                if(sum==x)
                {
                    cout<<i+1<<" "<<j+1<<" "<<k+1;
                    return 0;
                }}
            }
        }
    }
    
    cout<<"IMPOSSIBLE";
    return 0;
}
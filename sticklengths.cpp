#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n ;
    cin>>n;
    vector<long long> nums;
    for(long long i=0;i<n;i++){long long x;cin>>x;nums.push_back(x);}
    sort(nums.begin(),nums.end());
    long long ans=0;
    long long median = nums[n/2];
    for(long long i=0;i<n;i++)
    {
        ans+=abs(median-nums[i]);
    }

    cout<<ans;

    return 0;
}
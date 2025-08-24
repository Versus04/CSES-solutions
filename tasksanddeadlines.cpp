#include <bits/stdc++.h>
using namespace std;
#define ll long long
static bool cmp(pair<ll,ll>a , pair<ll,ll>b)
{
    return a.first<b.first;
}
int main(){
    int n;
    cin>>n;
    vector<pair<ll,ll>>nums;
    for(int i=0; i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        nums.push_back({x,y});
    }
    sort(nums.begin(),nums.end());
    ll ans=0;
    ll curr=0;
    for(auto it: nums)
    {
        curr+=it.first;
        ans+=(it.second-curr);
    }
    cout<<ans;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>nums(n,0);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    ll l=0;
    ll r=0;
    ll cnt=0;
    unordered_map<ll,ll>mpp;
    while(r<nums.size()){
        mpp[nums[r]]++;
        while((int)mpp.size()>k){
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0)mpp.erase(nums[l]);
            l++;
        }
        cnt+=r-l+1;
        r++;
    }
    cout<<cnt;

}
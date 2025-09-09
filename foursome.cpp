#include <bits/stdc++.h>
using namespace std;
static bool cmp(pair<int,int>a ,pair<int,int>b)
{
    return a.first<b.first;
}
int main()
{
    int n;
    int t;
    cin>>n>>t;
    vector<int>ans;
    vector<pair<int,int>>nums(n,{0,0});
    for(int i=0 ;i<n;i++)
    {
        cin>>nums[i].first;
        nums[i].second=i;
    }
            bool flag=false;

    sort(nums.begin(),nums.end(),cmp);
    for(int i=0;i<n-3;i++)
    { if (i > 0 && nums[i] == nums[i-1]) continue;
        for(int j=i+1;j<n-2;j++){if (j != i + 1 && nums[j] == nums[j-1]) continue;
        int l=j+1;
        int k=n-1;
        while(j<k){
        long long sum = nums[i].first+nums[j].first+nums[k].first+nums[l].first;
                if(sum>t)
                {
                    k--;
                }
                else if(sum<t)  
                {
                    l++;
                }
                else
                {   
                    ans.push_back(nums[i].second);
                    
                    ans.push_back(nums[j].second);
                    
                    ans.push_back(nums[k].second);
                    ans.push_back(nums[l].second);
                    flag=true;
                    break;

                }
                
            }
        if(flag)break;
    }
    if(flag)break;
    }
    if(flag)for(auto it: ans)
    {
        cout<<it+1<<" ";
    }
    else{
        cout<<"IMPOSSIBLE";
    }
    }

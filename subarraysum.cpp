#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n ,target;
    cin>>n>>target;
    map<long long,long long>mpp;
    long long cnt=0;
    mpp[0]=1;
    long long sum=0;
    for(int i =0 ; i < n;i++)
    {
        long long x;
        cin>>x;
        sum+=x;
       
        if(mpp.find(sum-target)!=mpp.end())cnt+=mpp[sum-target];
         mpp[sum]++;
        }
    cout<<cnt;
}
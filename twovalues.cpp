#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n ;
    long long x;
    cin>>n>>x;
    vector<long long> a(n,0);
    map<long long,long long>mpp;
    for(long long i= 0; i<n;i++)
    {
        cin>>a[i];
        long long complement = x-a[i];
        if(mpp.find(complement)!=mpp.end())
        {
            cout<<mpp[complement]+1<<" "<<i+1;
            return 0; 
        }
        mpp[a[i]]=i;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;

}
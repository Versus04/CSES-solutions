#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    ll maxi =LONG_MIN;
    ll sum=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        sum+=x;
        maxi=max(maxi,x);
    }

    cout<<max(2*maxi,sum);
}
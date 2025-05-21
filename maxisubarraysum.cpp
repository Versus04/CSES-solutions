#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n ;
    cin>>n;

    ll maxi = INT_MIN;
    ll currsum=0;
     for (int i = 0; i < n; i++) {
        ll m;
        cin >> m;
        currsum = max(m, currsum + m);
        maxi = max(maxi, currsum);
    }
    cout<<maxi;
}
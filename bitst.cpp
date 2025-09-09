#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    long long n;
    cin>>n;
    long long ans=1;
    while(n>0)
    {
        ans*=2;
        ans%=MOD;
        n--;
    }
    cout<<ans;

    return 0;
}
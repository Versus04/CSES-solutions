#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long long x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<(x*x - (x-1));

        }else if(x>y){
            if(x%2==0)
            {
                cout<<(x*x - (x-1))+(x-y);
            }else cout<<(x*x - (x-1))-(x-y);
        }
        else{
            if(y%2==0)
            {
                cout<<(y*y-(y-1))-(y-x);
            }
            else cout<<(y*y-(y-1))+(y-x);
        }
        t--;
        cout<<endl;
        
    }
}
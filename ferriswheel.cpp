#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    int x;
    cin>>n>>x;
    vector<int> pi;
    for(int i= 0 ;i < n;i++)
    {
        int m;
        cin>>m;
        pi.push_back(m);
    }
    sort(pi.begin() ,pi.end());
    int i=0;
    int cnt=0;
    int j =n-1;
    while(i<j)
    {
        if((pi[i]+pi[j])<=x)
        {
            cnt++;
            i++;
            j--;
        }
        else {
            cnt++;
            j--;
        }
    }
    if(i==j)cnt++;
    cout<<cnt;
}
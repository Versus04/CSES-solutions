#include <bits/stdc++.h>
using namespace std;
int main(){

    int n , m ,k;
    cin>>n>>m>>k;
    vector<int> apa;
    vector<int> ava;
    for(int i= 0 ; i < n;i++){int xs ; cin>>xs; apa.push_back(xs);}
    for(int i= 0 ; i < m;i++){int xs ; cin>>xs; ava.push_back(xs);}
    sort(apa.begin(),apa.end());
    sort(ava.begin(),ava.end());
    int i= 0;
    int j =0;
    int cnt=0;
    while(i<n && j<m)
    {
        if(abs(apa[i]-ava[j])<=k){
            cnt++;
            i++;
            j++;
        }
        else if(ava[j]>apa[i]+k){
            i++;
        }
        else if(ava[j]<apa[i]-k){
            j++;
        }
    }
    cout<<cnt;
}
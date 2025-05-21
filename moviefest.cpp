#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.second < b.second; 
}

int main()
{
    int n ;
    cin>>n;
    vector<pair<int ,int >> movies;
    for(int i= 0; i< n;i++)
    {
        int a ,b;
        cin>>a>>b;
        pair<int,int>x ={a,b};
        movies.push_back(x);
    }
    sort(movies.begin(),movies.end(), cmp);
    int cnt=0;
    int lastshow=0;
    for(int i= 0 ; i<n;i++)
    {
        int start = movies[i].first;
        int end = movies[i].second;
        if(lastshow==0){lastshow=end;cnt++;}
        else if(start>=lastshow){cnt++; lastshow=end;}
    }
    cout<<cnt;

}
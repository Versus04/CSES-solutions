#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    set<int> st;
    for(int i =0 ;i < x;i++)
    {
        int m ;
        cin>>m;
        st.insert(m);
    }
    cout<<st.size();
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    int x;
    cin>>n;
    cin>>x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0, count = 0;
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1; 
    for(int i = 0 ;i < n;i++)
    {
        sum+=arr[i];
        if(prefixCount.find(sum-x)!=prefixCount.end())
        {
            count+=prefixCount[sum-x];
        }
        prefixCount[sum]++;
    }
    cout<<count;

}

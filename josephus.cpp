#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==1)cout<<1;
    else{list<int> nums;
    for (int i = 1; i <= n; i++) nums.push_back(i);

    auto it = next(nums.begin()); 
    while (!nums.empty()) {
        cout << *it << " ";
        it = nums.erase(it); 
        if (it == nums.end()) it = nums.begin(); 
        if (nums.empty()) break;
        ++it; 
        if (it == nums.end()) it = nums.begin(); 
    }}
    return 0;
}

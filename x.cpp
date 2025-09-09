#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
            bool flag = false;
            long long a,b;
            cin>>a>>b;
            long long ans = -1;
for (long long i = 1; i * i <= b; i++) {
    if (b % i == 0) {
        long long k1 = i;
        long long k2 = b / i;

        long long val1 = a * k1 + b / k1;
        if (val1 % 2 == 0) ans = max(ans, val1);

        long long val2 = a * k2 + b / k2;
        if (val2 % 2 == 0) ans = max(ans, val2);
    }
}
cout << ans << "\n";

    }
    return 0;
}

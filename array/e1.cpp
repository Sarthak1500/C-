#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int max_sum = LLONG_MIN;  
        for (int k = 0; k < n; ++k) {
            int current_sum = 0;
            for (int i = 0; i < n; ++i) {
                current_sum += (a[k] ^ a[i]);
            }
            max_sum = max(max_sum, current_sum);  
        }

        cout << max_sum << '\n';
    }

    return 0;
}

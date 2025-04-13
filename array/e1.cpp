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

        vector<int> bit_count(30, 0);
        
        for (int i = 0; i < n; ++i) {
            for (int bit = 0; bit < 30; ++bit) {
                if (a[i] & (1 << bit)) {
                    bit_count[bit]++;
                }
            }
        }

        int max_sum = LLONG_MIN;

        for (int k = 0; k < n; ++k) {
            int current_sum = 0;
            
            for (int bit = 0; bit < 30; ++bit) {
                int cnt1 = bit_count[bit];
                int cnt0 = n - cnt1;
                
                if (a[k] & (1 << bit)) {
                    current_sum += cnt0 * (1 << bit);
                } else {
                    current_sum += cnt1 * (1 << bit);
                }
            }

            max_sum = max(max_sum, current_sum);
        }

        cout << max_sum << '\n';
    }

    return 0;
}

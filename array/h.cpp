#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        while (q--) {
            int k, l, r;
            cin >> k >> l >> r;
            --l; --r;
            int ans = 0;
            for (int i = l; i <= r; ++i) {
                int temp = k;
                while (temp % a[i] == 0) temp /= a[i];
                ans += temp;
            }
            cout << ans << '\n';
        }
    }

    return 0;
}

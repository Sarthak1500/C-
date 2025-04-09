#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        map<int, int> freq;
        for (int x : a) freq[x]++;

        int low = 0, high = n, ans = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            int sets = 0;
            for (int i = 0; i < mid; ++i) {
                sets += freq[i];
            }

            if (sets >= k * mid) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}

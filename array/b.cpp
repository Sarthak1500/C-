#include <bits/stdc++.h>
using namespace std;

int minDigitsToRemove(string& s) {
    int n = s.size();
    int min_removed = n;
    long double min_cost = 1e18;
    for (int mask = 1; mask < (1 << n); ++mask) {
        string num_str = "";
        int digit_sum = 0;

        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                num_str += s[i];
                digit_sum += s[i] - '0';
            }
        }

        if (digit_sum == 0) continue;
        long long num = stoll(num_str);
        long double cost = (long double)num / digit_sum;
        int removed = n - __builtin_popcount(mask);

        if (cost < min_cost || (fabs(cost - min_cost) < 1e-9 && removed < min_removed)) {
            min_cost = cost;
            min_removed = removed;
        }
    }
    return min_removed;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minDigitsToRemove(s) << '\n';
    }
    return 0;
}

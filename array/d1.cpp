#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        bool possible = true;

        while (i < p.length() && j < s.length()) {
            if (p[i] != s[j]) {
                possible = false;
                break;
            }
            
            // Count consecutive occurrences of the same character in `s`
            int count_s = 0;
            while (j < s.length() && s[j] == p[i]) {
                ++count_s;
                ++j;
            }

            // We need either 1 or 2 occurrences to be valid
            if (count_s < 1 || count_s > 2) {
                possible = false;
                break;
            }
            
            ++i;  // Move to the next character in `p`
        }

        // Check if both strings are fully processed and matched correctly
        if (i == p.length() && j == s.length()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

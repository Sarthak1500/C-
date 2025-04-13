#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> grid(n, vector<int>(m));

        // Start filling the grid row by row
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                grid[i][j] = ((i + j) % k) + 1;
            }
        }

        // Output the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << grid[i][j] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}

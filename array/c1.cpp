#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> G(n, vector<int>(n));
        map<int, vector<int>> diag;

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                cin >> G[i][j];
                diag[i + j + 2].push_back(G[i][j]);
            }

        vector<int> p(2 * n + 1);
        unordered_set<int> used;

        for (int k = 2; k <= 2 * n; ++k) {
            sort(diag[k].begin(), diag[k].end());
            diag[k].erase(unique(diag[k].begin(), diag[k].end()), diag[k].end());
            p[k] = diag[k][0];
            used.insert(p[k]);
        }

        int total = (2 * n) * (2 * n + 1) / 2;
        int sum_used = accumulate(used.begin(), used.end(), 0);
        p[1] = total - sum_used;

        for (int k = 1; k <= 2 * n; ++k) cout << p[k] << " ";
        cout << '\n';
    }

    return 0;
}

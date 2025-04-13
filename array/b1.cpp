#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int l1 = l;
        int r1 = l1 + m;

        cout << l1 << " " << r1 << '\n';
    }

    return 0;
}

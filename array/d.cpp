#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<ll, ll> find_position(ll x, ll y, int size, ll base) {
    if (size == 2) {
        ll mat[2][2] = {{1, 4}, {3, 2}};
        return {base + mat[x][y] - 1, 0};
    }

    int half = size / 2;
    ll area = 1LL * half * half;
    if (x < half && y < half) {
        return find_position(x, y, half, base);
    } else if (x >= half && y >= half) {
        return find_position(x - half, y - half, half, base + area);
    } else if (x >= half && y < half) {
        return find_position(x - half, y, half, base + 2 * area);
    } else {
        return find_position(x, y - half, half, base + 3 * area);
    }
}

pair<ll, ll> find_coordinates(ll d, int size, ll base, ll x0, ll y0) {
    if (size == 2) {
        ll mat[2][2] = {{1, 4}, {3, 2}};
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j)
                if (base + mat[i][j] - 1 == d)
                    return {x0 + i + 1, y0 + j + 1};
    }

    int half = size / 2;
    ll area = 1LL * half * half;

    if (d < base + area) {
        return find_coordinates(d, half, base, x0, y0);
    } else if (d < base + 2 * area) {
        return find_coordinates(d, half, base + area, x0 + half, y0 + half);
    } else if (d < base + 3 * area) {
        return find_coordinates(d, half, base + 2 * area, x0 + half, y0);
    } else {
        return find_coordinates(d, half, base + 3 * area, x0, y0 + half);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int size = 1 << n;

        while (q--) {
            string type;
            cin >> type;
            if (type == "->") {
                ll x, y;
                cin >> x >> y;
                auto [val, _] = find_position(x - 1, y - 1, size, 1);
                cout << val << '\n';
            } else if (type == "<-") {
                ll d;
                cin >> d;
                auto [x, y] = find_coordinates(d, size, 1, 0, 0);
                cout << x << ' ' << y << '\n';
            }
        }
    }
    return 0;
}

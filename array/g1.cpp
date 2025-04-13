#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int q;
        cin >> q;

        vector<int> arr;
        int rizziness = 0;
        bool reversed = false;

        while (q--) {
            int s;
            cin >> s;

            if (s == 1) {
                // Cyclic shift operation
                if (!arr.empty()) {
                    int last = arr.back();
                    arr.pop_back();
                    arr.insert(arr.begin(), last);
                    rizziness = 0;

                    // Recalculate the rizziness for this cyclic shift
                    for (int i = 0; i < arr.size(); i++) {
                        rizziness += arr[i] * (i + 1);
                    }
                }
            } 
            else if (s == 2) {
                // Reverse operation
                reversed = !reversed;
                rizziness = 0;

                // Recalculate the rizziness for the reverse operation
                if (reversed) {
                    for (int i = 0; i < arr.size(); i++) {
                        rizziness += arr[arr.size() - i - 1] * (i + 1);
                    }
                } else {
                    for (int i = 0; i < arr.size(); i++) {
                        rizziness += arr[i] * (i + 1);
                    }
                }
            } 
            else if (s == 3) {
                // Append operation
                int k;
                cin >> k;
                arr.push_back(k);
                int index = arr.size();
                rizziness += k * index;
            }

            // Output the current rizziness after each operation
            cout << rizziness << '\n';
        }
    }

    return 0;
}

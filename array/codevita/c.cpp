#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> id(n), cost(n);
    for (int i = 0; i < n; i++) cin >> id[i];
    for (int i = 0; i < n; i++) cin >> cost[i];

    int budget;
    cin >> budget;

    int maxItems = 0, maxValue = 0;

    for (int i = 0; i < n; i++) {
        int c = cost[i];
        if (c == 0) continue; // Skip if the cost is 0 to avoid division by zero
        int maxQty = budget / c;
        int totalItems = 0, totalValue = 0;

        for (int qty = 1; qty <= maxQty; qty++) {
            int curItems = 0, curValue = 0;

            for (int j = 0; j < n; j++) {
                if (i != j && id[i] % id[j] == 0) {
                    curItems += qty;
                    curValue += qty * cost[j];
                }
            }

            if (curItems > totalItems || 
                (curItems == totalItems && curValue > totalValue)) {
                totalItems = curItems;
                totalValue = curValue;
            }
        }

        if (totalItems > maxItems || 
            (totalItems == maxItems && totalValue > maxValue)) {
            maxItems = totalItems;
            maxValue = totalValue;
        }
    }

    cout << maxItems << " " << maxValue;
    return 0;
}

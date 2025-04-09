#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool checkPrimeByString(string yStr) {
    if (yStr.size() <= 18) {
        long long y = stoll(yStr);
        return isPrime(y);
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;

        string yStr = "";
        for (int i = 0; i < k; ++i)
            yStr += x;

        cout << (checkPrimeByString(yStr) ? "YES" : "NO") << endl;
    }
    return 0;
}

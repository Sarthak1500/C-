#include <iostream>
#include <vector>
using namespace std;

vector<int> generatePrimes(int n) {
    int limit = n * 20; 
    vector<bool> isPrime(limit, true);
    vector<int> primes;
    
    isPrime[0] = isPrime[1] = false; 
    
    for (int i = 2; i < limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j < limit; j += i) {
                isPrime[j] = false;
            }
        }
        if (primes.size() >= n) break; 
    }
    return primes;
}

int main() {
    int x, y;
    cin >> x >> y;

    vector<int> primes = generatePrimes(max(x, y));

    int xth_prime = primes[x - 1]; 
    int yth_prime = primes[y - 1];

    cout << (xth_prime * yth_prime - 1) << endl;
    return 0;
}

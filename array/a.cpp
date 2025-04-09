#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  
    while (n--) {
        int k;
        cin >> k;
        if (k % 2 == 1)
            cout << "YES" << endl; 
        else
            cout << "NO" << endl;  
    }
    return 0;
}

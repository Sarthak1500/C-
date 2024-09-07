#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = -1;
    int x;
    cin >> x;
    int n;  
    cin >> n;
    int arr[n];  // Declare array with size n

    // Input the array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Searching for x in the array
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            cout << arr[i]<<"element found";  // Output index of element if found
            return 0;   
        }
    }

    // If element is not found, return -1
    cout << -1;
    return 0;
}

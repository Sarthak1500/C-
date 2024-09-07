
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  
    cin >> n;
    int arr[n];  // Now use n to declare the array
    int ans = INT_MAX;// the largest number 

    // Input the array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the minimum element
    for(int i = 0; i < n; i++) {
        if(arr[i] < ans) {
            ans = arr[i];
        }
    }

    // Print the minimum element
   cout<< "MIN IS<<"<<ans;
   return 0;
}

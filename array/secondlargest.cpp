
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  
    cin >> n;
    int arr[n];  // Now use n to declare the array
    int ans = INT_MIN;// the smallest number 
    int secondmax= INT_MIN;
    // Input the array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the MAX element
    for(int i = 0; i < n; i++) {
        if(arr[i] > ans) {
            ans = arr[i];
        }
    }

    // Print the minimum element
//    cout<< "MAX IS:"<<ans;
   // Find the  second MAX element
    for(int i = 0; i < n; i++) {
        if( ans !=arr[i] ) {
            secondmax = max(secondmax,arr[i]);
        }
    }
    //printing the second last element
    cout<<"second max is:"<<secondmax;
   return 0;
}

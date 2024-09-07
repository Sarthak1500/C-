
#include<bits/stdc++.h>
using namespace std;
// rotating array by swapping
int main(){
    int n;
    cin>>n;
    int arr[n];  // Now use n to declare the array
    // Input the array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i=0,j=n-1;
while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}

 for(int i = 0; i < n; i++) {
        cout<< arr[i]<<" ";
    }
   
}

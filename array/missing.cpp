#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum =0;
   int ans;
    int missing;
    int n;
    cin>>n;
    int arr [n];// taking user input for size of array
    
    for (int i=0; i<n-1 ; i++){// user input for array elements
        cin>>arr[i];
        sum=sum+arr[i];
    }
     ans = n*(n+1)/2;
    missing=ans-sum;
    cout<<"missing is:"<<missing;
     return 0;
    


}
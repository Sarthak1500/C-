#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum =0;
    int n;
    cin>>n;
    int arr [n];// taking user input for size of array
    
    for (int i=0; i<n ; i++){// user input for array elements
        cin>>arr[i];
    }
     for (int i=0; i<n ; i++){// printing the array element
        cout<<arr[i]<<" ";
        sum=sum+arr[1];
        
    }
    cout<<"sum is:"<<sum;
    
//cout<<"hello";

}
#include<bits/stdc++.h>
using namespace std;
peakelement(vector<int>nums){
    int n = nums.size();
    if(n==1 || nums[0]>nums[1]) return nums[00];
    for(int i=1;i<n-1;i++){
        if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) return nums[i];
    }
    if(nums[n-1]>nums[n-2]) return nums[n-1];
        

}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    cout<<peakelement(nums)<<endl;
    return 0;
}
    
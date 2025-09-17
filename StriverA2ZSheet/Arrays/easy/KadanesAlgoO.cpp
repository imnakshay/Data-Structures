#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &nums){
    if(nums.size() == 0) return 0;
    long long sum = nums[0];
    long long mSum = 0;
    for(int i = 0; i<nums.size();i++){
        sum +=nums[i];
        mSum = max(sum,mSum);
        if(sum<0) sum = 0;
    }
    return mSum;
}

int main(){
    vector<int> nums = {-2,4,-2,5}; //6
    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4}; //6
    cout<<maxSum(nums);
}
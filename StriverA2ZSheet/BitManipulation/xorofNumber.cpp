#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans=  0;
    for(int i = 0 ; i < 32 ; i++){
        int count = 0 ;
        for(size_t j = 0 ; j < nums.size() ; j++){
            if(nums[j] & (1<<i)) count++;
        }
        ans = ans | ((count % 3)<<i);
    }
    return ans;
}

int main(){
    vector<int> nums = {4,4,4,8,3,3,3};
    cout<<singleNumber(nums);
}
#include<bits/stdc++.h>
using namespace std;

vector<int> ans;
void subsets(vector<int> nums,int index=0 , int sum = 0){
    if(index >= nums.size()){
        ans.push_back(sum);
        return ;
    }
    subsets(nums,index+1,sum+nums[index]);
    subsets(nums,index+1,sum);
}

int main(){
    vector<int> nums = {3,1,2};
    subsets(nums);
    for(auto x: ans){
        cout<<x<<" ";
    }
}
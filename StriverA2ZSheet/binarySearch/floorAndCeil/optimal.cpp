#include<bits/stdc++.h>
using namespace std;

pair<int,int> floorAndCeil(vector<int> &nums,int target){
    int n = nums.size();
    int lowerBound = n;
    int left = 0,right = n-1;

    while(left<=right){
        int mid = left+(right-left)/2;
        if(nums[mid]>=target){
            lowerBound = mid;
            right = mid-1;
        }
        else left = mid+1;
    }
    if(lowerBound == 0) return {-1,nums[0]};
    if(lowerBound == n) return {nums[n-1],-1};
    if(nums[lowerBound] == target) return {target,target};
    else return {nums[lowerBound-1],nums[lowerBound]};

   

}

int main(){
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int x  = 11;
    pair<int,int> result = floorAndCeil(arr,x);
    cout<<result.first<< ' '<<result.second;

}
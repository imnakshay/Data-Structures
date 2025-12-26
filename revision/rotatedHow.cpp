#include<bits/stdc++.h>
using namespace std;

int timeRotated(vector<int> & nums){
    int n = nums.size();
    if( n < 2) return 0;
    int left = 0, right = n - 1;
    int pos = 0;
    while(left<=right){
        int mid = left + (right - left) /2;
        if(nums[left]<=nums[mid]){
            if(nums[pos] > nums[left]) pos = left;
            left = mid + 1;
        }
        else{
            if(nums[pos] > nums[mid]){
                pos = mid;
                right = mid;
            }
        }
    }
    return pos;
}

int main(){
    vector<int> nums = {4,5,6,0,1,2,3,4};
    cout<<timeRotated(nums);
}
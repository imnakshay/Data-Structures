#include<bits/stdc++.h>
using namespace std;

int peak(vector<int> & nums){
    int n =  nums.size();
    //base cases
    if(n == 1 && nums[0]>nums[1]) return 0;
    if(nums[n-1] > nums[n-2]) return n-1;

    int left = 0, right = n-1;
    while(left<right){
        int mid = left+(right-left)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
        if(nums[mid]<nums[mid+1]) left = mid+1;
        else right = mid; //to prevent making the first element as the mid;
    }
    return -1; //if no peek is found this is dummy.
}

int main(){
    vector<int> arr = {1,5,1,2,1};
    cout<<peak(arr);
}
#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> & nums, int target){
    int n = nums.size();
    if(n <= 0) return -1;

    int left = 0, right = n-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(nums[mid] < target) left = mid+1;
        else right=  mid-1;
    }
    return left;
}

int main(){
    vector<int> nums =  {1,2,2,3};
    //lower bound is the index where the value is greater than or equal to x for the first time in array.
    int target = 2; 
    cout<< lowerBound(nums,target); //the output should be 5;

}
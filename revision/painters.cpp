#include<bits/stdc++.h>
using namespace std;

int paintersRequired(vector<int> & nums, int area){
    int n = nums.size();
    int painters = 1;
    long long  sum = 0;
    for(auto x: nums){
        if(sum +x <= area) sum +=(long long) x;
        else {
            sum = x;
            painters++;
        }
    }
    return painters;
}

int minTime(vector<int> & nums,int painters){
    int n = nums.size();
    int left  = *max_element(nums.begin(),nums.end());
    int right = accumulate(nums.begin(),nums.end(),0);
    while(left<=right){
        int mid = left+(right - left)/2;
        if(paintersRequired(nums,mid)>painters) left = mid + 1;
        else right = mid - 1;
    }
    return left;
}

int main(){
    vector<int> nums = {10,20,30,40};
    int painters = 1;
    cout<<minTime(nums,painters);
}
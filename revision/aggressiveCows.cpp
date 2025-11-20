#include<bits/stdc++.h>
using namespace std;

int cowsCanPlaced(vector<int> & nums, int distance){
    int cows = 1;
    int prevCow = nums[0];
    for(int i = 1 ; i<nums.size();i++){
        if(nums[i] - prevCow >= distance){
            cows++;
            prevCow = nums[i];
        }
    }
    return cows;
}

int minMaxDistance(vector<int> & nums,int cows){
    int n = nums.size();
    if(n < 2 || cows < 2) return 0;
    if(n< cows) return -1;
    sort(nums.begin(),nums.end());

    int left = 1 , right = nums[n-1];
    while(left <= right){
        int mid = left + (right-left)/2;
        if(cowsCanPlaced(nums,mid) < cows) right = mid - 1;
        else left = mid + 1;
    }
    return right ;
}

int main(){
    vector<int> nums = {0,3,4,7,10,9};
    int cows = 4;
    cout<<minMaxDistance(nums,cows);
}